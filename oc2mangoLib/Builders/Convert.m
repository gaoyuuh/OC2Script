//
//  Convert.m
//  oc2mangoLib
//
//  Created by Jiang on 2019/5/18.
//  Copyright © 2019年 SilverFruity. All rights reserved.
//

#import "Convert.h"
#import "MakeDeclare.h"

@implementation Convert

- (NSString *)convert:(ORNode *)node{
    NSString *result = @"";
    if ([node isKindOfClass:[ORDeclareExpression class]]) {
        result = [self convertDeclareExp:(ORDeclareExpression *)node];
    }else if ([node isKindOfClass:[ORAssignExpression class]]) {
        result = [self convertAssignExp:(ORAssignExpression *)node];
    }else if ([node isKindOfClass:[ORValueExpression class]]){
        result = [self convertOCValue:(ORValueExpression *)node];
    }else if ([node isKindOfClass:[ORIntegerValue class]]){
        result = [self convertORIntegerValue:(ORIntegerValue *)node];
    }else if ([node isKindOfClass:[ORIntegerValue class]]){
        result = [self convertORUIntegerValue:(ORUIntegerValue *)node];
    }else if ([node isKindOfClass:[ORDoubleValue class]]){
        result = [self convertORDoubleValue:(ORDoubleValue *)node];
    }else if ([node isKindOfClass:[ORBoolValue class]]){
        result = [self convertORBoolValue:(ORBoolValue *)node];
    }else if ([node isKindOfClass:[ORBinaryExpression class]]){
        result = [self convertBinaryExp:(ORBinaryExpression *)node];
    }else if ([node isKindOfClass:[ORUnaryExpression class]]){
        result = [self convertUnaryExp:(ORUnaryExpression *)node];
    }else if ([node isKindOfClass:[ORTernaryExpression class]]){
        result = [self convertTernaryExp:(ORTernaryExpression *)node];
    }else if ([node isKindOfClass:[ORFunctionImp class]]){
        result = [self convertBlockImp:(ORFunctionImp *)node];
    }else if ([node isKindOfClass:[ORMethodCall class]]){
        result = [self convertOCMethodCall:(ORMethodCall *)node];
    }else if ([node isKindOfClass:[ORCFuncCall class]]){
        result = [self convertFunCall:(ORCFuncCall *)node];
    }else if ([node isKindOfClass:[ORSubscriptExpression class]]){
        result = [self convertSubscript:(ORSubscriptExpression *)node];
    } else if ([node isKindOfClass:[ORReturnStatement class]]) {
        result = [self convertReturnStatement:(ORReturnStatement *) node];
    } else if ([node isKindOfClass:[ORBreakStatement class]]) {
        result = [self convertBreakStatement:(ORBreakStatement *) node];
    } else if ([node isKindOfClass:[ORContinueStatement class]]) {
        result = [self convertContinueStatement:(ORContinueStatement *) node];
    }else if ([node isKindOfClass:[ORIfStatement class]]) {
        result = [self convertIfStatement:(ORIfStatement *) node];
    }else if([node isKindOfClass:[ORWhileStatement class]]){
        result = [self convertWhileStatement:(ORWhileStatement *) node];
    }else if([node isKindOfClass:[ORDoWhileStatement class]]){
        result = [self convertDoWhileStatement:(ORDoWhileStatement *) node];
    }else if ([node isKindOfClass:[ORSwitchStatement class]]) {
        result = [self convertSwitchStatement:(ORSwitchStatement *) node];
    } else if ([node isKindOfClass:[ORForStatement class]]) {
        result = [self convertForStatement:(ORForStatement *) node];
    } else if ([node isKindOfClass:[ORForInStatement class]]) {
        result = [self convertForInStatement:(ORForInStatement *) node];
    }else if ([node isKindOfClass:[ORClass class]]) {
        result = [self convertOCClass:(ORClass *)node];
    }
    if (node.withSemicolon == YES) {
        result = [result stringByAppendingString:@";"];
    }
    return result;
}

- (NSString *)convertOCClass:(ORClass *)occlass{
    NSMutableString *content = [NSMutableString string];
    [content appendFormat:@"class native %@: %@",occlass.className, occlass.superClassName];
    if (occlass.protocols.count > 0) {
        [content appendFormat:@" <%@>",[occlass.protocols componentsJoinedByString:@", "]];
    }
    [content appendString:@" {\n"];
    for (ORPropertyDeclare *prop in occlass.properties) {
        [content appendString:[self convertPropertyDeclare:prop]];
    }
    for (ORMethodImplementation *imp in occlass.methods) {
        [content appendString:[self convertMethodImp:imp]];
    }
    [content appendString:@"\n}\n"];
    return content;
}

- (NSString *)convertTypeSpecial:(ORTypeSpecial *)typeSpecial{
    NSMutableString *result = [NSMutableString string];
    switch (typeSpecial.type){
        case TypeUChar:
            [result appendString:@"uchar"]; break;
        case TypeUShort:
            [result appendString:@"ushort"]; break;
        case TypeUInt:
            [result appendString:@"uint"]; break;
        case TypeULong:
            [result appendString:@"ulong"]; break;
        case TypeULongLong:
            [result appendString:@"uint64"]; break;
        case TypeChar:
            [result appendString:@"char"]; break;
        case TypeShort:
            [result appendString:@"short"]; break;
        case TypeInt:
            [result appendString:@"int"]; break;
        case TypeLong:
            [result appendString:@"long"]; break;
        case TypeLongLong:
            [result appendString:@"int64"]; break;
        case TypeDouble:
            [result appendString:@"double"]; break;
        case TypeFloat:
            [result appendString:@"float"]; break;
        case TypeVoid:
            [result appendString:@"void"]; break;
        case TypeSEL:
            [result appendString:@"var"]; break;
        case TypeClass:
            [result appendString:@"var"]; break;
        case TypeBOOL:
            [result appendString:@"bool"]; break;
        case TypeId:
            [result appendString:@"id"]; break;
        case TypeObject:
            [result appendString:typeSpecial.name]; break;
        case TypeBlock:
            [result appendString:@"Block"]; break;
            
        case TypeStruct:
            [result appendString:typeSpecial.name]; break;
            break;
        default:
            [result appendString:@"UnKnownType"];
            break;
    }
    [result appendString:@" "];
    
    return result;
}

- (NSString *)convertPropertyDeclare:(ORPropertyDeclare *)propertyDecl{
    
    return [NSString stringWithFormat:@"@property(%@)%@;\n",[propertyDecl.keywords componentsJoinedByString:@","],[self convertDeclareTypeVarPair:propertyDecl.var]];
    return @"";
}

- (NSString *)convertMethoDeclare:(ORMethodDeclare *)methodDecl{
    NSString *methodName = @"";
    if (methodDecl.parameterNames.count == 0) {
        methodName = methodDecl.methodNames.firstObject;
    }else{
        NSMutableArray *list = [NSMutableArray array];
        for (int i = 0; i < methodDecl.parameterNames.count; i++) {
            [list addObject:[NSString stringWithFormat:@"%@:(%@)%@",
                             methodDecl.methodNames[i],
                             [self convertDeclareTypeVarPair:methodDecl.parameterTypes[i]],
                             methodDecl.parameterNames[i]]];
        }
        methodName = [list componentsJoinedByString:@" "];
    }
    return [NSString stringWithFormat:@"%@(%@)%@",methodDecl.isClassMethod?@"+":@"-",[self convertDeclareTypeVarPair:methodDecl.returnType],methodName];
}

- (NSString *)convertMethodImp:(ORMethodImplementation *)methodImp{
    NSMutableString *result = [NSMutableString string];
    ORMethodDeclare *declare = methodImp.declare;
    
    // 根据是否是类方法添加适当的关键字
    if (declare.isClassMethod) {
        [result appendString:@"\nstatic function "];
    } else {
        [result appendString:@"\nfunction "];
    }
    
    // 处理方法名：根据是否有参数决定是否添加下划线
    NSMutableString *methodName = [NSMutableString string];
    
    // 如果没有参数，直接使用方法名，不添加下划线
    if (declare.parameterNames.count == 0) {
        if (declare.methodNames.count > 0) {
            NSString *namePart = declare.methodNames[0];
            // 如果有冒号就移除
            if ([namePart hasSuffix:@":"]) {
                [methodName appendString:[namePart substringToIndex:namePart.length - 1]];
            } else {
                [methodName appendString:namePart];
            }
        }
    } else {
        // 有参数的情况，添加与参数数量匹配的下划线
        NSInteger paramCount = declare.parameterNames.count;
        NSInteger nameCount = MIN(declare.methodNames.count, paramCount);
        
        for (NSInteger i = 0; i < nameCount; i++) {
            NSString *namePart = declare.methodNames[i];
            
            // 移除冒号
            if ([namePart hasSuffix:@":"]) {
                [methodName appendString:[namePart substringToIndex:namePart.length - 1]];
            } else {
                [methodName appendString:namePart];
            }
            
            // 添加下划线
            [methodName appendString:@"_"];
        }
    }
    
    [result appendString:methodName];
    [result appendString:@"("];
    
    // 添加参数（不带类型）
    if (declare.parameterNames.count > 0) {
        [result appendString:[declare.parameterNames componentsJoinedByString:@", "]];
    }
    
    [result appendString:@") "];
    
    // 添加函数体
    [result appendString:[self convertScopeImp:methodImp.scopeImp]];
    
    return result;
}

- (NSString *)convertFuncDeclare:(ORFuncDeclare *)funcDecl{
    return [NSString stringWithFormat:@"%@%@",[self convertDeclareTypeVarPair:funcDecl.returnType],[self convertVariable:funcDecl.funVar]];;
}

int indentationCont = 0;
- (NSString *)convertScopeImp:(ORScopeImp *)imp{
    NSMutableString *content = [NSMutableString string];
    indentationCont++;
    [content appendString:@"{\n"];
    NSMutableString *tabs = [@"" mutableCopy];
    for (int i = 0; i < indentationCont - 1; i++) {
        [tabs appendString:@"    "];
    }
    for (id statement in imp.statements) {
        if ([statement isKindOfClass:[ORNode class]]) {
            [content appendFormat:@"%@    %@\n",tabs,[self convert:statement]];
        }
    }
    [content appendFormat:@"%@}",tabs];
    indentationCont--;
    return content;
}

- (NSString *)convertBlockImp:(ORFunctionImp *)imp{
    NSMutableString *content = [NSMutableString string];
    
    // 添加block关键字
    [content appendString:@"block"];
    
    if (imp.declare) {
        // 添加参数列表，每个参数必须指定类型
        [content appendString:@" ("];  // 在block关键字和左括号之间添加空格
        if (imp.declare.funVar && imp.declare.funVar.pairs.count > 0) {
            NSMutableArray *paramList = [NSMutableArray array];
            for (ORTypeVarPair *pair in imp.declare.funVar.pairs) {
                // 获取参数名和类型
                NSString *paramName = pair.var.varname;
                NSString *paramType = [self convertTypeSpecial:pair.type];  // 只获取类型名，不包含变量名
                
                // 格式化为"类型 参数名"，添加空格
                [paramList addObject:[NSString stringWithFormat:@"%@ %@", paramType, paramName]];
            }
            [content appendString:[paramList componentsJoinedByString:@", "]];
        }
        [content appendString:@")"];
        
        // 添加返回值类型，不能省略
        NSString *returnType = @"void";
        if (imp.declare.returnType) {
            returnType = [self convertTypeSpecial:imp.declare.returnType.type];  // 只获取类型名
        }
        [content appendString:returnType];
    } else {
        // 如果没有声明信息，提供一个默认的
        [content appendString:@" ()void"];  // 在block关键字和左括号之间添加空格
    }
    
    // 添加函数体
    [content appendString:[self convertScopeImp:imp.scopeImp]];
    
    return content;
}

- (NSString *)convertBinaryExp:(ORBinaryExpression *)exp{
    NSString *operator = @"";
    switch (exp.operatorType) {
        case BinaryOperatorAdd:
            operator = @"+";
            break;
        case BinaryOperatorSub:
            operator = @"-";
            break;
        case BinaryOperatorDiv:
            operator = @"/";
            break;
        case BinaryOperatorMulti:
            operator = @"*";
            break;
        case BinaryOperatorMod:
            operator = @"%";
            break;
        case BinaryOperatorShiftLeft:
            operator = @"<<";
            break;
        case BinaryOperatorShiftRight:
            operator = @">>";
            break;
        case BinaryOperatorAnd:
            operator = @"&";
            break;
        case BinaryOperatorOr:
            operator = @"|";
            break;
        case BinaryOperatorXor:
            operator = @"^";
            break;
        case BinaryOperatorLT:
            operator = @"<";
            break;
        case BinaryOperatorGT:
            operator = @">";
            break;
        case BinaryOperatorLE:
            operator = @"<=";
            break;
        case BinaryOperatorGE:
            operator = @">=";
            break;
        case BinaryOperatorNotEqual:
            operator = @"!=";
            break;
        case BinaryOperatorEqual:
            operator = @"==";
            break;
        case BinaryOperatorLOGIC_AND:
            operator = @"&&";
            break;
        case BinaryOperatorLOGIC_OR:
            operator = @"||";
            break;
    }
    return [NSString stringWithFormat:@"%@ %@ %@",[self convert:exp.left],operator,[self convert:exp.right]];
}

- (NSString *)convertUnaryExp:(ORUnaryExpression *)exp{
    NSString *format = @"%@";
    switch (exp.operatorType) {
            
        case UnaryOperatorIncrementSuffix:
            format = @"%@++";
            break;
        case UnaryOperatorDecrementSuffix:
            format = @"%@--";
            break;
        case UnaryOperatorIncrementPrefix:
            format = @"++%@";
            break;
        case UnaryOperatorDecrementPrefix:
            format = @"--%@";
            break;
        case UnaryOperatorNot:
            format = @"!%@";
            break;
        case UnaryOperatorNegative:
            format = @"-%@";
            break;
        case UnaryOperatorBiteNot:
            format = @"-%@";
            break;
        case UnaryOperatorSizeOf:
            format = @"~%@";
            break;
        case UnaryOperatorAdressPoint:
            format = @"&%@";
            break;
        case UnaryOperatorAdressValue:
            format = @"*%@";
            break;
    }
    return [NSString stringWithFormat:format,[self convert:exp.value]];
}

- (NSString *)convertTernaryExp:(ORTernaryExpression *)exp{
    if (exp.values.count == 1) {
        return [NSString stringWithFormat:@"%@ ?: %@",[self convert:exp.expression],[self convert:exp.values.firstObject]];
    }else{
        return [NSString stringWithFormat:@"%@ ? %@ : %@",[self convert:exp.expression],[self convert:exp.values.firstObject],[self convert:exp.values.lastObject]];
    }
}

- (NSString *)convertDeclareExp:(ORDeclareExpression *)exp{
    if (exp.expression) {
        return [NSString stringWithFormat:@"%@ = %@",[self convertDeclareTypeVarPair:exp.pair],[self convert:exp.expression]];
    }else{
        return [NSString stringWithFormat:@"%@",[self convertDeclareTypeVarPair:exp.pair]];
    }
    return @"";
}

- (NSString *)convertAssignExp:(ORAssignExpression *)exp{
    NSString *operator = @"=";
    switch (exp.assignType) {
        case AssignOperatorAssign:
            operator = @"=";
            break;
        case AssignOperatorAssignAnd:
            operator = @"&=";
            break;
        case AssignOperatorAssignOr:
            operator = @"|=";
            break;
        case AssignOperatorAssignXor:
            operator = @"^=";
            break;
        case AssignOperatorAssignAdd:
            operator = @"+=";
            break;
        case AssignOperatorAssignSub:
            operator = @"-=";
            break;
        case AssignOperatorAssignDiv:
            operator = @"/=";
            break;
        case AssignOperatorAssignMuti:
            operator = @"*=";
            break;
        case AssignOperatorAssignMod:
            operator = @"%=";
            break;
        case AssignOperatorAssignShiftLeft:
            operator = @"<<=";
            break;
        case AssignOperatorAssignShiftRight:
            operator = @">>=";
            break;
    }
    return [NSString stringWithFormat:@"%@ %@ %@",[self convert:exp.value],operator,[self convert:exp.expression]];
}

- (NSString *)convertORIntegerValue:(ORIntegerValue *)value{
    return [NSString stringWithFormat:@"%lld",value.value];
}

- (NSString *)convertORUIntegerValue:(ORUIntegerValue *)value{
    return [NSString stringWithFormat:@"%llu",value.value];
}

- (NSString *)convertORDoubleValue:(ORDoubleValue *)value{
    return [NSString stringWithFormat:@"%f",value.value];
}

- (NSString *)convertORBoolValue:(ORBoolValue *)value{
    return [NSString stringWithFormat:@"%@",value.value ? @"true" : @"false"];
}

- (NSString *)convertOCValue:(ORValueExpression *)value{
    switch (value.value_type){
        case OCValueSelector:
            return [NSString stringWithFormat:@"toselector(\"%@\")", value.value];
        case OCValueVariable:
            return value.value;
        case OCValueSelf:
            return @"self";
        case OCValueSuper:
            return @"super";
        case OCValueString:
            return [NSString stringWithFormat:@"\"%@\"",value.value?:@""];
        case OCValueCString:
            return [NSString stringWithFormat:@"\"%@\"",value.value?:@""];
        case OCValueProtocol:
            return [NSString stringWithFormat:@"@protocol(%@)",value.value];
        case OCValueDictionary:
        {
            NSMutableArray <NSMutableArray *>*keyValuePairs = value.value;
            NSMutableArray *pairs = [NSMutableArray array];
            for (NSMutableArray *keyValue in keyValuePairs) {
                [pairs addObject:[NSString stringWithFormat:@"%@:%@",[self convert:keyValue[0]],[self convert:keyValue[1]]]];
            }
            return [NSString stringWithFormat:@"@{%@}",[pairs componentsJoinedByString:@","]];
        }
        case OCValueArray:{
            NSMutableArray *exps = value.value;
            NSMutableArray *elements = [NSMutableArray array];
            for (ORNode * exp in exps) {
                [elements addObject:[self convert:exp]];
            }
            return [NSString stringWithFormat:@"@[%@]",[elements componentsJoinedByString:@","]];
        }
        case OCValueNSNumber:{
            if ([value.value isKindOfClass:[NSString class]]) {
                return [NSString stringWithFormat:@"@(%@)",value.value];
            }
            if ([value.value isKindOfClass:[ORNode class]]) {
                return [NSString stringWithFormat:@"@(%@)",[self convert:value.value]];
            }
        }
        case OCValueNil:
            return @"nil";
        case OCValueNULL:
            return @"NULL";
    }
    return @"";
}

- (NSString *)convertSubscript:(ORSubscriptExpression *)collection{
    return [NSString stringWithFormat:@"%@[%@]",[self convert:collection.caller],[self convert:collection.keyExp]];
}

- (NSString *)convertFunCall:(ORCFuncCall *)call{
    // FIX: make.left.equalTo(superview.mas_left) to make.left.equalTo()(superview.mas_left)
    // FIX: x.left(a) to x.left()(a)
    if ([call.caller isKindOfClass:[ORMethodCall class]] && [(ORMethodCall *)call.caller methodOperator]){
        return [NSString stringWithFormat:@"%@()(%@)",[self convert:call.caller],[self convertExpressionList:call.expressions]];
    }
    return [NSString stringWithFormat:@"%@(%@)",[self convert:call.caller],[self convertExpressionList:call.expressions]];
}

- (NSString *)convertOCMethodCall:(ORMethodCall *)call{
    // 处理方法名：将OC风格的冒号分隔转为下划线分隔
    NSMutableString *methodName = [NSMutableString string];
    
    if (call.values.count == 0) {
        // 无参数方法：直接使用方法名，不加下划线
        NSString *namePart = call.names.firstObject ?: @"";
        // 移除尾部冒号(如果有)
        if ([namePart hasSuffix:@":"]) {
            namePart = [namePart substringToIndex:namePart.length - 1];
        }
        [methodName appendString:namePart];
    } else {
        // 有参数方法：每个参数对应一个方法名部分，每部分后加下划线
        NSInteger paramCount = MIN(call.names.count, call.values.count);
        
        for (NSInteger i = 0; i < paramCount; i++) {
            NSString *namePart = call.names[i];
            // 移除冒号
            if ([namePart hasSuffix:@":"]) {
                namePart = [namePart substringToIndex:namePart.length - 1];
            }
            [methodName appendString:namePart];
            [methodName appendString:@"_"]; // 每个参数对应一个下划线
        }
    }
    
    // 构建方法调用表达式
    NSString *methodCallExpression;
    if (call.values.count == 0) {
        // 无参数：根据是否是属性操作符决定是否加括号
        methodCallExpression = call.methodOperator ? 
            [NSString stringWithFormat:@".%@", methodName] : 
            [NSString stringWithFormat:@".%@()", methodName];
    } else {
        // 有参数：方法名后跟参数列表
        methodCallExpression = [NSString stringWithFormat:@".%@(%@)", 
                               methodName, 
                               [self convertExpressionList:call.values]];
    }
    
    // 组合调用者和方法调用表达式
    return [NSString stringWithFormat:@"%@%@", [self convert:call.caller], methodCallExpression];
}

- (NSString *)convertIfStatement:(ORIfStatement *)statement{
    NSString *content = @"";
    while (statement.last) {
        if (!statement.condition) {
            content = [NSString stringWithFormat:@"%@ else %@",content,[self convertScopeImp:statement.scopeImp]];
        }else{
            content = [NSString stringWithFormat:@" else if (%@)%@%@",[self convert:statement.condition],[self convertScopeImp:statement.scopeImp],content];
        }
        statement = statement.last;
    }
    content = [NSString stringWithFormat:@"if (%@) %@%@",[self convert:statement.condition],[self convertScopeImp:statement.scopeImp],content];
    return content;
}

- (NSString *)convertWhileStatement:(ORWhileStatement *)statement{
    NSMutableString *content = [NSMutableString string];
    [content appendFormat:@"while(%@)",[self convert:statement.condition]];
    [content appendString:[self convertScopeImp:statement.scopeImp]];
    return content;
}

- (NSString *)convertDoWhileStatement:(ORDoWhileStatement *)statement{
    return [NSString stringWithFormat:@"do%@while(%@);",[self convertScopeImp:statement.scopeImp],[self convert:statement.condition]];
}

- (NSString *)convertSwitchStatement:(ORSwitchStatement *)statement{
    // 不使用switch，改用if-else if-else结构
    NSMutableString *content = [NSMutableString string];
    NSString *switchValue = [self convert:statement.value];
    BOOL isFirstCase = YES;
    ORCaseStatement *defaultCase = nil;
    
    // 先找出default case并处理普通case
    for (ORCaseStatement *caseStatement in statement.cases) {
        if (caseStatement.value) {
            // 普通case，需要移除break语句
            NSString *caseValue = [self convert:caseStatement.value];
            
            // 移除case主体中的break语句
            ORScopeImp *scopeWithoutBreak = [self removeBreakFromScope:caseStatement.scopeImp];
            NSString *caseBody = [self convertScopeImp:scopeWithoutBreak];
            
            if (isFirstCase) {
                [content appendFormat:@"if (%@ == %@) %@", switchValue, caseValue, caseBody];
                isFirstCase = NO;
            } else {
                [content appendFormat:@" else if (%@ == %@) %@", switchValue, caseValue, caseBody];
            }
        } else {
            // 保存default case，最后处理
            defaultCase = caseStatement;
        }
    }
    
    // 处理default case
    if (defaultCase) {
        // 移除default主体中的break语句
        ORScopeImp *scopeWithoutBreak = [self removeBreakFromScope:defaultCase.scopeImp];
        NSString *defaultBody = [self convertScopeImp:scopeWithoutBreak];
        [content appendFormat:@" else %@", defaultBody];
    }
    
    return content;
}

// 辅助方法：从scope中移除break语句
- (ORScopeImp *)removeBreakFromScope:(ORScopeImp *)originalScope {
    if (!originalScope) return nil;
    
    // 创建一个新的scope，复制原始scope的所有非break语句
    ORScopeImp *newScope = [ORScopeImp new];
    newScope.statements = [NSMutableArray array];
    
    for (id statement in originalScope.statements) {
        // 如果不是break语句，则添加到新scope
        if (![statement isKindOfClass:[ORBreakStatement class]]) {
            [newScope.statements addObject:statement];
        }
    }
    
    return newScope;
}

- (NSString *)convertCaseStatements:(NSArray *)cases{
    NSMutableString *content = [NSMutableString string];
    for (ORCaseStatement *statement in cases) {
        if (statement.value) {
            [content appendFormat:@"case %@:%@\n",[self convert:statement.value],[self convertScopeImp:statement.scopeImp]];
        }else{
            [content appendFormat:@"default:%@\n",[self convertScopeImp:statement.scopeImp]];
        }
    }
    return content;
}

- (NSString *)convertForStatement:(ORForStatement *)statement{
    NSMutableString *content = [@"for (" mutableCopy];
    [content appendFormat:@"%@; ",[self convertExpressionList:statement.varExpressions]];
    [content appendFormat:@"%@; ",[self convert:statement.condition]];
    [content appendFormat:@"%@)",[self convertExpressionList:statement.expressions]];
    [content appendFormat:@"%@",[self convertScopeImp:statement.scopeImp]];
    return content;
}

- (NSString *)convertForInStatement:(ORForInStatement *)statement{
    // 将for-in转换为传统for循环
    
    // 获取循环变量和集合
    NSString *itemVar = [self convertDeclareExp:statement.expression];
    NSString *collection = [self convert:statement.value];
    
    // 创建新的循环体，在开头添加元素获取语句
    ORScopeImp *newScopeImp = [ORScopeImp new];
    newScopeImp.statements = [NSMutableArray array];
    
    // 添加元素获取语句: itemVar = collection[i];
    ORDeclareExpression *getItemExp = [ORDeclareExpression new];
    getItemExp.pair = statement.expression.pair;
    
    // 创建subscript表达式: collection[i]
    ORSubscriptExpression *subscriptExp = [ORSubscriptExpression new];
    
    // 设置集合
    ORValueExpression *collectionValue = [ORValueExpression new];
    collectionValue.value_type = OCValueVariable;
    collectionValue.value = collection;
    subscriptExp.caller = collectionValue;
    
    // 设置索引
    ORValueExpression *indexValue = [ORValueExpression new];
    indexValue.value_type = OCValueVariable;
    indexValue.value = @"i";
    subscriptExp.keyExp = indexValue;
    
    getItemExp.expression = subscriptExp;
    
    // 添加到新循环体
    [newScopeImp.statements addObject:getItemExp];
    
    // 添加原始循环体的所有语句
    [newScopeImp.statements addObjectsFromArray:statement.scopeImp.statements];
    
    // 构建传统for循环结构，使用i = i + 1替代i++
    NSMutableString *forLoop = [NSMutableString string];
    [forLoop appendString:@"for (var i = 0; i < "];
    [forLoop appendFormat:@"%@.count; i = i + 1) ", collection];
    [forLoop appendString:[self convertScopeImp:newScopeImp]];
    
    return forLoop;
}

- (NSString *)convertReturnStatement:(ORReturnStatement *)statement{
    return [NSString stringWithFormat:@"return %@",[self convert:statement.expression]];
}

- (NSString *)convertBreakStatement:(ORBreakStatement *) statement{
    return @"break";
}

- (NSString *)convertContinueStatement:(ORContinueStatement *) statement{
    return @"continue";
}

- (NSString * )convertExpressionList:(NSArray *)list{
    NSMutableArray *array = [NSMutableArray array];
    for (ORNode * exp in list){
        [array addObject:[self convert:exp]];
    }
    return [array componentsJoinedByString:@", "];
}

- (NSString *)convertVariable:(ORVariable *)var{
    NSMutableString *result = [@"" mutableCopy];
    for (int i = 0; i < var.ptCount; i++) {
        [result appendString:@"*"];
    }
    if ([var isKindOfClass:[ORFuncVariable class]]) {
        ORFuncVariable *funVar = (ORFuncVariable *)var;
        if (funVar.pairs.count > 0){
            if (funVar.varname) {
                [result appendFormat:@"%@(%@)",funVar.varname,[self convertDeclareTypeVarPairs:funVar.pairs]];
            }else{
                [result appendFormat:@"(%@)",[self convertDeclareTypeVarPairs:funVar.pairs]];
            }
        } else if (!funVar.isBlock){
            [result appendFormat:@"%@()",funVar.varname];
        }
    }else if (var.varname){
        [result appendString:var.varname];
    }
    return result;
}

- (NSString *)convertTypeVarPair:(ORTypeVarPair *)pair{
    NSString *type = pair.type ? [self convertTypeSpecial:pair.type] : @"void ";
    return [NSString stringWithFormat:@"%@%@",type,[self convertVariable:pair.var]];
}

- (NSString *)convertDeclareTypeVarPair:(ORTypeVarPair *)pair{
    if ([pair.var isKindOfClass:[ORFuncVariable class]]){
        return [NSString stringWithFormat:@"var %@", pair.var.varname];
    }else{
        switch (pair.type.type){
            case TypeUChar:
            case TypeUShort:
            case TypeUInt:
            case TypeULong:
            case TypeULongLong:
            case TypeChar:
            case TypeShort:
            case TypeInt:
            case TypeLong:
            case TypeFloat:
            case TypeDouble:
            case TypeBOOL:
            case TypeLongLong:{
                if (pair.var.ptCount > 0){
                    return [NSString stringWithFormat:@"Point %@",pair.var.varname];
                }
                break;
            }
            default:
                break;
        }
    }
    return [self convertTypeVarPair:pair];
}

- (NSString *)convertDeclareTypeVarPairs:(NSArray *)list{
    NSMutableArray *array = [NSMutableArray array];
    for (ORTypeVarPair * pair in list){
        [array addObject:[self convertDeclareTypeVarPair:pair]];
    }
    return [array componentsJoinedByString:@","];
}

@end
