//
//  SFCSBView.m
//  UICornerShadowView
//
//  Created by Jiang on 2020/2/28.
//  Copyright © 2020 SilverFruity. All rights reserved.
//

@interface SFCSBView()
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

- (void)setDefaultValues{
    self.clipsToBounds = NO;
}

@end
