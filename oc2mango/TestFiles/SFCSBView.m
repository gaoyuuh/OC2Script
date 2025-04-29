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
        
        [self setDefaultValues:@"xxx" isText:YES block:nil];
        
        [SFCSBView title];
        [SFCSBView title1:19];
        
        int result = [SFCSBView title1:20];

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

    while (a < 10) {
        NSLog(@"a < 10");
        a++;
    }

    do {
        NSLog(@"a < 10");
        a++;
    } while (a < 10);

    for (int i = 0; i < 10; i++) {
        NSLog(@"%d",i);
        if (i == 0) {
            continue;
        }
    }
    
    SEL sel = @selector(clickAction:test:);
    
    self.frame = CGRectMake(0, 10, 100, 200);
    
    void (^resultBlock)(NSString *) = ^BOOL(NSString *str){
        return YES;
    };
    resultBlock(@"1");

    [@[] enumerateObjectsUsingBlock:^(NSDictionary * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        *stop = YES;
    }];
}

+ (NSString *)title{
    
    NSArray *ary = @[@1, @2, @3];
    for (NSNumber *item in ary) {
    }
    
    NSDictionary *dic = @{@"key": @"value", @"key1": @"value1"};
    
    int a = 10;
    switch (a) {
        case 1:
            printf("1");
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
            
        default:
            printf("default");
            printf("end");
            break;
    }
    
    NSString *result = a > 5 ? ">" : "<";
    
    return @"";
}

+ (int)title1:(int)a {
    return 1;
}

@end
