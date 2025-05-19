#import <Foundation/Foundation.h>

@interface TestComment2 : NSObject

- (void)testMethod;
- (NSString *)stringWithValue:(NSInteger)value;
- (void)methodWithCommentBefore;

@end

@implementation TestComment2

// 这是一个测试方法的注释
// 包含多行注释
- (void)testMethod {
    NSLog(@"测试方法");
    
    /* 这是一个块注释
     * 包含多行
     * 用于测试注释处理
     */
    NSInteger value = 42;
    NSLog(@"值: %ld", (long)value);
}

// 带参数的方法注释
// 返回一个格式化后的字符串
- (NSString *)stringWithValue:(NSInteger)value {
    // 行内注释
    return [NSString stringWithFormat:@"值是: %ld", (long)value];
}

/* 这是方法前的块注释
 * 包含多行内容
 * 测试块注释是否正确保留
 */
- (void)methodWithCommentBefore {
    NSLog(@"测试前置块注释");
    // 方法内的注释
    NSInteger x = 123;
    NSLog(@"x = %ld", (long)x);
}

@end

// 全局函数前的注释
void testFunction() {
    // 函数内的注释
    NSLog(@"测试函数");
    
    /* 块注释 */
    NSInteger x = 100;
    NSLog(@"x = %ld", (long)x);
} 