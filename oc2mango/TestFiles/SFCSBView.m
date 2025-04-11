//
//  SFCSBView.m
//  UICornerShadowView
//
//  Created by Jiang on 2020/2/28.
//  Copyright © 2020 SilverFruity. All rights reserved.
//

@interface SFCSBView()

@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) CGFloat cornerRadius;
@end

@implementation SFCSBView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setDefaultValues];
    }
    return self;
}

- (void)setDefaultValues:(NSString *)title isText:(BOOL)isText block:(void (^)(NSString *))block {
    int a = 1;
    long long b = 2;
    long long c = a + b;
    c += a;
    c -= a;
    c *= a;
    c /= a;
    c %= a;
    c &= a;
    c |= a;
    c ^= a;
    NSString *b = @"2";
    NSLog(@"%d",a);
    NSLog(@"%@",b);
    self.clipsToBounds = NO;

    if (a == 1) {
        NSLog(@"a == 1");
    } else if (a == 2) {
        NSLog(@"a == 2");
    } else {
        NSLog(@"a == 3");
    }

    for (int i = 0; i < 10; i++) {
        NSLog(@"%d",i);
        if (i == 0) {
            continue;
        }
    }
    
    void (^block)(NSString *) = ^BOOL(NSString *str){
        return YES;
    };
    block(@"1");

    [@[] enumerateObjectsUsingBlock:^(NSDictionary * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        *stop = YES;
    }];
}

+ (NSString *)title{
    return @"";
}

@end
