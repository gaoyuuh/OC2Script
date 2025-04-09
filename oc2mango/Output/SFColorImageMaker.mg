class SFColorImageMaker:NSObject<SFImageGenerator,SFImageProcessor>{
@property(nonatomic,assign)CGSize size;
@property(nonatomic,strong)UIColor *color;
@property(nonatomic)BOOL enable;
@property(nonatomic,strong)NSMutableArray *dependencies;

-(BOOL )isEnable{
    return self.color != UIColor.clearColor() && !CGSizeEqualToSize(self.size,CGSizeZero);
}
-(UIImage *)process:(UIImage *)target{
    if(!self.isEnable){
        return UIImage.new();
    }
    CGRect rect = CGRectMake(0,0,self.size.width,self.size.height);
    UIGraphicsBeginImageContextWithOptions(self.size,NO,0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context,self.color.CGColor);
    CGContextSetAlpha(context,CGColorGetAlpha(self.color.CGColor));
    CGContextFillRect(context,rect);
    if(target){
        if(self.size.width < target.size.width || self.size.height < target.size.height){
        }else{
            CGPoint point = CGPointMake(self.size.width - target.size.width / 2,self.size.height - target.size.height / 2);
            target.drawInRect:(CGRectMake(point.x,point.y,target.size.width,target.size.height));
        }
    }
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}
-(id )init{
    self = super.init();
    self.dependencies = NSMutableArray.array();
    return self;
}
-(NSString *)identifier{
    return self.isEnable ? NSString.stringWithFormat:(@"_%@_%@",@(self.color.hash),NSValue.valueWithCGSize:(self.size)) : @"";
}
-(UIImage *)generate{
    return self.process:(nil);
}
+(id )imageMakerWithColor:(UIColor *)color{
    SFColorImageMaker *colorImage = self.class().new();
    colorImage.color = color;
    colorImage.size = CGSizeMake(1,1);
    return colorImage;
}
+(id )imageMakerWithColor:(UIColor *)color size:(CGSize )size{
    SFColorImageMaker *colorImage = self.imageMakerWithColor:(color);
    colorImage.size = size;
    return colorImage;
}
}
