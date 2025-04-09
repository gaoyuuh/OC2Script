class SFCornerImageMaker:NSObject<SFImageProcessor>{
@property(nonatomic,assign)double radius;
@property(nonatomic,strong)UIColor *fillColor;
@property(nonatomic,assign)UIRectCorner position;
@property(nonatomic)BOOL enable;
@property(nonatomic,strong)NSMutableArray *dependencies;

-(NSString *)identifier{
    return self.isEnable ? NSString.stringWithFormat:(@"_%@_%@",@(self.radius),@(self.position)) : @"";
}
-(id )init{
    self = super.init();
    self.fillColor = UIColor.clearColor();
    self.dependencies = NSMutableArray.array();
    return self;
}
-(UIImage *)process:(UIImage *)target{
    if(!self.isEnable){
        return target;
    }
    UIGraphicsBeginImageContextWithOptions(target.size,NO,0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGRect rect = CGRectMake(0,0,target.size.width,target.size.height);
    self.fillColor.setFill();
    CGContextFillRect(context,rect);
    if(self.radius != 0){
        UIBezierPath *path = UIBezierPath.bezierPathWithRoundedRect:byRoundingCorners:cornerRadii:(rect,self.position,CGSizeMake(self.radius,self.radius));
        path.addClip();
    }
    target.drawInRect:(rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}
-(BOOL )isEnable{
    return self.position != 0 && self.radius != 0;
}
}
