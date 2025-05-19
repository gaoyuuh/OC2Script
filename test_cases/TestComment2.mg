class native TestComment2: NSObject {

function testMethod() {
    NSLog("测试方法"); /* 这是一个块注释
     * 包含多行
     * 用于测试注释处理
     */
    var value = 42;
    NSLog("值: %@", value);
}
function stringWithValue_(value) {
    // 行内注释
    return NSString.stringWithFormat_("值是: %ld", value);
}
function methodWithCommentBefore() {
    NSLog("测试前置块注释"); // 方法内的注释
    var x = 123;
    NSLog("x = %@", x);
}
}
