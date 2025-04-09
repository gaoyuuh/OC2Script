class SFImageMakerManager:NSObject{

-(UIImage *)startWithImage:(UIImage *)image processors:(NSArray *)processors{
    for (id processor in processors){
        image = self.recursiveProcess:processor:(image,processor);
    }
    return image;
}
-(UIImage *)recursiveProcess:(UIImage *)image processor:(id )processor{
    image = processor.process:(image);
    for (id subProcessor in processor.dependencies){
        image = self.recursiveProcess:processor:(image,subProcessor);
    }
    return image;
}
+(id )shared{
    dispatch_once_t onceToken;
    SFImageMakerManager *_instance = nil;
    dispatch_once(&onceToken,^void {
        _instance = SFImageMakerManager.new();
    });
    return _instance;
}
-(UIImage *)startWithGenerator:(id )generator processors:(NSArray *)processors{
    UIImage *image = generator.generate;
    if(generator.conformsToProtocol:(@protocol(SFImageProcessor))){
        id processor = generator;
        for (id sub in processor.dependencies){
            image = self.recursiveProcess:processor:(image,sub);
        }
    }
    return self.startWithImage:processors:(image,processors);
}
}
