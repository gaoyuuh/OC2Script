class native SFCSBView: UIView {

function initWithFrame_(frame) {
    self = super.initWithFrame_(frame);
    if (self) {
        self.setDefaultValues();
        self.setDefaultValues_isText_block_("xxx", true, nil);
        SFCSBView.title();
        SFCSBView.title1_(19);
        var result = SFCSBView.title1_(20);
    }
    return self;
}
function setDefaultValues_isText_block_(title, isText, block) {
    var a = 1;
    var b = 2;
    var c = a + b;
    c += a;
    c -= a;
    c *= a;
    c /= a;
    c %= a;
    c &= a;
    c |= a;
    c ^= a;
    var b = "2";
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
        a = a + 1;
    }
    do{
        NSLog("a < 10");
        a = a + 1;
    }while(a < 10);
    for (var i = 0; i < 10; i = i + 1){
        NSLog("%d", i);
        if (i == 0) {
            continue;
        }
    }
    var sel = toselector("clickAction:test:");
    self.frame = CGRectMake(0, 10, 100, 200);
    var resultBlock = block (object  str)bool {
        return true;
    };
    resultBlock("1");
    NSArray.array().enumerateObjectsUsingBlock_(block (object  obj, uint64  idx, bool  stop)object {
        *stop = true;
    });
}
static function title() {
    var ary = NSArray.arrayWithObjects_(1, 2, 3, nil);
    for (var i = 0; i < ary.count; i = i + 1) {
        var item = ary[i]
    }
    var dic = NSDictionary.dictionaryWithObjectsAndKeys_("value", "key", "value1", "key1", nil);
    var a = 10;
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
    var result = a > 5 ? ">" : "<";
    return "";
}
static function title1_(a) {
    return 1;
}
}
