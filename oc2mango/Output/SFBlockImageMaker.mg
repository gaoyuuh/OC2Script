class SFBlockImageMaker:NSObject<SFImageProcessor>{
@property(nonatomic,strong)NSMutableArray *dependencies;
@property(nonatomic,copy)Block isEnableHandler;
@property(nonatomic,copy)Block identifierHandler;
@property(nonatomic,copy)Block processHandler;

-(NSString *)identifier{
    if(self.identifierHandler && self.isEnable){
        return self.identifierHandler()();
    }
    return @"";
}
-(UIImage *)process:(UIImage *)target{
    if(self.processHandler && self.isEnable){
        return self.processHandler()(target);
    }
    return target;
}
-(id )init{
    self = super.init();
    self.dependencies = NSMutableArray.array();
    return self;
}
+(id )circle{
    return SFBlockImageMaker.imageMakerWithProcessHandler:isEnableHandler:identifierHandler:(^UIImage *(UIImage *image){
        if(ceil(image.size.width) != ceil(image.size.height)){
            image = self.centerSquare().process:(image);
        }
        SFCornerImageMaker *cornerMaker = SFCornerImageMaker.new();
        cornerMaker.position = UIRectEdgeAll;
        cornerMaker.radius = image.size.width * 0.500000;
        return cornerMaker.process:(image);
    },^BOOL {
        return YES;
    },^NSString *{
        return NSString.stringWithFormat:(@"circle");
    });
}
+(id )edgeInsets:(UIEdgeInsets )insets fillColor:(UIColor *)color{
    color = color ?: UIColor.clearColor();
    return SFBlockImageMaker.imageMakerWithProcessHandler:isEnableHandler:identifierHandler:(^UIImage *(UIImage *image){
        CGRect imageRect = CGRectMake(insets.left,insets.top,image.size.width,image.size.height);
        CGSize newSize = CGSizeZero;
        newSize.height = imageRect.size.height + insets.top + insets.bottom;
        newSize.width = imageRect.size.width + insets.left + insets.right;
        UIGraphicsBeginImageContextWithOptions(newSize,NO,0);
        CGContextRef context = UIGraphicsGetCurrentContext();
        color.setFill();
        CGContextFillRect(context,CGRectMake(0,0,newSize.width,newSize.height));
        image.drawInRect:(imageRect);
        UIImage *result = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        return result;
    },^BOOL {
        return YES;
    },^NSString *{
        return NSString.stringWithFormat:(@"edgeInsets_%@_%lu",NSValue.valueWithUIEdgeInsets:(insets),color.hash);
    });
}
+(id )centerRectWithAspect:(double )aspectRatio{
    return SFBlockImageMaker.imageMakerWithProcessHandler:isEnableHandler:identifierHandler:(^UIImage *(UIImage *image){
        double width = floor(image.size.width);
        double height = floor(image.size.height);
        double imageAspectRatio = width / height;
        if(imageAspectRatio == aspectRatio){
            return image;
        }
        double x = 0;
        double y = 0;
        if(imageAspectRatio < aspectRatio){
            y = floor(height - width / aspectRatio * 0.500000);
            height = width / aspectRatio;
        }else{
            x = floor(width - height * aspectRatio * 1 * 0.500000);
            width = height * aspectRatio * 1;
        }
        CGImageRef imageRef = CGImageCreateWithImageInRect(image.CGImage,CGRectMake(x,y,width,height));
        UIImage *newImage = UIImage.imageWithCGImage:(imageRef);
        CGImageRelease(imageRef);
        return newImage;
    },^BOOL {
        return aspectRatio != 0;
    },^NSString *{
        return NSString.stringWithFormat:(@"centerRect_%f",aspectRatio);
    });
}
+(id )resizeWithSize:(CGSize )targetSize{
    return SFBlockImageMaker.imageMakerWithProcessHandler:isEnableHandler:identifierHandler:(^UIImage *(UIImage *image){
        UIGraphicsBeginImageContextWithOptions(targetSize,NO,0);
        CGContextRef ctx = UIGraphicsGetCurrentContext();
        CGContextSetFillColorWithColor(ctx,UIColor.clearColor().CGColor);
        CGRect rect = CGRectMake(0,0,targetSize.width,targetSize.height);
        CGContextFillRect(ctx,rect);
        image.drawInRect:(rect);
        UIImage *result = UIGraphicsGetImageFromCurrentImageContext();
        UIGraphicsEndImageContext();
        return result;
    },^BOOL {
        return !CGSizeEqualToSize(targetSize,CGSizeZero);
    },^NSString *{
        return NSString.stringWithFormat:(@"resize_%@",NSValue.valueWithCGSize:(targetSize));
    });
}
+(id )centerSquare{
    return self.centerRectWithAspect:(1.000000);
}
+(id )resizeWithMaxValue:(double )maxValue{
    return SFBlockImageMaker.imageMakerWithProcessHandler:isEnableHandler:identifierHandler:(^UIImage *(UIImage *image){
        double currentMax = MAX(image.size.width,image.size.height);
        if(maxValue > currentMax){
            return image;
        }
        double ratio = image.size.width / image.size.height;
        CGSize size = ratio > 1 ? CGSizeMake(maxValue,maxValue / ratio) : CGSizeMake(maxValue / ratio,maxValue);
        return SFBlockImageMaker.resizeWithSize:(size).process:(image);
    },^BOOL {
        return maxValue != 0;
    },^NSString *{
        return NSString.stringWithFormat:(@"resizeMax_%@",@(maxValue));
    });
}
+(id )imageMakerWithProcessHandler:(Block)processHandler isEnableHandler:(Block)isEnableHandler identifierHandler:(Block)identifierHandler{
    SFBlockImageMaker *maker = SFBlockImageMaker.new();
    maker.processHandler = processHandler;
    maker.isEnableHandler = isEnableHandler;
    maker.identifierHandler = identifierHandler;
    return maker;
}
-(BOOL )isEnable{
    if(self.isEnableHandler){
        return self.isEnableHandler()();
    }
    return NO;
}
}
