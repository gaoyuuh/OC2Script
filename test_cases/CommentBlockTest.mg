class native CommentBlockTest: NSObject {

function regularMethod() {
    NSLog("这是一个普通方法");
}
function testBlock_b_(a, b) {
    var str = "";
    var callBack = block (int  type, object  str) void {
        NSLog("这是一个Block回调");
    };
    callBack(1, "test");
}
}
