/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     STRING_LITERAL = 259,
     TYPEDEF = 260,
     ELLIPSIS = 261,
     CHILD_COLLECTION = 262,
     POINT = 263,
     __BRIDGE = 264,
     __TRANSFER = 265,
     __RETAINED = 266,
     IF = 267,
     ENDIF = 268,
     IFDEF = 269,
     IFNDEF = 270,
     UNDEF = 271,
     IMPORT = 272,
     INCLUDE = 273,
     TILDE = 274,
     QUESTION = 275,
     _return = 276,
     _break = 277,
     _continue = 278,
     _goto = 279,
     _else = 280,
     _while = 281,
     _do = 282,
     _in = 283,
     _for = 284,
     _case = 285,
     _switch = 286,
     _default = 287,
     TYPEOF = 288,
     _sizeof = 289,
     _union = 290,
     _struct = 291,
     _enum = 292,
     NS_ENUM = 293,
     NS_OPTIONS = 294,
     INTERFACE = 295,
     IMPLEMENTATION = 296,
     DYNAMIC = 297,
     PROTOCOL = 298,
     END = 299,
     CLASS_DECLARE = 300,
     PROPERTY = 301,
     STATIC = 302,
     _STRONG = 303,
     _WEAK = 304,
     _BLOCK = 305,
     _AUTORELEASE = 306,
     NONNULL = 307,
     NULLABLE = 308,
     COMMA = 309,
     COLON = 310,
     SEMICOLON = 311,
     LP = 312,
     RP = 313,
     RIP = 314,
     LB = 315,
     RB = 316,
     LC = 317,
     RC = 318,
     DOT = 319,
     AT = 320,
     PS = 321,
     ARROW = 322,
     EQ = 323,
     NE = 324,
     LT = 325,
     LE = 326,
     GT = 327,
     GE = 328,
     LOGIC_AND = 329,
     LOGIC_OR = 330,
     NOT = 331,
     AND = 332,
     OR = 333,
     POWER = 334,
     SUB = 335,
     ADD = 336,
     DIV = 337,
     ASTERISK = 338,
     AND_ASSIGN = 339,
     OR_ASSIGN = 340,
     POWER_ASSIGN = 341,
     SUB_ASSIGN = 342,
     ADD_ASSIGN = 343,
     DIV_ASSIGN = 344,
     ASTERISK_ASSIGN = 345,
     INCREMENT = 346,
     DECREMENT = 347,
     SHIFTLEFT = 348,
     SHIFTRIGHT = 349,
     MOD = 350,
     ASSIGN = 351,
     MOD_ASSIGN = 352,
     _self = 353,
     _super = 354,
     _nil = 355,
     _NULL = 356,
     _YES = 357,
     _NO = 358,
     _Class = 359,
     _id = 360,
     _void = 361,
     _BOOL = 362,
     _SEL = 363,
     _CHAR = 364,
     _SHORT = 365,
     _INT = 366,
     _LONG = 367,
     _LLONG = 368,
     _UCHAR = 369,
     _USHORT = 370,
     _UINT = 371,
     _ULONG = 372,
     _ULLONG = 373,
     _DOUBLE = 374,
     _FLOAT = 375,
     _instancetype = 376,
     INTETER_LITERAL = 377,
     DOUBLE_LITERAL = 378,
     SELECTOR = 379,
     COMMENT_BLOCK = 380,
     COMMENT_LINE = 381
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define STRING_LITERAL 259
#define TYPEDEF 260
#define ELLIPSIS 261
#define CHILD_COLLECTION 262
#define POINT 263
#define __BRIDGE 264
#define __TRANSFER 265
#define __RETAINED 266
#define IF 267
#define ENDIF 268
#define IFDEF 269
#define IFNDEF 270
#define UNDEF 271
#define IMPORT 272
#define INCLUDE 273
#define TILDE 274
#define QUESTION 275
#define _return 276
#define _break 277
#define _continue 278
#define _goto 279
#define _else 280
#define _while 281
#define _do 282
#define _in 283
#define _for 284
#define _case 285
#define _switch 286
#define _default 287
#define TYPEOF 288
#define _sizeof 289
#define _union 290
#define _struct 291
#define _enum 292
#define NS_ENUM 293
#define NS_OPTIONS 294
#define INTERFACE 295
#define IMPLEMENTATION 296
#define DYNAMIC 297
#define PROTOCOL 298
#define END 299
#define CLASS_DECLARE 300
#define PROPERTY 301
#define STATIC 302
#define _STRONG 303
#define _WEAK 304
#define _BLOCK 305
#define _AUTORELEASE 306
#define NONNULL 307
#define NULLABLE 308
#define COMMA 309
#define COLON 310
#define SEMICOLON 311
#define LP 312
#define RP 313
#define RIP 314
#define LB 315
#define RB 316
#define LC 317
#define RC 318
#define DOT 319
#define AT 320
#define PS 321
#define ARROW 322
#define EQ 323
#define NE 324
#define LT 325
#define LE 326
#define GT 327
#define GE 328
#define LOGIC_AND 329
#define LOGIC_OR 330
#define NOT 331
#define AND 332
#define OR 333
#define POWER 334
#define SUB 335
#define ADD 336
#define DIV 337
#define ASTERISK 338
#define AND_ASSIGN 339
#define OR_ASSIGN 340
#define POWER_ASSIGN 341
#define SUB_ASSIGN 342
#define ADD_ASSIGN 343
#define DIV_ASSIGN 344
#define ASTERISK_ASSIGN 345
#define INCREMENT 346
#define DECREMENT 347
#define SHIFTLEFT 348
#define SHIFTRIGHT 349
#define MOD 350
#define ASSIGN 351
#define MOD_ASSIGN 352
#define _self 353
#define _super 354
#define _nil 355
#define _NULL 356
#define _YES 357
#define _NO 358
#define _Class 359
#define _id 360
#define _void 361
#define _BOOL 362
#define _SEL 363
#define _CHAR 364
#define _SHORT 365
#define _INT 366
#define _LONG 367
#define _LLONG 368
#define _UCHAR 369
#define _USHORT 370
#define _UINT 371
#define _ULONG 372
#define _ULLONG 373
#define _DOUBLE 374
#define _FLOAT 375
#define _instancetype 376
#define INTETER_LITERAL 377
#define DOUBLE_LITERAL 378
#define SELECTOR 379
#define COMMENT_BLOCK 380
#define COMMENT_LINE 381




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
{
    void *identifier;
    void *include;
    void *type;
    void *declare;
    void *implementation;
    void *statement;
    void *expression;
    int Operator;
    int IntValue;
    NSUInteger declaration_modifier;
}
/* Line 1529 of yacc.c.  */
#line 314 "/Users/gaoyu/Desktop/OCRunner/OC2Script/build/oc2mango.build/Debug/oc2mango.build/DerivedSources/y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

