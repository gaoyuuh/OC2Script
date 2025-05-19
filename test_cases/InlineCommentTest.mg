class native InlineCommentTest: NSObject {

function testInlineComment() {
    NSLog("测试行内注释"); // 这是一个行内注释
    var a = 1; // 变量a的注释
    var str = "Hello"; // 字符串注释
    self.testBlock_b_(1, "1"); // 方法调用注释
    /* 这是一个块注释 */
    if (a > 0) {
        // if语句注释
        NSLog("a > 0");
    } else {
        // else注释
        NSLog("a <= 0");
    }
}
function testBlock_b_(a, b) {
    NSLog("测试带参数的方法"); // 方法实现注释
}
}
