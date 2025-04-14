class native SFCSBView: UIView {
@property(nonatomic,strong)NSString *title;
@property(nonatomic,assign)double cornerRadius;

function initWithFrame_(frame) {
    self = super.initWithFrame_(frame);
    if (self) {
        self.setDefaultValues();
        self.setDefaultValues_isText_block_("xxx", true, nil);
        SFCSBView.title();
        SFCSBView.title1_(19);
        int result = SFCSBView.title1_(20);
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
    NSString *b = "2";
    NSLog("%d", a);
    NSLog("%@", b);
    self.clipsToBounds = false;
    if (a == 1) {
        NSLog("a == 1");
    } else if (a == 2){
        NSLog("a == 2");
    } else {
        NSLog("a == 3");
    }
    while(a < 10){
        NSLog("a < 10");
        a++;
    }
    do{
        NSLog("a < 10");
        a++;
    }while(a < 10);
    for (int i = 0; i < 10; i++){
        NSLog("%d", i);
        if (i == 0) {
            continue;
        }
    }
    var sel = toselector("clickAction:test:");
    self.frame = CGRectMake(0, 10, 100, 200);
    var block = block (NSString  str)bool {
        return true;
    };
    block("1");
    @[].enumerateObjectsUsingBlock_(block (NSDictionary  obj, uint64  idx, bool  stop)void {
        *stop = true;
    });
}
static function title() {
    NSArray *ary = @[@(1),@(2),@(3)];
    for (var i = 0; i < ary.count; i = i + 1) {
        NSNumber *item = ary[i]
    }
    int a = 10;
    if (a == 1) {
        printf("1");
    } else if (a == 2) {
        printf("2");
    } else if (a == 3) {
        printf("3");
    } else {
        printf("default");
        printf("end");
    }
    return "";
}
static function title1_(a) {
    return 1;
}
}
