class native SFCSBView: UIView {

    function testTernaryExp() {
        // 注释
        NSLog("111");
        /// Jflsjd
        // 注释就分手了都放假了时代峻峰烦死了
        // 都放假了顺丰吉林省的减肥螺蛳粉
        var a = 10;
        /* fasdf 见风使舵假粉丝
         多行注释
         fjsldfj
        */
        var result = a > 10 ? "a>10" : "a<=10";
        NSLog("%@", result);
        /* zhus*/
        self.testBlock_b_(1, "1");
        // 注释
    }

    function testBlock_b_(a, b) {
        var a = "";
        var callBack = block (int  type, object  str) void {
        };
        callBack();
    }

    function test() {
        var dic = NSDictionary.dictionaryWithObjectsAndKeys_("value", "key", "value1", "key1", nil);
        var value = dic.objectForKey_("key");
        var temp = "key1";
        var value1 = dic.objectForKey_(temp);
        var ary = NSArray.arrayWithObjects_(1, 2, 3, nil);
        var number = ary.objectAtIndex_(0);
        var index = 1;
        var number1 = ary.objectAtIndex_(index);
        var sel = toselector("bz_flexCellWithTableView:");
        var pro = toProtocol("BHKitRouterProtocol");
        NSLog("%@ %@ %@ %@", value, value1, number, number1);
    }

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
        NSLog("%@", a);
        NSLog("%@", b);
        self.clipsToBounds = false;
        if (a == 1) {
            NSLog("a == 1");
        } else if (a == 2){
            NSLog("a == 2");
        } else {
            NSLog("a == 3");
        }
        while (a < 10) {
            NSLog("a < 10");
            a = a + 1;
        }
        do {
            NSLog("a < 10");
            a = a + 1;
        } while (a < 10);
        for (var i = 0; i < 10; i = i + 1) {
            NSLog("%@", i);
            if (i == 0) {
                continue;
            }
        }
        var sel = toselector("clickAction:test:");
        self.frame = CGRectMake(0, 10, 100, 200);
        var resultBlock = block (object  str) bool {
            return true;
        };
        resultBlock("1");
        NSArray.array().enumerateObjectsUsingBlock_(block (object  obj, uint64  idx, bool  stop) void {
            *stop = true;
        });
    }

    static function title() {
        var ary = NSArray.arrayWithObjects_(1, 2, 3, nil);
        for (var i = 0; i < ary.count; i = i + 1) {
            var item = ary.objectAtIndex_(i)
            if (item.intValue() == 1) {
                break;
            }
        }
        var number = ary.objectAtIndex_(1);
        var dic = NSDictionary.dictionaryWithObjectsAndKeys_("value", "key", "value1", "key1", nil);
        var value = dic.objectForKey_("key");
        var key1 = "key1";
        var value1 = dic.objectForKey_(key1);
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
