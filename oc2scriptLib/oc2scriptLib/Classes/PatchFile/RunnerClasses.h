//
//  ORunner.h
//  MangoFix
//
//  Created by Jiang on 2020/4/26.
//  Copyright © 2020 yongpengliang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum: uint8_t{
    AstEnumEmptyNode = 0,
    AstEnumPatchFile = 1,
    AstEnumStringCursorNode = 2,
    AstEnumStringBufferNode = 3,
    AstEnumListNode = 4,
    AstEnumTypeSpecial = 5,
    AstEnumVariable = 6,
    AstEnumTypeVarPair = 7,
    AstEnumFuncVariable = 8,
    AstEnumFuncDeclare = 9,
    AstEnumScopeImp = 10,
    AstEnumValueExpression = 11,
    AstEnumIntegerValue = 12,
    AstEnumUIntegerValue = 13,
    AstEnumDoubleValue = 14,
    AstEnumBoolValue = 15,
    AstEnumMethodCall = 16,
    AstEnumCFuncCall = 17,
    AstEnumFunctionImp = 18,
    AstEnumSubscriptExpression = 19,
    AstEnumAssignExpression = 20,
    AstEnumDeclareExpression = 21,
    AstEnumUnaryExpression = 22,
    AstEnumBinaryExpression = 23,
    AstEnumTernaryExpression = 24,
    AstEnumIfStatement = 25,
    AstEnumWhileStatement = 26,
    AstEnumDoWhileStatement = 27,
    AstEnumCaseStatement = 28,
    AstEnumSwitchStatement = 29,
    AstEnumForStatement = 30,
    AstEnumForInStatement = 31,
    AstEnumReturnStatement = 32,
    AstEnumBreakStatement = 33,
    AstEnumContinueStatement = 34,
    AstEnumPropertyDeclare = 35,
    AstEnumMethodDeclare = 36,
    AstEnumMethodImplementation = 37,
    AstEnumClass = 38,
    AstEnumProtocol = 39,
    AstEnumStructExpressoin = 40,
    AstEnumEnumExpressoin = 41,
    AstEnumTypedefExpressoin = 42,
    AstEnumCArrayVariable = 43,
    AstEnumUnionExpressoin = 44,
}AstEnum;


NS_ASSUME_NONNULL_BEGIN
// MARK: - Node
@interface ORNode: NSObject
@property (nonatomic, assign)AstEnum nodeType;
@property (nonatomic, weak)ORNode *parentNode;
@property (nonatomic, strong)id symbol;
@property (nonatomic, assign)BOOL withSemicolon;
@end

// MARK: - Comment
@interface ORComment : ORNode
@property (nonatomic, copy) NSString *content;
@property (nonatomic, assign) BOOL isBlockComment; // YES for /* */, NO for //
@end

// MARK: - Base
typedef enum: uint32_t{
    TypeVoid = 0x00,
    TypeUChar = 0x01,
    TypeUInt,
    TypeUShort,
    TypeULong,
    TypeULongLong,
    TypeBOOL,
    TypeChar,
    TypeShort,
    TypeInt,
    TypeLong,
    TypeLongLong,
    TypeFloat,
    TypeDouble,
    TypeBaseMask = 0x0F,
    TypeStruct = 0x10,
    TypeSEL = 0x20,
    TypeClass = 0x30,
    TypeObject = 0x40,
    TypeBlock = 0x50,
    TypeId = 0x60,
    TypeUnion = 0x70,
    TypeUnKnown = 0xF0
}TypeKind;

@interface ORTypeSpecial: ORNode
@property (nonatomic, assign) TypeKind type;
@property (nonatomic, nullable, copy) NSString * name;
+ (instancetype)specialWithType:(TypeKind)type name:(nullable NSString *)name;
@end


@interface ORVariable: ORNode
@property (nonatomic, assign) BOOL isBlock;
@property (nonatomic, assign) uint8_t ptCount;
@property (nonatomic, nullable, copy) NSString * varname;
+ (instancetype)copyFromVar:(ORVariable *)var;
@end

@interface ORTypeVarPair: ORNode
@property (nonatomic, strong)ORTypeSpecial *type;
@property (nonatomic, strong)ORVariable *var;
@end

@interface ORFuncVariable: ORVariable
@property(nonatomic,assign) BOOL isMultiArgs;
@property(nonatomic,strong) NSMutableArray <ORTypeVarPair *> *pairs;
@end

@interface ORFuncDeclare: ORNode
@property(nonatomic,assign,readonly) BOOL isBlockDeclare;
@property(nonatomic,strong) ORTypeVarPair *returnType;
@property(nonatomic,strong) ORFuncVariable *funVar;
@end

@interface ORScopeImp: ORNode
@property(nonatomic,strong) NSMutableArray* statements;
- (void)addStatements:(id)statements;
@end

typedef enum: uint32_t{
    OCValueVariable, // value: NSString
    OCValueSelf, // value: nil
    OCValueSuper, // value: nil
    OCValueSelector, // value: sel NSString
    OCValueProtocol, // value: String
    OCValueDictionary, // value: Exp Array
    OCValueArray, // value: Exp Array
    OCValueNSNumber, // value: Exp
    OCValueString, // value: NSString
    OCValueCString, // value: NSString
    OCValueNil, //  value: nil
    OCValueNULL, //  value: nil
}OC_VALUE_TYPE;

@interface ORValueExpression: ORNode
@property (nonatomic, assign)OC_VALUE_TYPE value_type;
@property (nonatomic,strong)id value;
@end

@interface ORIntegerValue: ORNode
@property (nonatomic, assign)int64_t value;
@end

@interface ORUIntegerValue: ORNode
@property (nonatomic, assign)uint64_t value;
@end

@interface ORDoubleValue: ORNode
@property (nonatomic, assign)double value;
@end

@interface ORBoolValue: ORNode
@property (nonatomic, assign)BOOL value;
@end

//兼容struct->field
typedef enum: uint8_t{
    MethodOpretorNone = 0,
    MethodOpretorDot,
    MethodOpretorArrow
}MethodOperatorType;

@interface ORMethodCall: ORNode
@property (nonatomic, assign)uint8_t methodOperator; //MethodOperatorType
@property (nonatomic, assign)BOOL isAssignedValue;
@property (nonatomic, strong)ORNode * caller;
@property (nonatomic, strong)NSMutableArray *names;
@property (nonatomic, strong)NSMutableArray <ORNode *> *values;
- (NSString *)selectorName;
@end

@interface ORCFuncCall: ORNode
@property (nonatomic, strong)ORValueExpression *caller;
@property (nonatomic, strong)NSMutableArray <ORNode *>*expressions;
@end


@interface ORFunctionImp: ORNode
@property(nonatomic,strong) ORFuncDeclare *declare;
@property(nonatomic,strong) ORScopeImp *scopeImp;
- (instancetype)convertToNormalFunctionImp;
- (BOOL)isBlockImp;
@end

@interface ORSubscriptExpression: ORNode
@property (nonatomic, strong)ORNode * caller;
@property (nonatomic, strong)ORNode * keyExp;
@end

typedef enum: uint32_t{
    AssignOperatorAssign,
    AssignOperatorAssignAnd,
    AssignOperatorAssignOr,
    AssignOperatorAssignXor,
    AssignOperatorAssignAdd,
    AssignOperatorAssignSub,
    AssignOperatorAssignDiv,
    AssignOperatorAssignMuti,
    AssignOperatorAssignMod,
    AssignOperatorAssignShiftLeft,
    AssignOperatorAssignShiftRight
}AssignOperatorType;

@interface ORAssignExpression: ORNode
@property (nonatomic,assign)AssignOperatorType assignType;
@property (nonatomic,strong)ORNode * value;
@property (nonatomic,strong)ORNode * expression;
- (nullable NSString *)varname;
@end

typedef enum: uint32_t{
    DeclarationModifierNone       = 1,
    DeclarationModifierStrong     = 1 << 1,
    DeclarationModifierWeak       = 1 << 2,
    DeclarationModifierStatic     = 1 << 3
}DeclarationModifier;

@interface ORDeclareExpression: ORNode
@property (nonatomic,assign)DeclarationModifier modifier;
@property (nonatomic,strong)ORTypeVarPair *pair;
@property (nonatomic,strong, nullable)ORNode * expression;
@end

typedef enum: uint32_t{
    UnaryOperatorIncrementSuffix,
    UnaryOperatorDecrementSuffix,
    UnaryOperatorIncrementPrefix,
    UnaryOperatorDecrementPrefix,
    UnaryOperatorNot,
    UnaryOperatorNegative,
    UnaryOperatorBiteNot,
    UnaryOperatorSizeOf,
    UnaryOperatorAdressPoint,
    UnaryOperatorAdressValue
}UnaryOperatorType;
@interface ORUnaryExpression: ORNode
@property (nonatomic,assign)UnaryOperatorType operatorType;
@property (nonatomic,strong)ORNode * value;
@end

typedef enum: uint32_t{
    BinaryOperatorAdd,
    BinaryOperatorSub,
    BinaryOperatorDiv,
    BinaryOperatorMulti,
    BinaryOperatorMod,
    BinaryOperatorShiftLeft,
    BinaryOperatorShiftRight,
    BinaryOperatorAnd,
    BinaryOperatorOr,
    BinaryOperatorXor,
    BinaryOperatorLT,
    BinaryOperatorGT,
    BinaryOperatorLE,
    BinaryOperatorGE,
    BinaryOperatorNotEqual,
    BinaryOperatorEqual,
    BinaryOperatorLOGIC_AND,
    BinaryOperatorLOGIC_OR
}BinaryOperatorType;

@interface ORBinaryExpression: ORNode
@property (nonatomic,assign)BinaryOperatorType operatorType;
@property (nonatomic,strong)ORNode * left;
@property (nonatomic,strong)ORNode * right;
@end

@interface ORTernaryExpression: ORNode
@property (nonatomic,strong)ORNode * expression;
@property (nonatomic,strong)NSMutableArray <ORNode *>*values;
@end
// MARK: - Statement
@interface ORIfStatement: ORNode
@property (nonatomic,strong,nullable)ORNode * condition;
@property (nonatomic,strong,nullable)ORIfStatement * last;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORWhileStatement: ORNode
@property (nonatomic,strong,nullable)ORNode * condition;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORDoWhileStatement: ORNode
@property (nonatomic,strong,nullable)ORNode * condition;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORCaseStatement: ORNode
@property (nonatomic,strong)ORNode * value;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORSwitchStatement: ORNode
@property (nonatomic,strong)ORNode * value;
@property (nonatomic,strong)NSMutableArray <ORCaseStatement *>*cases;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORForStatement: ORNode
@property (nonatomic,strong)NSMutableArray <ORNode *>*varExpressions;
@property (nonatomic,strong)ORNode * condition;
@property (nonatomic,strong)NSMutableArray <ORNode *>* expressions;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORForInStatement: ORNode
@property (nonatomic,strong)ORDeclareExpression * expression;
@property (nonatomic,strong)ORNode * value;
@property (nonatomic, strong, nullable)ORScopeImp *scopeImp;
@end

@interface ORReturnStatement: ORNode
@property (nonatomic,strong)ORNode * expression;
@end

@interface ORBreakStatement: ORNode

@end

@interface ORContinueStatement: ORNode

@end

// MARK: - Class
typedef enum: uint32_t{
    MFPropertyModifierMemStrong = 0x00,
    MFPropertyModifierMemWeak = 0x01,
    MFPropertyModifierMemCopy = 0x2,
    MFPropertyModifierMemAssign = 0x03,
    MFPropertyModifierMemMask = 0x0F,
    
    MFPropertyModifierAtomic = 0x00,
    MFPropertyModifierNonatomic =  0x10,
    MFPropertyModifierAtomicMask = 0xF0
}MFPropertyModifier;
@interface ORPropertyDeclare: ORNode
@property(nonatomic, assign, readonly) MFPropertyModifier modifier;
@property(nonatomic,strong) NSMutableArray *keywords;
@property(nonatomic,strong) ORTypeVarPair * var;
@end

@interface ORMethodDeclare: ORNode
@property(nonatomic,assign) BOOL isClassMethod;
@property(nonatomic,strong) ORTypeVarPair * returnType;
@property(nonatomic,strong) NSMutableArray *methodNames;
@property(nonatomic,strong) NSMutableArray <ORTypeVarPair *>*parameterTypes;
@property(nonatomic,strong) NSMutableArray *parameterNames;
- (NSString *)selectorName;
@end

@interface ORMethodImplementation: ORNode
@property (nonatomic,strong) ORMethodDeclare * declare;
@property (nonatomic,strong) ORScopeImp *scopeImp;
- (void)setClassNode:(Class)classNode;
- (Class)classNode;
@end

@interface ORClass: ORNode
@property (nonatomic,copy)NSString *className;
@property (nonatomic,copy)NSString *superClassName;
@property (nonatomic,strong)NSMutableArray <NSString *>*protocols;
@property (nonatomic,strong)NSMutableArray <ORPropertyDeclare *>*properties;
@property (nonatomic,strong)NSMutableArray <ORTypeVarPair *>*privateVariables;
@property (nonatomic,strong)NSMutableArray <ORMethodImplementation *>*methods;
+ (instancetype)classWithClassName:(NSString *)className;
- (void)merge:(ORClass *)target key:(NSString *)key;
@end

@interface ORProtocol: ORNode
@property (nonatomic,copy)NSString *protcolName;
@property (nonatomic,strong,nullable)NSMutableArray <NSString *>*protocols;
@property (nonatomic,strong)NSMutableArray <ORPropertyDeclare *>*properties;
@property (nonatomic,strong)NSMutableArray <ORMethodDeclare *>*methods;
+ (instancetype)protcolWithProtcolName:(NSString *)protcolName;
@end


@interface ORStructExpressoin: ORNode
@property (nonatomic,copy)NSString *sturctName;
@property (nonatomic,strong)NSMutableArray <ORDeclareExpression *>*fields;
@end

@interface OREnumExpressoin: ORNode
@property (nonatomic,assign)TypeKind valueType;
@property (nonatomic,copy)NSString *enumName;
@property (nonatomic,strong)NSMutableArray *fields;
@end

@interface ORTypedefExpressoin: ORNode
@property (nonatomic,strong)ORNode *expression;
@property (nonatomic,copy)NSString *typeNewName;
@end

@interface ORCArrayVariable: ORVariable
@property (nonatomic,strong)ORCArrayVariable *prev;
@property (nonatomic,strong)ORNode *capacity;
@end

@interface ORUnionExpressoin: ORNode
@property (nonatomic,copy)NSString *unionName;
@property (nonatomic,strong)NSMutableArray <ORDeclareExpression *>*fields;
@end
NS_ASSUME_NONNULL_END
