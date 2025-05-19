#import <Foundation/Foundation.h>

@interface TestComment : NSObject

@end


@implementation TestComment


// 这是方法前的单行注释
- (void)testMethod1 {
    NSLog(@"Test method 1");
}


/* 这是方法前的多行注释
 * 第二行
 * 第三行
 */
- (void)testMethod2 {
    NSLog(@"Test method 2");
}


@end
