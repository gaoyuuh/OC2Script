class SFBlurImageMaker:NSObject<SFImageProcessor>{
@property(nonatomic,assign)double blurRadius;
@property(nonatomic,strong)UIColor *tintColor;
@property(nonatomic,assign)double saturationDeltaFactor;
@property(nonatomic,strong,nullable)UIImage *maskImage;
@property(nonatomic,strong)NSMutableArray *dependencies;

-(NSString *)identifier{
    return self.isEnable ? NSString.stringWithFormat:(@"blureImage%.1f%lu%.1f",self.blurRadius,self.tintColor.hash,self.saturationDeltaFactor) : @"";
}
+(id )extraLightEffect{
    SFBlurImageMaker *maker = SFBlurImageMaker.new();
    maker.blurRadius = 40;
    maker.tintColor = UIColor.colorWithWhite:alpha:(0.970000,0.820000);
    maker.saturationDeltaFactor = 1.800000;
    return maker;
}
-(id )init{
    self = super.init();
    self.dependencies = NSMutableArray.array();
    return self;
}
+(id )lightEffect{
    SFBlurImageMaker *maker = SFBlurImageMaker.new();
    maker.blurRadius = 60;
    maker.tintColor = UIColor.colorWithWhite:alpha:(1.000000,0.300000);
    maker.saturationDeltaFactor = 1.800000;
    return maker;
}
-(UIImage *)process:(UIImage *)target{
    if(self.isEnable){
        return UIImageEffects.imageByApplyingBlurToImage:withRadius:tintColor:saturationDeltaFactor:maskImage:(target,self.blurRadius,self.tintColor,self.saturationDeltaFactor,self.maskImage);
    }
    return target;
}
+(id )darkEffect{
    SFBlurImageMaker *maker = SFBlurImageMaker.new();
    maker.blurRadius = 40;
    maker.tintColor = UIColor.colorWithWhite:alpha:(0.110000,0.730000);
    maker.saturationDeltaFactor = 1.800000;
    return maker;
}
+(id )tintEffectWithColor:(UIColor *)tintColor{
    SFBlurImageMaker *maker = SFBlurImageMaker.new();
    double EffectColorAlpha = 0.600000;
    UIColor *effectColor = tintColor;
    uint componentCount = CGColorGetNumberOfComponents(tintColor.CGColor);
    if(componentCount == 2){
        double b;
        if(tintColor.getWhite:alpha:(&b,NULL)){
            effectColor = UIColor.colorWithWhite:alpha:(b,EffectColorAlpha);
        }
    }else{
        double r;
        double g;
        double b;
        if(tintColor.getRed:green:blue:alpha:(&r,&g,&b,NULL)){
            effectColor = UIColor.colorWithRed:green:blue:alpha:(r,g,b,EffectColorAlpha);
        }
    }
    maker.blurRadius = 20;
    maker.saturationDeltaFactor = -1.000000;
    maker.tintColor = effectColor;
    return maker;
}
-(BOOL )isEnable{
    return self.blurRadius != 0 && self.tintColor != nil;
}
}
