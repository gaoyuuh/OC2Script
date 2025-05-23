//
//  main.m
//  oc2script
//
//  Created by gaoyu on 2025/5/20.
//

#import <Foundation/Foundation.h>
#import <oc2scriptLib/Convert.h>
#import <oc2scriptLib/Parser.h>
#import <oc2scriptLib/RunnerClasses.h>

long long fileSizeAtPath(NSString* filePath)
{
    NSFileManager* manager = [NSFileManager defaultManager];
    if ([manager fileExistsAtPath:filePath]){
        return [[manager attributesOfItemAtPath:filePath error:nil] fileSize];
    }
    return 0;
}
float folderSizeAtPath(NSString *folderPath){
    NSFileManager* manager = [NSFileManager defaultManager];
    if (![manager fileExistsAtPath:folderPath]) return 0;
    NSEnumerator *childFilesEnumerator = [[manager subpathsAtPath:folderPath] objectEnumerator];
    NSString* fileName;
    long long folderSize = 0;
    while ((fileName = [childFilesEnumerator nextObject]) != nil){
        NSString* fileAbsolutePath = [folderPath stringByAppendingPathComponent:fileName];
        folderSize += fileSizeAtPath(fileAbsolutePath);
    }
    return folderSize;
}
void recursiveLookupCompileFiles(NSString *path,NSMutableArray *dirs,NSMutableArray *files){
    BOOL isDir;
    if ([[NSFileManager defaultManager] fileExistsAtPath:path isDirectory:&isDir]) {
        if ([@[@"h",@"m"] containsObject:path.pathExtension.lowercaseString]) {
            [files addObject:path];
        }else if (isDir) {
            [dirs addObject:path];
            NSError *error;
            NSArray <NSString *> *filenames = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:path error:&error];
            for (NSString *filename in filenames) {
                recursiveLookupCompileFiles([path stringByAppendingPathComponent:filename],dirs,files);
            }
            return;
        }
    }
}

int main(int argc, const char * argv[]) {
    char opt = 0;
    BOOL help = NO;
    while ((opt = getopt(argc, (char * const *)argv, "h")) != -1) {
        switch (opt) {
            case 'h':{
                help = YES;
                break;
            }
            default:{
                break;
            }
        }
    }
    if (help || argc != 3) {
        printf("oc2mango input_dir output_dir \n");
        printf("Example: oc2mango /HMFilesDir /mangoFilesDir \n");
        return 0;
    }
    NSString *inputDir  = [NSString stringWithUTF8String:argv[1]];
    NSString *outputDir = [NSString stringWithUTF8String:argv[2]];
    BOOL isDir = YES;
    BOOL existed = [[NSFileManager defaultManager] fileExistsAtPath:outputDir isDirectory:&isDir];
    if (existed && !isDir){
        NSLog(@"输出路径已经存在，不为文件夹~");
        return 0;
    }
    if (!existed){
        [[NSFileManager defaultManager] createDirectoryAtPath:outputDir withIntermediateDirectories:YES attributes:nil error:nil];
    }
    NSMutableArray *dirs = [NSMutableArray array];
    NSMutableArray *files = [NSMutableArray array];
    NSDate *startDate = [NSDate new];
    NSDate *endDate = [NSDate new];
    startDate = [NSDate new];
    
    recursiveLookupCompileFiles(inputDir, dirs, files);
    AST *result = [AST new];
    Parser *parser = [Parser new];
    for (NSString *path in files) {
        AST *ast = [parser parseCodeSource:[[CodeSource alloc] initWithFilePath:path]];
        [result merge:ast.nodes];
    }
    endDate = [NSDate new];
    NSLog(@"raw files size: %.2fKB", folderSizeAtPath(inputDir) / 1000);
    NSLog(@"compile time: %fs",[endDate timeIntervalSince1970] - [startDate timeIntervalSince1970]);
    
    Convert *convert = [[Convert alloc] init];
    __block NSError *error = nil;
    [result.classCache enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, ORClass* class, BOOL * _Nonnull stop) {
        NSString *filename = [NSString stringWithFormat:@"%@.mg",key];
        NSString *filepath = [outputDir stringByAppendingPathComponent:filename];
        NSString *script = [convert convert:class];
        NSLog(@"\n==================\n%@\n==================\n", script);
        [script writeToFile:filepath atomically:YES encoding:NSUTF8StringEncoding error:&error];
        if (error) {
            NSLog(@"oc2mango: %@ - error: %@",filepath, error.localizedDescription);
        }
    }];
    if (error == nil) {
        NSLog(@"oc2mango: convert success!");
    }
    return 0;
}
