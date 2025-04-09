class SFBorderImageMaker:NSObject<SFImageProcessor>{
@property(nonatomic,assign)double width;
@property(nonatomic,strong)UIColor *color;
@property(nonatomic,strong)UIColor *fillColor;
@property(nonatomic,assign)UIBorderPostion position;
@property(nonatomic,assign)BOOL enable;
@property(nonatomic,strong,nullable)SFCornerImageMaker *cornerMaker;
@property(nonatomic,strong)NSMutableArray *dependencies;

-(UIEdgeInsets )strokeEdgeInsets{
    double left = 0;
    double right = 0;
    double top = 0;
    double bottom = 0;
    left = self.position & UIBorderPostionLeft ? self.width / 2 : -self.width / 2;
    right = self.position & UIBorderPostionRight ? self.width / 2 : -self.width / 2;
    top = self.position & UIBorderPostionTop ? self.width / 2 : -self.width / 2;
    bottom = self.position & UIBorderPostionBottom ? self.width / 2 : -self.width / 2;
    return UIEdgeInsetsMake(top,left,bottom,right);
}
-(UIImage *)process:(UIImage *)target{
    if(!self.isEnable){
        return target;
    }
    if(!target){
        return UIImage.new();
    }
    CGRect rect = CGRectMake(0,0,target.size.width,target.size.height);
    UIGraphicsBeginImageContextWithOptions(rect.size,NO,0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    self.color.setStroke();
    self.fillColor.setFill();
    CGContextFillRect(context,rect);
    target.drawInRect:(rect);
    SFCornerImageMaker *cornerMaker = self.cornerMaker;
    if(cornerMaker){
        UIBezierPath *clipPath = UIBezierPath.bezierPathWithRoundedRect:byRoundingCorners:cornerRadii:(rect,cornerMaker.position,CGSizeMake(cornerMaker.radius,cornerMaker.radius));
        clipPath.addClip();
    }
    CGRect strokeRect = CGContextGetClipBoundingBox(context);
    strokeRect = self.strokeRectWithSize:(target.size);
    UIBezierPath *linePath;
    if(!cornerMaker || self.width > cornerMaker.radius || cornerMaker.radius == 0){
        linePath = UIBezierPath.bezierPathWithRect:(strokeRect);
    }else{
        linePath = UIBezierPath.bezierPathWithRoundedRect:byRoundingCorners:cornerRadii:(strokeRect,cornerMaker.position,CGSizeMake(cornerMaker.radius,cornerMaker.radius));
    }
    linePath.lineWidth = self.width;
    if(cornerMaker.radius > 0){
        linePath.lineCapStyle = kCGLineCapRound;
        linePath.lineJoinStyle = kCGLineJoinRound;
    }
    linePath.stroke();
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}
-(id )init{
    self = super.init();
    self.fillColor = UIColor.clearColor();
    self.dependencies = NSMutableArray.array();
    return self;
}
-(CGPoint )strokeOrigin{
    UIEdgeInsets insets = self.strokeEdgeInsets();
    return CGPointMake(insets.left,insets.top);
}
-(NSString *)identifier{
    return self.isEnable ? NSString.stringWithFormat:(@"_%@_%@_%@",@(self.color.hash),@(self.width),@(self.position)) : @"";
}
-(CGSize )strokeSizeWithSize:(CGSize )size{
    UIEdgeInsets insets = self.strokeEdgeInsets();
    return CGSizeMake(size.width - insets.left - insets.right,size.height - insets.top - insets.bottom);
}
-(CGRect )strokeRectWithSize:(CGSize )size{
    CGPoint origin = self.strokeOrigin();
    CGSize rectSize = self.strokeSizeWithSize:(size);
    return CGRectMake(origin.x,origin.y,rectSize.width,rectSize.height);
}
-(BOOL )isEnable{
    return self.color != nil && self.color != UIColor.clearColor() && self.width != 0;
}
}
