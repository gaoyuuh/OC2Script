class SFCSBView: UIView {
@property(nonatomic,strong)NSString *title;
@property(nonatomic,assign)double cornerRadius;

function initWithFrame_(frame) {
    self = super.initWithFrame:(frame);
    if (self) {
        self.setDefaultValues();
    }
    return self;
}
function setDefaultValues_isText_block_(title, isText, block) {
    int a = 1;
    int64 b = 2;
    int64 c = a + b;
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
    self.clipsToBounds = false;
    if (a == 1) {
        NSLog(@"a == 1");
    } else if (a == 2){
        NSLog(@"a == 2");
    } else {
        NSLog(@"a == 3");
    }
    for (int i = 0; i < 10; i++){
        NSLog(@"%d",i);
        if (i == 0) {
            continue;
        }
    }
    var block = block (NSString  str)bool {
        return true;
    };
    block(@"1");
    @[].enumerateObjectsUsingBlock:(block (NSDictionary  obj, uint64  idx, bool  stop)void {
        *stop = true;
    });
}
static function title_() {
    return @"";
}
}
