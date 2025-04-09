class SFCSBViewImageCache:NSObject{
@property(nonatomic,strong)NSCache *cache;

+(id )shared{
    dispatch_once_t onceToken;
    SFCSBViewImageCache *_instance = nil;
    dispatch_once(&onceToken,^void {
        _instance = SFCSBViewImageCache.new();
    });
    return _instance;
}
-(id )init{
    self = super.init();
    self.cache = NSCache.alloc().init();
    self.cache.totalCostLimit = 10 * 1024 * 1024;
    return self;
}
-(UIImage *)objectForKey:(NSString *)key{
    return self.cache.objectForKey:(key);
}
-(void )setObject:(UIImage *)obj forKey:(NSString *)key{
    if(!obj){
        return ;
    }
    self.cache.setObject:forKey:(obj,key);
}
}
