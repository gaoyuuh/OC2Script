#import <Foundation/Foundation.h>

@interface CommentBlockTest : NSObject

- (void)testBlock:(int)a b:(NSString *)b;

@end

@implementation CommentBlockTest

// 行注释
// 这是测试行注释的方法
- (void)regularMethod {
    NSLog(@"这是一个普通方法");
}

/* 这是方法前的块注释
 * 包含多行内容
 * 测试转换功能是否正常工作
 */
- (void)testBlock:(int)a b:(NSString *)b {
    NSString *str = @"";
    
    void(^callBack)(int type, NSString *str) = ^(int type, NSString *str) {
        NSLog(@"这是一个Block回调");
    };
    callBack(1, @"test");
}

@end 