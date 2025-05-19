class native BlockCommentTest: NSObject {

function testBlockComment() {
    NSLog("%@", "测试行内块注释"); /* 这是一个行内块注释 */
    var str = "Hello"; /* 这是另一个行内块注释
                                * 包含多行内容
                                */
    NSLog("%@", str); /* zhus */
    /* 这是一个独立的块注释
     * 应该作为单独的一行显示
     */
    if (str.length > 0) {
        /* 条件判断注释 */
        NSLog("str不为空");
    }
}
function getResult() {
    var result = "结果"; /* 返回结果 */
    return result;
}
}
