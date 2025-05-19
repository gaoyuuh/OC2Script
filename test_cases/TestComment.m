#import <Foundation/Foundation.h>

// 行注释
/* 块注释 */

/**
 * 多行块注释
 * 第二行
 */

@implementation TestComment

// 方法前的行注释
- (void)testMethod {
    NSLog(@"测试方法");
    // 方法内的行注释
    int a = 1; // 行内注释
    
    /*
     * 方法内的多行注释
     * 第二行
     */
}

/* 方法之间的块注释 */

- (void)anotherMethod {
    NSLog(@"另一个方法");
}

@end
