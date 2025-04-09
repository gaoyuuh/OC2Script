class SFCSBView:UIView{

-(id )initWithFrame:(CGRect )frame{
    self = super.initWithFrame:(frame);
    if(self){
        self.setDefaultValues();
    }
    return self;
}
-(void )setDefaultValues{
    self.clipsToBounds = NO;
}
}
