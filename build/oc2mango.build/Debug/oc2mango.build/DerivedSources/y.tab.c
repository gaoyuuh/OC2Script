/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"

#define YYDEBUG 1
#define YYERROR_VERBOSE
#define _retained(IDENTIFIER) (__bridge_retained IDENTIFIER)
#define _vretained _retained(void *)
#define _transfer(IDENTIFIER) (__bridge_transfer IDENTIFIER)
#define _typeId _transfer(id)
#import <Foundation/Foundation.h>
#import "Log.h"
#import "MakeDeclare.h"
#import "Parser.h"
extern int yylex (void);
extern void yyerror(const char *s);
extern bool is_variable;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 377 "/Users/gaoyu/Desktop/OCRunner/OC2Script/build/oc2mango.build/Debug/oc2mango.build/DerivedSources/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 390 "/Users/gaoyu/Desktop/OCRunner/OC2Script/build/oc2mango.build/Debug/oc2mango.build/DerivedSources/y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  165
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  127
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  269
/* YYNRULES -- Number of states.  */
#define YYNSTATES  509

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   381

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    33,    37,    43,    46,
      49,    52,    56,    62,    68,    71,    75,    83,    91,    95,
      98,   102,   108,   110,   113,   116,   119,   121,   124,   127,
     131,   137,   141,   144,   145,   148,   151,   157,   164,   170,
     175,   181,   185,   188,   192,   198,   204,   207,   210,   213,
     214,   218,   219,   223,   225,   227,   229,   231,   235,   236,
     240,   241,   243,   245,   250,   255,   258,   266,   268,   272,
     277,   282,   287,   288,   292,   293,   295,   303,   305,   306,
     308,   311,   314,   317,   321,   324,   327,   333,   341,   349,
     359,   363,   369,   379,   387,   391,   394,   397,   402,   403,
     406,   414,   426,   438,   448,   450,   452,   454,   456,   458,
     460,   461,   464,   467,   470,   471,   473,   477,   479,   481,
     483,   485,   487,   489,   491,   493,   495,   497,   501,   503,
     509,   514,   516,   520,   522,   526,   528,   532,   534,   538,
     540,   544,   546,   550,   554,   556,   560,   564,   568,   572,
     574,   578,   582,   584,   588,   592,   594,   598,   602,   606,
     608,   611,   614,   617,   620,   622,   624,   626,   628,   630,
     632,   634,   636,   638,   640,   643,   646,   650,   654,   659,
     664,   670,   677,   679,   681,   682,   687,   690,   692,   694,
     696,   698,   702,   707,   712,   717,   720,   723,   725,   730,
     732,   734,   736,   738,   740,   742,   744,   746,   748,   750,
     754,   757,   759,   763,   765,   769,   770,   772,   774,   777,
     780,   781,   783,   785,   789,   794,   799,   801,   804,   805,
     807,   809,   813,   814,   816,   820,   824,   825,   827,   830,
     833,   836,   839,   844,   846,   848,   850,   852,   854,   856,
     858,   860,   862,   864,   866,   868,   870,   872,   874,   876
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     128,     0,    -1,    -1,   129,    -1,   130,    -1,   129,   130,
      -1,   132,    -1,   142,    -1,   139,    -1,   143,    -1,   167,
      -1,   131,    -1,   125,    -1,   126,    -1,   158,    -1,    45,
       3,    56,    -1,    43,     3,    56,    -1,   204,   195,    62,
     168,    63,    -1,   133,    56,    -1,   134,    56,    -1,   136,
      56,    -1,     5,   138,    56,    -1,    36,     3,    62,   135,
      63,    -1,    35,     3,    62,   135,    63,    -1,   191,    56,
      -1,   135,   191,    56,    -1,    38,    57,   204,    54,     3,
      58,   136,    -1,    39,    57,   204,    54,     3,    58,   136,
      -1,    37,     3,   136,    -1,    37,   136,    -1,    62,   137,
      63,    -1,    55,   204,    62,   137,    63,    -1,   171,    -1,
     137,   171,    -1,   137,    54,    -1,   204,   195,    -1,   136,
      -1,   136,     3,    -1,   133,     3,    -1,    43,     3,   203,
      -1,   139,    46,   148,   202,    56,    -1,   139,   150,    56,
      -1,   139,    44,    -1,    -1,    64,     3,    -1,     3,   140,
      -1,    40,   141,    55,     3,   203,    -1,    40,   141,    57,
       3,    58,   203,    -1,    40,   141,    57,    58,   203,    -1,
     142,    62,   145,    63,    -1,   142,    46,   148,   202,    56,
      -1,   142,   150,    56,    -1,   142,    44,    -1,    41,   141,
     144,    -1,    41,   141,    57,     3,    58,    -1,   143,   150,
      62,   168,    63,    -1,   143,   131,    -1,   143,   132,    -1,
     143,    44,    -1,    -1,    62,   145,    63,    -1,    -1,   145,
     202,    56,    -1,     3,    -1,    52,    -1,    53,    -1,   146,
      -1,   147,    54,   146,    -1,    -1,    57,   147,    58,    -1,
      -1,    52,    -1,    53,    -1,    80,    57,   202,    58,    -1,
      81,    57,   202,    58,    -1,   150,     3,    -1,   150,     3,
      55,    57,   202,    58,     3,    -1,     3,    -1,     3,    55,
     169,    -1,   151,     3,    55,   169,    -1,    60,     3,   151,
      61,    -1,    60,   186,   151,    61,    -1,    -1,    57,   201,
      58,    -1,    -1,   204,    -1,    79,   154,   199,   153,    62,
     168,    63,    -1,   171,    -1,    -1,   171,    -1,   171,    56,
      -1,   191,    56,    -1,    21,    56,    -1,    21,   156,    56,
      -1,    22,    56,    -1,    23,    56,    -1,    12,    57,   156,
      58,   158,    -1,    12,    57,   156,    58,    62,   168,    63,
      -1,   159,    25,    12,    57,   156,    58,   158,    -1,   159,
      25,    12,    57,   156,    58,    62,   168,    63,    -1,   159,
      25,   158,    -1,   159,    25,    62,   168,    63,    -1,    27,
      62,   168,    63,    26,    57,   156,    58,    56,    -1,    26,
      57,   156,    58,    62,   168,    63,    -1,    30,   183,    55,
      -1,    32,    55,    -1,   162,   158,    -1,   162,    62,   168,
      63,    -1,    -1,   163,   162,    -1,    31,    57,   156,    58,
      62,   163,    63,    -1,    29,    57,   191,    56,   156,    56,
     169,    58,    62,   168,    63,    -1,    29,    57,   171,    56,
     156,    56,   169,    58,    62,   168,    63,    -1,    29,    57,
     191,    28,   156,    58,    62,   168,    63,    -1,   159,    -1,
     164,    -1,   161,    -1,   160,    -1,   165,    -1,   166,    -1,
      -1,   168,   158,    -1,   168,   167,    -1,   168,   131,    -1,
      -1,   156,    -1,   169,    54,   156,    -1,    96,    -1,    84,
      -1,    85,    -1,    86,    -1,    88,    -1,    87,    -1,    89,
      -1,    90,    -1,    97,    -1,   172,    -1,   183,   170,   171,
      -1,   173,    -1,   173,    20,   172,    55,   172,    -1,   173,
      20,    55,   172,    -1,   174,    -1,   173,    75,   173,    -1,
     175,    -1,   174,    74,   175,    -1,   176,    -1,   175,    78,
     176,    -1,   177,    -1,   176,    79,   177,    -1,   178,    -1,
     177,    77,   178,    -1,   179,    -1,   178,    68,   179,    -1,
     178,    69,   179,    -1,   180,    -1,   179,    70,   180,    -1,
     179,    71,   180,    -1,   179,    72,   180,    -1,   179,    73,
     180,    -1,   181,    -1,   180,    93,   181,    -1,   180,    94,
     181,    -1,   182,    -1,   181,    81,   182,    -1,   181,    80,
     182,    -1,   183,    -1,   182,    83,   183,    -1,   182,    82,
     183,    -1,   182,    95,   183,    -1,   186,    -1,   184,   183,
      -1,    34,   183,    -1,    91,   183,    -1,    92,   183,    -1,
      77,    -1,    83,    -1,     8,    -1,    80,    -1,    19,    -1,
      76,    -1,     9,    -1,    10,    -1,    10,    -1,   189,    -1,
     186,    91,    -1,   186,    92,    -1,   186,    64,     3,    -1,
     186,    67,     3,    -1,   186,    57,   169,    58,    -1,   186,
      60,   156,    61,    -1,    57,   204,   194,    58,   186,    -1,
      57,   185,   204,   194,    58,   186,    -1,   122,    -1,   123,
      -1,    -1,   188,   156,    55,   156,    -1,   188,    54,    -1,
       3,    -1,    98,    -1,    99,    -1,   152,    -1,    57,   156,
      58,    -1,    65,    62,   188,    63,    -1,    65,    60,   169,
      61,    -1,    65,    57,   156,    58,    -1,    65,   187,    -1,
      65,     4,    -1,   124,    -1,    43,    57,     3,    58,    -1,
       4,    -1,   155,    -1,   187,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,    49,    -1,    48,    -1,    47,    -1,
     190,   204,   192,    -1,   204,   192,    -1,   193,    -1,   192,
      54,   193,    -1,   195,    -1,   195,    96,   171,    -1,    -1,
     195,    -1,   197,    -1,    79,   196,    -1,   198,   196,    -1,
      -1,   197,    -1,     3,    -1,    57,   195,    58,    -1,   197,
      57,   200,    58,    -1,   197,    60,   157,    61,    -1,     8,
      -1,     8,   198,    -1,    -1,   198,    -1,   201,    -1,   201,
      54,     6,    -1,    -1,   202,    -1,   201,    54,   202,    -1,
     149,   204,   194,    -1,    -1,     7,    -1,     3,   203,    -1,
      36,     3,    -1,    35,     3,    -1,   105,   203,    -1,    33,
      57,   156,    58,    -1,   114,    -1,   115,    -1,   116,    -1,
     117,    -1,   118,    -1,   109,    -1,   110,    -1,   111,    -1,
     112,    -1,   113,    -1,   119,    -1,   120,    -1,   104,    -1,
     107,    -1,   108,    -1,   106,    -1,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    60,    62,    63,    66,    67,    68,    69,
      70,    74,    81,    85,    92,    96,    97,    98,   107,   111,
     115,   119,   126,   133,   140,   145,   153,   160,   167,   173,
     178,   182,   189,   194,   200,   205,   211,   215,   219,   226,
     236,   247,   253,   257,   260,   266,   274,   283,   290,   297,
     303,   315,   316,   321,   328,   332,   339,   347,   348,   352,
     356,   362,   366,   375,   376,   377,   381,   388,   398,   402,
     407,   408,   409,   412,   417,   422,   428,   440,   445,   451,
     463,   472,   484,   487,   493,   496,   500,   515,   517,   520,
     523,   529,   537,   543,   549,   555,   564,   571,   576,   584,
     590,   598,   607,   614,   622,   627,   632,   638,   646,   649,
     657,   666,   674,   684,   696,   697,   698,   699,   700,   701,
     706,   709,   715,   721,   731,   734,   740,   749,   753,   757,
     761,   765,   769,   773,   777,   781,   788,   789,   799,   800,
     808,   819,   820,   830,   831,   840,   841,   850,   851,   861,
     862,   872,   873,   880,   889,   890,   897,   904,   911,   920,
     921,   928,   937,   938,   945,   955,   956,   963,   970,   980,
     981,   987,   993,   999,  1008,  1012,  1016,  1020,  1024,  1028,
    1035,  1036,  1037,  1041,  1042,  1048,  1054,  1063,  1071,  1076,
    1083,  1087,  1094,  1106,  1113,  1117,  1123,  1131,  1136,  1140,
    1144,  1149,  1154,  1158,  1162,  1166,  1170,  1174,  1180,  1184,
    1188,  1189,  1190,  1194,  1198,  1202,  1209,  1213,  1217,  1224,
    1234,  1245,  1249,  1258,  1262,  1270,  1273,  1277,  1278,  1284,
    1294,  1297,  1301,  1305,  1309,  1320,  1336,  1340,  1346,  1349,
    1352,  1353,  1362,  1365,  1371,  1380,  1389,  1392,  1394,  1398,
    1402,  1406,  1410,  1414,  1418,  1422,  1426,  1430,  1434,  1438,
    1442,  1446,  1450,  1454,  1458,  1462,  1466,  1470,  1474,  1478
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "TYPEDEF", "ELLIPSIS", "CHILD_COLLECTION", "POINT", "__BRIDGE",
  "__TRANSFER", "__RETAINED", "IF", "ENDIF", "IFDEF", "IFNDEF", "UNDEF",
  "IMPORT", "INCLUDE", "TILDE", "QUESTION", "_return", "_break",
  "_continue", "_goto", "_else", "_while", "_do", "_in", "_for", "_case",
  "_switch", "_default", "TYPEOF", "_sizeof", "_union", "_struct", "_enum",
  "NS_ENUM", "NS_OPTIONS", "INTERFACE", "IMPLEMENTATION", "DYNAMIC",
  "PROTOCOL", "END", "CLASS_DECLARE", "PROPERTY", "STATIC", "_STRONG",
  "_WEAK", "_BLOCK", "_AUTORELEASE", "NONNULL", "NULLABLE", "COMMA",
  "COLON", "SEMICOLON", "LP", "RP", "RIP", "LB", "RB", "LC", "RC", "DOT",
  "AT", "PS", "ARROW", "EQ", "NE", "LT", "LE", "GT", "GE", "LOGIC_AND",
  "LOGIC_OR", "NOT", "AND", "OR", "POWER", "SUB", "ADD", "DIV", "ASTERISK",
  "AND_ASSIGN", "OR_ASSIGN", "POWER_ASSIGN", "SUB_ASSIGN", "ADD_ASSIGN",
  "DIV_ASSIGN", "ASTERISK_ASSIGN", "INCREMENT", "DECREMENT", "SHIFTLEFT",
  "SHIFTRIGHT", "MOD", "ASSIGN", "MOD_ASSIGN", "_self", "_super", "_nil",
  "_NULL", "_YES", "_NO", "_Class", "_id", "_void", "_BOOL", "_SEL",
  "_CHAR", "_SHORT", "_INT", "_LONG", "_LLONG", "_UCHAR", "_USHORT",
  "_UINT", "_ULONG", "_ULLONG", "_DOUBLE", "_FLOAT", "_instancetype",
  "INTETER_LITERAL", "DOUBLE_LITERAL", "SELECTOR", "COMMENT_BLOCK",
  "COMMENT_LINE", "$accept", "compile_util", "definition_list",
  "definition", "comment_statement", "global_define", "struct_declare",
  "union_declare", "struct_field_list", "enum_declare", "enum_field_list",
  "typedef_declare", "protocol_declare", "class_name_suffix", "class_name",
  "class_declare", "class_implementation", "class_private_list",
  "class_private_varibale_declare", "class_property_type", "property_list",
  "class_property_declare", "declare_left_attribute", "method_declare",
  "objc_method_call_pramameters", "objc_method_call",
  "block_parameters_optinal", "type_specifier_optional",
  "block_implementation", "expression", "expression_optional",
  "expression_statement", "if_statement", "dowhile_statement",
  "while_statement", "case_statement", "case_statement_list",
  "switch_statement", "for_statement", "forin_statement",
  "control_statement", "function_implementation", "expression_list",
  "assign_operator", "assign_expression", "ternary_expression",
  "logic_or_expression", "logic_and_expression", "bite_or_expression",
  "bite_xor_expression", "bite_and_expression", "equality_expression",
  "relational_expression", "bite_shift_expression", "additive_expression",
  "multiplication_expression", "unary_expression", "unary_operator",
  "bridge_set", "postfix_expression", "numerical_value_type",
  "dict_entrys", "primary_expression", "declaration_modifier",
  "declaration", "init_declarator_list", "init_declarator",
  "declarator_optional", "declarator", "direct_declarator_optional",
  "direct_declarator", "pointer", "pointer_optional",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "CHILD_COLLECTION_OPTIONAL", "type_specifier", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   127,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   134,   135,   135,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   138,   138,   138,   138,   139,
     139,   139,   139,   140,   140,   141,   142,   142,   142,   142,
     142,   142,   142,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   145,   146,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   156,   157,   157,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   160,   161,   162,   162,   162,   162,   163,   163,
     164,   165,   165,   166,   167,   167,   167,   167,   167,   167,
     168,   168,   168,   168,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   171,   171,   172,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   178,   179,   179,   179,   179,   179,   180,
     180,   180,   181,   181,   181,   182,   182,   182,   182,   183,
     183,   183,   183,   183,   184,   184,   184,   184,   184,   184,
     185,   185,   185,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   195,
     196,   196,   197,   197,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   201,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   204
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     5,     2,     2,
       2,     3,     5,     5,     2,     3,     7,     7,     3,     2,
       3,     5,     1,     2,     2,     2,     1,     2,     2,     3,
       5,     3,     2,     0,     2,     2,     5,     6,     5,     4,
       5,     3,     2,     3,     5,     5,     2,     2,     2,     0,
       3,     0,     3,     1,     1,     1,     1,     3,     0,     3,
       0,     1,     1,     4,     4,     2,     7,     1,     3,     4,
       4,     4,     0,     3,     0,     1,     7,     1,     0,     1,
       2,     2,     2,     3,     2,     2,     5,     7,     7,     9,
       3,     5,     9,     7,     3,     2,     2,     4,     0,     2,
       7,    11,    11,     9,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     2,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     5,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     4,     4,
       5,     6,     1,     1,     0,     4,     2,     1,     1,     1,
       1,     3,     4,     4,     4,     2,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     3,     1,     3,     0,     1,     1,     2,     2,
       0,     1,     1,     3,     4,     4,     1,     2,     0,     1,
       1,     3,     0,     1,     3,     3,     0,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,   197,   209,     0,   176,     0,   178,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   217,   216,     0,     0,
       0,     0,     0,   179,   174,    84,   177,   175,     0,     0,
     198,   199,   212,   213,   214,   215,   265,   246,   268,   266,
     267,   258,   259,   260,   261,   262,   253,   254,   255,   256,
     257,   263,   264,   269,   192,   193,   207,    12,    13,     0,
       3,     4,    11,     6,     0,     0,     0,     8,     7,     9,
     200,   210,    14,   114,   117,   116,   115,   118,   119,    10,
       0,   136,   138,   141,   143,   145,   147,   149,   151,   154,
     159,   162,   165,     0,   169,   211,   183,     0,     0,     0,
     247,   248,   246,     0,     0,    36,     0,     0,     0,   197,
       0,    92,     0,    87,    94,    95,     0,   120,     0,     0,
       0,   171,   250,   249,     0,    29,     0,     0,    43,     0,
      59,   246,     0,     0,     0,     0,   180,   181,     0,     0,
     225,   197,     0,     0,    32,   206,     0,   124,   194,   205,
     238,    85,   172,   173,   251,     1,     5,    18,    19,    20,
      42,    68,     0,     0,     0,    52,    68,    61,     0,     0,
      58,   177,    56,    57,     0,     0,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   132,
     131,   133,   134,   127,   135,     0,   170,   124,     0,     0,
       0,   184,   185,     0,    91,   232,   236,     0,   230,   220,
     221,   223,   227,   230,   250,    38,    37,    21,    35,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,     0,     0,    45,     0,     0,     0,    61,    53,
      16,    39,     0,    15,   249,     0,   201,   225,     0,   226,
      77,     0,     0,    34,    30,    33,     0,   125,     0,     0,
     239,    82,     0,    70,    70,    70,    75,    41,    70,    70,
      51,     0,   120,     0,   120,   100,     0,     0,   165,   142,
     144,   146,   148,   150,   152,   153,   155,   156,   157,   158,
     160,   161,   164,   163,   167,   166,   168,   137,     0,     0,
     186,   187,   219,   223,   237,     0,   228,   231,     0,   120,
       0,    70,    88,   229,     0,     0,     0,   123,   121,   122,
       0,     0,     0,     0,   252,     0,     0,     0,     0,     0,
      44,   246,     0,   246,     0,    70,   208,     0,     0,     0,
     124,     0,    80,    81,   204,     0,   203,   196,   202,     0,
      70,     0,    63,    64,    65,    66,     0,    71,    72,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,     0,
     140,     0,   188,   189,   233,   222,     0,   224,     0,   240,
     243,     0,    89,   120,    96,   120,     0,     0,     0,     0,
     108,    23,     0,    24,    22,     0,     0,    46,   246,    48,
      54,    60,    31,     0,   190,    78,   124,   126,     0,     0,
     120,     0,    69,   225,    40,    73,    74,    70,    50,    62,
      55,     0,   101,   139,    17,   234,    70,   235,     0,     0,
       0,   124,     0,   124,     0,    25,     0,     0,    47,   191,
      79,   195,    70,    83,     0,    67,   245,     0,     0,   241,
     244,    97,   103,     0,     0,   120,     0,     0,     0,   110,
     109,    26,    27,    86,     0,   120,    98,     0,     0,     0,
       0,     0,   105,   120,   106,    76,     0,   102,   120,   113,
     120,   104,     0,    99,     0,     0,   107,   112,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    69,    70,    71,   337,    73,    74,    75,   345,    76,
     153,   116,    77,   254,   139,    78,    79,   259,   289,   375,
     376,   283,   379,   174,   271,    80,   371,   160,    81,   277,
     401,   338,    83,    84,    85,   480,   454,    86,    87,    88,
     339,   242,   278,   215,   123,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   149,   104,
     105,   279,   106,   107,   108,   229,   230,   268,   269,   326,
     232,   233,   281,   398,   399,   386,   111,   245
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -258
static const yytype_int16 yypact[] =
{
     487,    55,  -258,  3259,  -258,   -42,  -258,   226,   -22,   -12,
     -31,   -11,    -3,     8,    58,  2983,   136,   148,   215,    88,
     109,   158,   158,    35,   168,  -258,  -258,  -258,  3439,  2833,
     312,  2983,    12,  -258,  -258,  3439,  -258,  -258,  2983,  2983,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,   166,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,   180,
     487,  -258,  -258,  -258,   126,   132,   164,    29,    74,   611,
    -258,  -258,  -258,   198,  -258,  -258,  -258,  -258,  -258,  -258,
     171,  -258,    -8,   185,   190,   192,   195,    95,   176,   142,
     130,    49,   255,  2983,   117,  -258,  -258,  3439,   217,    25,
    -258,  -258,   166,   271,   273,   275,   223,    25,  2983,  -258,
     224,  -258,   228,  -258,  -258,  -258,  2983,  -258,  2711,  2983,
    2983,  -258,   218,   225,   110,  -258,  3439,  3439,   221,    85,
      54,    45,   285,   234,   289,   231,  -258,  -258,   236,  3439,
      25,   292,    21,  2955,  -258,  -258,  2983,  2983,  -258,  -258,
     288,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,   240,   243,   244,    27,  -258,   240,  -258,    44,    39,
    -258,   243,  -258,  -258,    24,  2223,  -258,  3181,  2983,  2983,
    2983,  2983,  2983,  2983,  2983,  2983,  2983,  2983,  2983,  2983,
    2983,  2983,  2983,  2983,  2983,  2983,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  2983,  -258,  2983,  2983,   301,
     308,  -258,  -258,    25,  -258,  -258,   288,    25,    40,   259,
    -258,   -30,    64,    40,  -258,  -258,  -258,  -258,  -258,   261,
    -258,   262,   735,   265,    -6,    25,   264,   295,  3350,  3350,
    -258,   269,   279,   343,  -258,   344,    33,   351,  -258,  -258,
    -258,  -258,   298,  -258,  -258,  2983,  -258,    25,   300,  -258,
     304,    15,    26,  -258,  -258,  -258,   302,  -258,   -15,  3033,
    -258,   305,    42,   187,   187,   187,   309,  -258,   187,   107,
    -258,   307,  -258,   310,  -258,  -258,  2983,   311,  -258,   290,
     190,   192,   195,    95,   176,   176,   142,   142,   142,   142,
     130,   130,    49,    49,  -258,  -258,  -258,  -258,    -1,   313,
    -258,  -258,   259,   272,  -258,   315,  -258,    64,    25,  -258,
    2983,   179,  2983,  -258,  2345,   314,   345,  -258,  -258,  -258,
    2983,  2983,  2983,   316,  -258,  3299,   323,  3388,   367,   377,
    -258,   166,   324,   166,   325,   115,  -258,  3111,   327,  3228,
    2983,   326,  -258,  -258,  -258,  2983,  -258,  -258,  -258,   331,
     179,   328,  -258,  -258,  -258,  -258,   104,  -258,  -258,  3439,
     332,   334,   336,   340,   342,  -258,   346,   859,  2983,   983,
    -258,  2983,  -258,  -258,  -258,  -258,  1107,  -258,   347,   349,
    -258,   339,  -258,  -258,  -258,  -258,   350,   348,   358,   352,
    -258,  -258,   353,  -258,  -258,   359,   360,  -258,   166,  -258,
    -258,  -258,  -258,  3228,   117,   365,  2983,  -258,  2983,   121,
    -258,    42,  -258,    25,  -258,  -258,  -258,   187,  -258,  -258,
    -258,   362,  -258,  -258,  -258,  -258,    50,  -258,  1231,  1355,
    2983,  2983,   361,  2983,     5,  -258,   110,   110,  -258,   117,
     365,  -258,   187,  -258,  1479,  -258,  -258,   363,  2467,  -258,
    -258,  -258,  -258,   364,   129,  -258,   167,  2983,   370,  -258,
    2589,  -258,  -258,  -258,   398,  -258,  -258,   371,   366,  1603,
     368,   374,  -258,  -258,  -258,  -258,  1727,  -258,  -258,  -258,
    -258,  -258,  1851,  -258,  1975,  2099,  -258,  -258,  -258
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,  -258,   356,    14,   354,   403,  -258,   182,     3,
     173,  -258,  -258,  -258,   410,  -258,  -258,  -258,   181,     6,
    -258,   266,  -258,   172,   291,  -258,  -258,  -258,  -258,    -4,
    -258,     1,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
      19,  -186,  -210,  -258,     0,  -179,   252,  -258,   256,   251,
     253,   258,    68,    60,    67,    62,     2,  -258,  -258,   -28,
     415,  -258,  -258,  -258,  -119,   229,   123,  -257,  -104,   220,
     -95,  -149,  -258,  -258,    84,  -224,   -43,    20
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -247
static const yytype_int16 yytable[] =
{
      90,    82,   152,   122,   164,   231,   115,   318,   297,   244,
     358,   280,   187,   238,    72,   118,   155,   131,   361,    89,
     109,   135,   341,   117,   270,   148,   126,   286,   225,   361,
     286,   154,   329,   226,   124,   477,   352,   478,   141,   365,
     162,   163,   291,   225,   125,   372,   366,   286,   145,   150,
     342,   127,   110,   365,   128,   161,   469,   392,  -246,   380,
     381,   382,   110,  -246,   384,   129,   330,   188,   479,   156,
      90,    82,   157,   170,   158,   171,   362,   324,   217,    90,
      82,   218,   227,   287,    72,   219,   292,   363,   220,    89,
     109,   353,   142,   182,   373,   374,   142,   227,   261,   109,
     290,   260,   377,   378,   228,   216,   387,   400,   389,   172,
     173,   257,   221,   222,   239,   130,   258,   390,   175,   323,
     176,   331,   241,   325,   332,   246,   247,   223,   243,   346,
     346,   203,   204,   327,    64,    65,   177,   250,   327,   132,
     255,   323,   256,   396,   205,   136,   400,    18,    19,    20,
     425,   133,   276,   275,   172,   173,   251,   252,   431,   377,
     378,   138,   432,   193,   194,    28,   137,   377,   378,   267,
     385,   143,    31,   110,   217,   462,   466,   218,   421,   463,
     165,   219,   167,   365,   220,    90,   295,   488,   168,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   314,   315,   316,   221,   222,
     201,   202,   443,   467,   319,   317,   460,   448,   134,   449,
     169,   365,   470,   185,   323,   490,   412,   186,   412,   119,
       2,   377,   378,  -242,     4,   199,   200,  -242,   470,   377,
     378,   474,    90,   476,   464,     6,   195,   196,   197,   198,
     178,   184,    18,    19,    20,   306,   307,   308,   309,   189,
      15,   304,   305,   312,   313,   154,   310,   311,   190,   120,
      28,   191,   192,   224,   234,   369,   235,    31,   236,   237,
     248,   142,   121,    29,   240,   253,    30,   249,   262,   489,
     263,    32,   264,   265,   266,   270,   226,   282,   298,   496,
     284,   285,    33,    34,   320,    35,    36,   502,   417,    37,
     419,   321,   504,   328,   505,   151,     2,    38,    39,   334,
     335,   340,   343,   348,    40,    41,    42,    43,    44,    45,
     397,   424,   402,   349,    90,   404,   407,   408,   409,   206,
     207,   208,   209,   210,   211,   212,   350,   351,    64,    65,
      66,   213,   214,   344,   354,   120,   356,   275,   359,   360,
     364,   427,   370,   260,   383,   188,   391,   388,   330,    29,
     415,   406,    30,   394,   393,   458,   405,    32,   410,   413,
     416,   426,   418,   420,   441,   423,   428,    90,   434,    90,
     430,    35,   435,   298,   436,   459,    90,   437,   438,   433,
     447,   495,   439,   446,   451,   445,   114,   450,   453,   455,
      40,    41,    42,    43,    44,    45,   452,   456,   457,   365,
     468,   484,   487,   475,   461,   492,   166,   497,   498,   501,
     500,   347,   140,   183,    64,    65,    66,   465,   357,   355,
     299,   301,   288,   272,   302,   300,   473,   159,    90,    90,
     303,   395,   322,   333,   429,     0,     0,     0,     0,   481,
     482,     0,     0,     0,    90,     0,     0,     0,    90,   486,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   491,
      90,   494,     0,     0,     0,     0,     0,     0,     0,    90,
       1,     2,     3,     0,     0,     4,    90,     0,     0,     5,
       0,     0,    90,     0,    90,    90,     6,     0,     7,     8,
       9,     0,     0,    10,    11,     0,    12,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
      23,     0,    24,     0,    25,    26,    27,     0,     0,     0,
       0,     0,    28,     0,    29,     0,     0,    30,     0,    31,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     1,     2,     3,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,   179,   180,    24,     0,    25,    26,
      27,     0,     0,     0,     0,     0,    28,     0,    29,     0,
       0,    30,     0,    31,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,   181,   173,     0,    37,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     1,     2,
       0,     0,     0,     4,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,    10,    11,     0,    12,     0,    13,     0,    14,    15,
     113,   144,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    30,     0,     0,   336,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     1,     2,     0,     0,     0,     4,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,    10,    11,     0,    12,     0,
      13,     0,    14,    15,   113,   144,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    30,
       0,     0,   440,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     1,     2,     0,     0,
       0,     4,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,    10,
      11,     0,    12,     0,    13,     0,    14,    15,   113,   144,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,   442,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       1,     2,     0,     0,     0,     4,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,     0,     7,     8,
       9,     0,     0,    10,    11,     0,    12,     0,    13,     0,
      14,    15,   113,   144,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
     444,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     1,     2,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,    10,    11,     0,
      12,     0,    13,     0,    14,    15,   113,   144,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    30,     0,     0,   471,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,    36,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     1,     2,
       0,     0,     0,     4,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,    10,    11,     0,    12,     0,    13,     0,    14,    15,
     113,   144,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    30,     0,     0,   472,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     1,     2,     0,     0,     0,     4,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,    10,    11,     0,    12,     0,
      13,     0,    14,    15,   113,   144,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    30,
       0,     0,   483,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     1,     2,     0,     0,
       0,     4,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,    10,
      11,     0,    12,     0,    13,     0,    14,    15,   113,   144,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,   499,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
       1,     2,     0,     0,     0,     4,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     6,     0,     7,     8,
       9,     0,     0,    10,    11,     0,    12,     0,    13,     0,
      14,    15,   113,   144,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
     503,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,     1,     2,     0,     0,     0,     4,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       6,     0,     7,     8,     9,     0,     0,    10,    11,     0,
      12,     0,    13,     0,    14,    15,   113,   144,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    30,     0,     0,   506,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,    36,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     1,     2,
       0,     0,     0,     4,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,    10,    11,     0,    12,     0,    13,     0,    14,    15,
     113,   144,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    30,     0,     0,   507,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,     1,     2,     0,     0,     0,     4,     0,     0,
       0,     5,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,    10,    11,     0,    12,     0,
      13,     0,    14,    15,   113,   144,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    30,
       0,     0,   508,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     1,     2,     0,     0,
       0,     4,     0,     0,     0,   293,     0,     0,     0,     0,
       0,     0,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,   113,   144,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
      25,    26,    27,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,   294,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,     1,     2,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
     113,   144,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,    25,    26,    27,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,    30,     0,   403,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,    34,     0,    35,    36,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       1,     2,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,   113,   144,     0,     0,     0,     0,     0,     0,
     120,     0,     0,     0,    25,    26,    27,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,   485,
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,     0,    35,    36,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,     1,     2,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,   113,   144,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,    25,    26,    27,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,    30,
       0,   493,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    34,     0,    35,    36,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,     1,     2,     0,     0,     0,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,   113,   144,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,    25,    26,
      27,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,    36,     0,     0,    37,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,     1,     2,     0,     0,
       0,     4,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,   113,   144,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34,     0,    35,    36,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   119,     2,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     2,     0,    15,
       0,     4,     0,     0,     0,     0,     0,     0,   120,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     0,   273,
       0,     0,    29,     0,     0,    30,     0,    15,   274,     0,
      32,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,    33,    34,     0,    35,    36,   119,     2,    37,     0,
      29,     4,     0,    30,     0,     0,    38,    39,    32,     0,
       0,     0,     6,    40,    41,    42,    43,    44,    45,    33,
      34,     0,    35,    36,     0,     0,    37,    15,     0,     0,
       0,     0,     0,     0,    38,    39,   120,    64,    65,    66,
       0,    40,    41,    42,    43,    44,    45,   367,     0,     0,
      29,     0,     0,    30,     0,     0,   368,     0,    32,     0,
       0,     0,     0,     0,     0,    64,    65,    66,     0,    33,
      34,     0,    35,    36,   119,     2,    37,     0,     0,     4,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       6,    40,    41,    42,    43,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    64,    65,    66,     0,     0,
       0,     0,     0,     0,     0,   273,     0,     0,    29,     0,
       0,    30,     0,     0,   422,     0,    32,     0,     0,     0,
       0,     0,     0,     0,   119,     2,     0,    33,    34,     4,
      35,    36,     0,     0,    37,     0,     0,     0,     0,     0,
       6,     0,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    15,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,   119,     2,    64,    65,    66,   296,     0,    29,     0,
       0,    30,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,    36,   112,     0,    37,     0,     0,     0,     0,     0,
       0,   120,    38,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    29,     0,     0,    30,     0,
       0,     0,    14,    32,   113,    17,    18,    19,    20,     0,
       0,     0,   112,    64,    65,    66,     0,    35,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    14,     0,   113,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,     0,
      64,    65,    66,   112,     0,     0,     0,     0,     0,     0,
       0,     0,   411,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,     0,     0,    14,     0,   113,   144,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,    25,    26,    27,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    14,     0,   113,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,   414,     0,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    14,     0,   113,   144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63
};

static const yytype_int16 yycheck[] =
{
       0,     0,    30,     7,    47,   109,     3,   217,   187,   128,
     267,   160,    20,   117,     0,    57,     4,    15,     3,     0,
       0,    18,    28,     3,     3,    29,    57,     3,     3,     3,
       3,    31,    62,     8,    56,    30,     3,    32,     3,    54,
      38,    39,     3,     3,    56,     3,    61,     3,    28,    29,
      56,    62,     7,    54,    57,    35,     6,    58,     3,   283,
     284,   285,     7,     8,   288,    57,    96,    75,    63,    57,
      70,    70,    60,    44,    62,    46,    61,   226,    57,    79,
      79,    60,    57,    56,    70,    64,    62,    61,    67,    70,
      70,    58,    57,    79,    52,    53,    57,    57,   141,    79,
      56,    56,    52,    53,    79,   103,   292,   331,   294,    80,
      81,    57,    91,    92,   118,    57,    62,   296,    44,   223,
      46,    57,   126,   227,    60,   129,   130,   107,   128,   248,
     249,    82,    83,   228,   122,   123,    62,   134,   233,     3,
      55,   245,    57,   329,    95,    57,   370,    37,    38,    39,
     360,     3,   156,   153,    80,    81,   136,   137,    54,    52,
      53,     3,    58,    68,    69,    55,    57,    52,    53,   149,
      63,     3,    62,     7,    57,    54,   433,    60,    63,    58,
       0,    64,    56,    54,    67,   185,   185,    58,    56,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,    91,    92,
      80,    81,   391,   437,   218,   215,   426,   403,     3,   405,
      56,    54,   446,    25,   328,    58,   345,    56,   347,     3,
       4,    52,    53,    54,     8,    93,    94,    58,   462,    52,
      53,   451,   242,   453,   430,    19,    70,    71,    72,    73,
      78,    79,    37,    38,    39,   195,   196,   197,   198,    74,
      34,   193,   194,   201,   202,   265,   199,   200,    78,    43,
      55,    79,    77,    56,     3,   279,     3,    62,     3,    56,
      62,    57,    56,    57,    56,    64,    60,    62,     3,   475,
      56,    65,     3,    62,    58,     3,     8,    57,   296,   485,
      57,    57,    76,    77,     3,    79,    80,   493,   351,    83,
     353,     3,   498,    54,   500,     3,     4,    91,    92,    58,
      58,    56,    58,    54,    98,    99,   100,   101,   102,   103,
     330,   359,   332,    54,   334,   334,   340,   341,   342,    84,
      85,    86,    87,    88,    89,    90,     3,     3,   122,   123,
     124,    96,    97,    58,     3,    43,    58,   357,    58,    55,
      58,   365,    57,    56,    55,    75,    55,    57,    96,    57,
       3,    26,    60,    58,    61,   418,    62,    65,    62,    56,
       3,    55,    58,    58,   388,    58,    55,   387,    56,   389,
      62,    79,    58,   391,    58,   423,   396,    57,    56,   379,
      61,     3,    56,    54,    56,    58,     3,    57,    56,    56,
      98,    99,   100,   101,   102,   103,    58,    58,    58,    54,
      58,    58,    58,    62,   428,    55,    70,    56,    62,    55,
      62,   249,    22,    79,   122,   123,   124,   431,   265,   258,
     188,   190,   176,   152,   191,   189,   450,    32,   448,   449,
     192,   328,   223,   233,   370,    -1,    -1,    -1,    -1,   456,
     457,    -1,    -1,    -1,   464,    -1,    -1,    -1,   468,   468,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,
     480,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,
       3,     4,     5,    -1,    -1,     8,   496,    -1,    -1,    12,
      -1,    -1,   502,    -1,   504,   505,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    45,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     3,     4,     5,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    43,    44,    45,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    57,    -1,
      -1,    60,    -1,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    -1,
      63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    21,    22,    23,    -1,    -1,    26,    27,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    26,    27,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    -1,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    26,    27,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    62,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    -1,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    -1,    62,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      -1,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     3,     4,    -1,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    79,    80,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    34,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    -1,    -1,    60,    -1,    34,    63,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    76,    77,    -1,    79,    80,     3,     4,    83,    -1,
      57,     8,    -1,    60,    -1,    -1,    91,    92,    65,    -1,
      -1,    -1,    19,    98,    99,   100,   101,   102,   103,    76,
      77,    -1,    79,    80,    -1,    -1,    83,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    43,   122,   123,   124,
      -1,    98,    99,   100,   101,   102,   103,    54,    -1,    -1,
      57,    -1,    -1,    60,    -1,    -1,    63,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    76,
      77,    -1,    79,    80,     3,     4,    83,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      19,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,   122,   123,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    60,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    76,    77,     8,
      79,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,   122,   123,   124,    55,    -1,    57,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,     3,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,    57,    -1,    -1,    60,    -1,
      -1,    -1,    33,    65,    35,    36,    37,    38,    39,    -1,
      -1,    -1,     3,   122,   123,   124,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,
     122,   123,   124,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,    12,    19,    21,    22,    23,
      26,    27,    29,    31,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    43,    45,    47,    48,    49,    55,    57,
      60,    62,    65,    76,    77,    79,    80,    83,    91,    92,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   128,
     129,   130,   131,   132,   133,   134,   136,   139,   142,   143,
     152,   155,   158,   159,   160,   161,   164,   165,   166,   167,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   186,   187,   189,   190,   191,   204,
       7,   203,     3,    35,   133,   136,   138,   204,    57,     3,
      43,    56,   156,   171,    56,    56,    57,    62,    57,    57,
      57,   183,     3,     3,     3,   136,    57,    57,     3,   141,
     141,     3,    57,     3,    36,   204,     9,    10,   156,   185,
     204,     3,   186,   137,   171,     4,    57,    60,    62,   187,
     154,   204,   183,   183,   203,     0,   130,    56,    56,    56,
      44,    46,    80,    81,   150,    44,    46,    62,   150,    43,
      44,    80,   131,   132,   150,    25,    56,    20,    75,    74,
      78,    79,    77,    68,    69,    70,    71,    72,    73,    93,
      94,    80,    81,    82,    83,    95,    84,    85,    86,    87,
      88,    89,    90,    96,    97,   170,   183,    57,    60,    64,
      67,    91,    92,   204,    56,     3,     8,    57,    79,   192,
     193,   195,   197,   198,     3,     3,     3,    56,   195,   156,
      56,   156,   168,   171,   191,   204,   156,   156,    62,    62,
     136,   204,   204,    64,   140,    55,    57,    57,    62,   144,
      56,   203,     3,    56,     3,    62,    58,   204,   194,   195,
       3,   151,   151,    54,    63,   171,   156,   156,   169,   188,
     198,   199,    57,   148,    57,    57,     3,    56,   148,   145,
      56,     3,    62,    12,    62,   158,    55,   172,   183,   173,
     175,   176,   177,   178,   179,   179,   180,   180,   180,   180,
     181,   181,   182,   182,   183,   183,   183,   171,   169,   156,
       3,     3,   192,   195,   198,   195,   196,   197,    54,    62,
      96,    57,    60,   196,    58,    58,    63,   131,   158,   167,
      56,    28,    56,    58,    58,   135,   191,   135,    54,    54,
       3,     3,     3,    58,     3,   145,    58,   137,   194,    58,
      55,     3,    61,    61,    58,    54,    61,    54,    63,   156,
      57,   153,     3,    52,    53,   146,   147,    52,    53,   149,
     202,   202,   202,    55,   202,    63,   202,   168,    57,   168,
     172,    55,    58,    61,    58,   193,   168,   171,   200,   201,
     202,   157,   171,    62,   158,    62,    26,   156,   156,   156,
      62,    63,   191,    56,    63,     3,     3,   203,    58,   203,
      58,    63,    63,    58,   186,   169,    55,   156,    55,   201,
      62,    54,    58,   204,    56,    58,    58,    57,    56,    56,
      63,   156,    63,   172,    63,    58,    54,    61,   168,   168,
      57,    56,    58,    56,   163,    56,    58,    58,   203,   186,
     169,   156,    54,    58,   168,   146,   194,   202,    58,     6,
     202,    63,    63,   156,   169,    62,   169,    30,    32,    63,
     162,   136,   136,    63,    58,    62,   158,    58,    58,   168,
      58,   183,    55,    62,   158,     3,   168,    56,    62,    63,
      62,    55,   168,    63,   168,   168,    63,    63,    63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:
#line 71 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (1)].statement)];
            }
    break;

  case 11:
#line 75 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (1)].identifier)];
            }
    break;

  case 12:
#line 82 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.identifier) = _vretained makeComment(_typeId (yyvsp[(1) - (1)].identifier), YES);
            }
    break;

  case 13:
#line 86 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.identifier) = _vretained makeComment(_typeId (yyvsp[(1) - (1)].identifier), NO);
            }
    break;

  case 14:
#line 93 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (1)].statement)];
    }
    break;

  case 17:
#line 99 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORTypeVarPair *returnType = makeTypeVarPair(_typeId (yyvsp[(1) - (5)].declare), nil);
        ORFuncDeclare *declare = makeFuncDeclare(returnType, _typeId (yyvsp[(2) - (5)].expression));
        ORFunctionImp *imp = [ORFunctionImp new];
        imp.scopeImp = _transfer(ORScopeImp *)(yyvsp[(4) - (5)].expression);
        imp.declare = declare;
        [GlobalAst addGlobalStatements:imp];
    }
    break;

  case 18:
#line 108 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (2)].expression)];
    }
    break;

  case 19:
#line 112 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (2)].expression)];
    }
    break;

  case 20:
#line 116 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        [GlobalAst addGlobalStatements:_typeId (yyvsp[(1) - (2)].expression)];
    }
    break;

  case 21:
#line 120 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        [GlobalAst addGlobalStatements:_typeId (yyvsp[(2) - (3)].expression)];
    }
    break;

  case 22:
#line 127 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeStructExp(_typeId (yyvsp[(2) - (5)].identifier), _typeId (yyvsp[(4) - (5)].expression));
}
    break;

  case 23:
#line 134 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeUnionExp(_typeId (yyvsp[(2) - (5)].identifier), _typeId (yyvsp[(4) - (5)].expression));
}
    break;

  case 24:
#line 141 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *list = [_typeId (yyvsp[(1) - (2)].expression) mutableCopy];
                (yyval.expression) = _vretained list;
            }
    break;

  case 25:
#line 146 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *list = _transfer(NSMutableArray *) (yyvsp[(1) - (3)].expression);
                [list addObjectsFromArray:_transfer(NSMutableArray *) (yyvsp[(2) - (3)].expression)];
                (yyval.expression) = _vretained list;
            }
    break;

  case 26:
#line 154 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    OREnumExpressoin *exp = _transfer(OREnumExpressoin *) (yyvsp[(7) - (7)].expression);
    exp.enumName = _typeId (yyvsp[(5) - (7)].identifier);
    exp.valueType = [_transfer(ORTypeSpecial *) (yyvsp[(3) - (7)].declare) type];
    (yyval.expression) = _vretained exp;
}
    break;

  case 27:
#line 161 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    OREnumExpressoin *exp = _transfer(OREnumExpressoin *) (yyvsp[(7) - (7)].expression);
    exp.enumName = _typeId (yyvsp[(5) - (7)].identifier);
    exp.valueType =  [_transfer(ORTypeSpecial *) (yyvsp[(3) - (7)].declare) type];
    (yyval.expression) = _vretained exp;
}
    break;

  case 28:
#line 168 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    OREnumExpressoin *exp = _transfer(OREnumExpressoin *) (yyvsp[(3) - (3)].expression);
    exp.enumName = _typeId (yyvsp[(2) - (3)].identifier);
    (yyval.expression) = _vretained exp;
}
    break;

  case 29:
#line 174 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    OREnumExpressoin *exp = _transfer(OREnumExpressoin *) (yyvsp[(2) - (2)].expression);
    (yyval.expression) = _vretained exp;
}
    break;

  case 30:
#line 179 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeEnumExp(@"",makeTypeSpecial(TypeInt), _typeId (yyvsp[(2) - (3)].expression));
}
    break;

  case 31:
#line 183 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeEnumExp(@"",_typeId (yyvsp[(2) - (5)].declare), _typeId (yyvsp[(4) - (5)].expression));
}
    break;

  case 32:
#line 190 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = [@[_typeId (yyvsp[(1) - (1)].expression)] mutableCopy];
    (yyval.expression) = (__bridge_retained void *)list;
}
    break;

  case 33:
#line 195 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = _transfer(NSMutableArray *) (yyvsp[(1) - (2)].expression);
    [list addObject:_typeId (yyvsp[(2) - (2)].expression)];
    (yyval.expression) = _vretained list;
}
    break;

  case 35:
#line 206 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORTypeVarPair *pair = makeTypeVarPair(_typeId (yyvsp[(1) - (2)].declare), _typeId (yyvsp[(2) - (2)].expression));
    (yyval.expression) = _vretained makeTypedefExp(pair, pair.var.varname);
}
    break;

  case 36:
#line 212 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeTypedefExp(_typeId (yyvsp[(1) - (1)].expression), @"");
}
    break;

  case 37:
#line 216 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeTypedefExp(_typeId (yyvsp[(1) - (2)].expression), _typeId (yyvsp[(2) - (2)].identifier));
}
    break;

  case 38:
#line 220 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeTypedefExp(_typeId (yyvsp[(1) - (2)].expression), _typeId (yyvsp[(2) - (2)].identifier));
}
    break;

  case 39:
#line 227 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORProtocol *orprotcol = [GlobalAst protcolForName:_transfer(id)(yyvsp[(2) - (3)].identifier)];
    NSString *supers = _transfer(NSString *)(yyvsp[(3) - (3)].declare);
    if (supers != nil){
        NSArray *protocols = [supers componentsSeparatedByString:@","];
        orprotcol.protocols = [protocols mutableCopy];
    }
    (yyval.declare) = _vretained orprotcol;
}
    break;

  case 40:
#line 237 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORProtocol *orprotcol = _transfer(ORProtocol *) (yyvsp[(1) - (5)].declare);

    ORPropertyDeclare *property = [ORPropertyDeclare new];
    property.keywords = _transfer(NSMutableArray *) (yyvsp[(3) - (5)].declare);
    property.var = _transfer(ORTypeVarPair *) (yyvsp[(4) - (5)].declare);
    
    [orprotcol.properties addObject:property];
    (yyval.declare) = _vretained orprotcol;
}
    break;

  case 41:
#line 248 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORProtocol *orprotcol = _transfer(ORProtocol *) (yyvsp[(1) - (3)].declare);
    [orprotcol.methods addObject:_transfer(ORMethodDeclare *) (yyvsp[(2) - (3)].declare)];
    (yyval.declare) = _vretained orprotcol;
}
    break;

  case 43:
#line 257 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained @"";
}
    break;

  case 44:
#line 261 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained [NSString stringWithFormat:@".%@", _transfer(id)(yyvsp[(2) - (2)].identifier)];
}
    break;

  case 45:
#line 267 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained [NSString stringWithFormat:@"%@%@", _transfer(id)(yyvsp[(1) - (2)].identifier), _transfer(id)(yyvsp[(2) - (2)].expression)];
}
    break;

  case 46:
#line 275 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = [GlobalAst classForName:_transfer(id)(yyvsp[(2) - (5)].expression)];
                occlass.superClassName = _transfer(id)(yyvsp[(4) - (5)].identifier);
                NSArray *protocols = [_transfer(NSString *)(yyvsp[(5) - (5)].declare) componentsSeparatedByString:@","];
                occlass.protocols = [protocols mutableCopy];
                (yyval.declare) = _vretained occlass;
            }
    break;

  case 47:
#line 284 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = [GlobalAst classForName:_transfer(id)(yyvsp[(2) - (6)].expression)];
                NSArray *protocols = [_transfer(NSString *)(yyvsp[(6) - (6)].declare) componentsSeparatedByString:@","];
                occlass.protocols = [protocols mutableCopy];
                (yyval.declare) = _vretained occlass;
            }
    break;

  case 48:
#line 291 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = [GlobalAst classForName:_transfer(id)(yyvsp[(2) - (5)].expression)];
                NSArray *protocols = [_transfer(NSString *)(yyvsp[(5) - (5)].declare) componentsSeparatedByString:@","];
                occlass.protocols = [protocols mutableCopy];
                (yyval.declare) = _vretained occlass;
            }
    break;

  case 49:
#line 298 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = _transfer(ORClass *) (yyvsp[(1) - (4)].declare);
                [occlass.privateVariables addObjectsFromArray:_transfer(id) (yyvsp[(3) - (4)].declare)];
                (yyval.declare) = _vretained occlass;
            }
    break;

  case 50:
#line 304 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = _transfer(ORClass *) (yyvsp[(1) - (5)].declare);

                ORPropertyDeclare *property = [ORPropertyDeclare new];
                property.keywords = _transfer(NSMutableArray *) (yyvsp[(3) - (5)].declare);
                property.var = _transfer(ORTypeVarPair *) (yyvsp[(4) - (5)].declare);
                
                [occlass.properties addObject:property];
                (yyval.declare) = _vretained occlass;
            }
    break;

  case 53:
#line 322 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORClass *occlass = [GlobalAst classForName:_transfer(id)(yyvsp[(2) - (3)].expression)];
                [occlass.privateVariables addObjectsFromArray:_transfer(id) (yyvsp[(3) - (3)].declare)];
                (yyval.implementation) = _vretained occlass;
            }
    break;

  case 54:
#line 329 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.implementation) = _vretained [GlobalAst classForName:_transfer(id)(yyvsp[(2) - (5)].expression)];
            }
    break;

  case 55:
#line 333 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORMethodImplementation *imp = makeMethodImplementation(_transfer(ORMethodDeclare *) (yyvsp[(2) - (5)].declare), _transfer(ORScopeImp *) (yyvsp[(4) - (5)].expression));
                ORClass *occlass = _transfer(ORClass *) (yyvsp[(1) - (5)].implementation);
                [occlass.methods addObject:imp];
                (yyval.implementation) = _vretained occlass;
            }
    break;

  case 56:
#line 340 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                // 注释出现在类实现中，仅返回原始对象，不添加到类的方法列表
                ORClass *occlass = _transfer(ORClass *) (yyvsp[(1) - (2)].implementation);
                // 不要将注释添加到methods数组中，因为类型不匹配
                // 注释需要单独处理
                (yyval.implementation) = _vretained occlass;
            }
    break;

  case 59:
#line 352 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = [NSMutableArray array];
    (yyval.declare) = (__bridge_retained void *)list;
}
    break;

  case 60:
#line 357 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.declare) = (yyvsp[(2) - (3)].declare);
}
    break;

  case 61:
#line 362 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *list = [NSMutableArray array];
				(yyval.declare) = (__bridge_retained void *)list;
            }
    break;

  case 62:
#line 367 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *list = _transfer(NSMutableArray *) (yyvsp[(1) - (3)].declare);
				[list addObject:_transfer(ORTypeVarPair *) (yyvsp[(2) - (3)].declare)];
				(yyval.declare) = (__bridge_retained void *)list;
            }
    break;

  case 66:
#line 382 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = [NSMutableArray array];
    NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].declare);
    [list addObject:identifier];
    (yyval.declare) = (__bridge_retained void *)list;
}
    break;

  case 67:
#line 389 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].declare);
    NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].declare);
    [list addObject:identifier];
    (yyval.declare) = (__bridge_retained void *)list;
}
    break;

  case 68:
#line 398 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    NSMutableArray *list = [NSMutableArray array];
    (yyval.declare) = (__bridge_retained void *)list;
}
    break;

  case 69:
#line 403 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.declare) = (yyvsp[(2) - (3)].declare);
}
    break;

  case 73:
#line 413 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {   
                ORTypeVarPair *declare = _transfer(ORTypeVarPair *)(yyvsp[(3) - (4)].declare);
                (yyval.declare) = _vretained makeMethodDeclare(NO,declare);
            }
    break;

  case 74:
#line 418 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORTypeVarPair *declare = _transfer(ORTypeVarPair *)(yyvsp[(3) - (4)].declare);
                (yyval.declare) = _vretained makeMethodDeclare(YES,declare);
            }
    break;

  case 75:
#line 423 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORMethodDeclare *method = _transfer(ORMethodDeclare *)(yyval.declare);
                [method.methodNames addObject:_transfer(NSString *) (yyvsp[(2) - (2)].identifier)];
                (yyval.declare) = _vretained method;
            }
    break;

  case 76:
#line 429 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                ORTypeVarPair *pair = _transfer(ORTypeVarPair *)(yyvsp[(5) - (7)].declare);
                ORMethodDeclare *method = _transfer(ORMethodDeclare *)(yyval.declare);
                [method.methodNames addObject:_transfer(NSString *) (yyvsp[(2) - (7)].identifier)];
                [method.parameterTypes addObject:pair];
                [method.parameterNames addObject:_transfer(NSString *) (yyvsp[(7) - (7)].identifier)];
                (yyval.declare) = _vretained method;
            }
    break;

  case 77:
#line 441 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *names = [@[_typeId (yyvsp[(1) - (1)].identifier)] mutableCopy];
            (yyval.expression) = _vretained @[names,[NSMutableArray array]];
        }
    break;

  case 78:
#line 446 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *names = [@[_typeId (yyvsp[(1) - (3)].identifier)] mutableCopy];
            NSMutableArray *values = _typeId (yyvsp[(3) - (3)].expression);
            (yyval.expression) = _vretained @[names,values];
        }
    break;

  case 79:
#line 452 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSArray *array = _transfer(id)(yyvsp[(1) - (4)].expression);
            NSMutableArray *names = array[0];
            NSMutableArray *values = array[1];
            [names addObject:_transfer(NSString *)(yyvsp[(2) - (4)].identifier)];
            [values addObjectsFromArray:_transfer(id)(yyvsp[(4) - (4)].expression)];
            (yyval.expression) = _vretained array;
        }
    break;

  case 80:
#line 464 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
             ORMethodCall *methodcall = (ORMethodCall *) [ORMethodCall new];
             methodcall.caller =  makeValue(OCValueVariable,_typeId (yyvsp[(2) - (4)].identifier));
             NSArray *params = _transfer(NSArray *)(yyvsp[(3) - (4)].expression);
             methodcall.names = params[0];
             methodcall.values = params[1];
             (yyval.expression) = _vretained methodcall;
        }
    break;

  case 81:
#line 473 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
             ORMethodCall *methodcall = (ORMethodCall *) [ORMethodCall new];
             ORValueExpression *caller = _transfer(ORValueExpression *)(yyvsp[(2) - (4)].expression);
             methodcall.caller =  caller;
             NSArray *params = _transfer(NSArray *)(yyvsp[(3) - (4)].expression);
             methodcall.names = params[0];
             methodcall.values = params[1];
             (yyval.expression) = _vretained methodcall;
        }
    break;

  case 82:
#line 484 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = _vretained [NSMutableArray array];
    }
    break;

  case 83:
#line 488 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = _vretained (__bridge NSMutableArray *)(yyvsp[(2) - (3)].declare);
    }
    break;

  case 84:
#line 493 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = nil;
        }
    break;

  case 86:
#line 501 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORTypeVarPair *var = makeTypeVarPair(_typeId (yyvsp[(2) - (7)].expression), makeVar(nil,(yyvsp[(3) - (7)].IntValue)));
            ORFuncVariable *funVar = [ORFuncVariable new];
            funVar.pairs = _transfer(NSMutableArray *)(yyvsp[(4) - (7)].expression);
            funVar.isBlock = YES;
            ORFuncDeclare *declare = makeFuncDeclare(var, funVar);
            ORFunctionImp *imp = [ORFunctionImp new];
            imp.scopeImp = _transfer(ORScopeImp *) (yyvsp[(6) - (7)].expression);
            imp.declare = declare;
            (yyval.expression) = _vretained imp;
        }
    break;

  case 88:
#line 517 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = NULL;
}
    break;

  case 90:
#line 524 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORNode *node = _transfer(ORNode *) (yyvsp[(1) - (2)].expression);
            node.withSemicolon = YES;
            (yyval.statement) = _vretained node;
        }
    break;

  case 91:
#line 530 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSArray *declares = _transfer(NSArray *) (yyvsp[(1) - (2)].expression);
            for (ORNode* node in declares){
                node.withSemicolon = YES;
            }
            (yyval.statement) = _vretained declares;
        }
    break;

  case 92:
#line 538 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORNode *node = makeReturnStatement(nil);
            node.withSemicolon = YES;
            (yyval.statement) = _vretained node;
        }
    break;

  case 93:
#line 544 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORNode *node = makeReturnStatement(_transfer(id)(yyvsp[(2) - (3)].expression));
            node.withSemicolon = YES;
            (yyval.statement) = _vretained node;
        }
    break;

  case 94:
#line 550 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORNode *node = makeBreakStatement();
            node.withSemicolon = YES;
            (yyval.statement) = _vretained node;
        }
    break;

  case 95:
#line 556 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORNode *node = makeContinueStatement();
            node.withSemicolon = YES;
            (yyval.statement) = _vretained node;
        }
    break;

  case 96:
#line 565 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = makeScopeImp();
            [imp addStatements:_transfer(id) (yyvsp[(5) - (5)].statement)];
            ORIfStatement *statement = makeIfStatement(_transfer(id) (yyvsp[(3) - (5)].expression),imp);
            (yyval.statement) = _vretained statement;
        }
    break;

  case 97:
#line 572 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORIfStatement *statement = makeIfStatement(_transfer(id) (yyvsp[(3) - (7)].expression),_transfer(ORScopeImp *)(yyvsp[(6) - (7)].expression));
            (yyval.statement) = _vretained statement;
        }
    break;

  case 98:
#line 577 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = makeScopeImp();
            [imp addStatements:_transfer(id) (yyvsp[(7) - (7)].statement)];
            ORIfStatement *elseIfStatement = makeIfStatement(_transfer(id) (yyvsp[(5) - (7)].expression),imp);
            elseIfStatement.last = _transfer(ORIfStatement *)(yyvsp[(1) - (7)].statement);
            (yyval.statement)  = _vretained elseIfStatement;
        }
    break;

  case 99:
#line 585 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORIfStatement *elseIfStatement = makeIfStatement(_transfer(id) (yyvsp[(5) - (9)].expression),_transfer(ORScopeImp *)(yyvsp[(8) - (9)].expression));
            elseIfStatement.last = _transfer(ORIfStatement *)(yyvsp[(1) - (9)].statement);
            (yyval.statement)  = _vretained elseIfStatement;
        }
    break;

  case 100:
#line 591 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = makeScopeImp();
            [imp addStatements:_transfer(id) (yyvsp[(3) - (3)].statement)];
            ORIfStatement *elseStatement = makeIfStatement(nil,imp);
            elseStatement.last = _transfer(ORIfStatement *)(yyvsp[(1) - (3)].statement);
            (yyval.statement)  = _vretained elseStatement;
        }
    break;

  case 101:
#line 599 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORIfStatement *elseStatement = makeIfStatement(nil,_transfer(ORScopeImp *)(yyvsp[(4) - (5)].expression));
            elseStatement.last = _transfer(ORIfStatement *)(yyvsp[(1) - (5)].statement);
            (yyval.statement)  = _vretained elseStatement;
        }
    break;

  case 102:
#line 608 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORDoWhileStatement *statement = makeDoWhileStatement(_transfer(id)(yyvsp[(7) - (9)].expression),_transfer(ORScopeImp *)(yyvsp[(3) - (9)].expression));
            (yyval.statement) = _vretained statement;
        }
    break;

  case 103:
#line 615 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORWhileStatement *statement = makeWhileStatement(_transfer(id)(yyvsp[(3) - (7)].expression),_transfer(ORScopeImp *)(yyvsp[(6) - (7)].expression));
            (yyval.statement) = _vretained statement;
        }
    break;

  case 104:
#line 623 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
             ORCaseStatement *statement = makeCaseStatement(_typeId (yyvsp[(2) - (3)].expression));
            (yyval.statement) = _vretained statement;
        }
    break;

  case 105:
#line 628 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORCaseStatement *statement = makeCaseStatement(nil);
            (yyval.statement) = _vretained statement;
        }
    break;

  case 106:
#line 633 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORCaseStatement *statement =  _typeId (yyvsp[(1) - (2)].statement);
            [statement.scopeImp addStatements:_typeId (yyvsp[(2) - (2)].statement)];
            (yyval.statement) = _vretained statement;
        }
    break;

  case 107:
#line 639 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORCaseStatement *statement =  _transfer(ORCaseStatement *)(yyvsp[(1) - (4)].statement);
            statement.scopeImp = _transfer(ORScopeImp *) (yyvsp[(3) - (4)].expression);
            (yyval.statement) = _vretained statement;
        }
    break;

  case 108:
#line 646 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.statement) = _vretained [NSMutableArray array];
            }
    break;

  case 109:
#line 650 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *array = _typeId (yyvsp[(1) - (2)].statement);
                [array addObject: _typeId (yyvsp[(2) - (2)].statement)];
                (yyval.statement) = _vretained array;
            }
    break;

  case 110:
#line 658 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
             ORSwitchStatement *statement = makeSwitchStatement(_transfer(id) (yyvsp[(3) - (7)].expression));
             statement.cases = _typeId (yyvsp[(6) - (7)].statement);
             (yyval.statement) = _vretained statement;
         }
    break;

  case 111:
#line 667 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORForStatement* statement = makeForStatement(_transfer(ORScopeImp *) (yyvsp[(10) - (11)].expression));
            statement.varExpressions = _typeId (yyvsp[(3) - (11)].expression);
            statement.condition = _typeId (yyvsp[(5) - (11)].expression);
            statement.expressions = _typeId (yyvsp[(7) - (11)].expression);
            (yyval.statement) = _vretained statement;
        }
    break;

  case 112:
#line 675 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                   ORForStatement* statement = makeForStatement(_transfer(ORScopeImp *) (yyvsp[(10) - (11)].expression));
                   statement.varExpressions = [@[_typeId (yyvsp[(3) - (11)].expression)] mutableCopy];
                   statement.condition = _typeId (yyvsp[(5) - (11)].expression);
                   statement.expressions = _typeId (yyvsp[(7) - (11)].expression);
                   (yyval.statement) = _vretained statement;
               }
    break;

  case 113:
#line 685 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORForInStatement * statement = makeForInStatement(_transfer(ORScopeImp *)(yyvsp[(8) - (9)].expression));
            NSArray *exps = _typeId (yyvsp[(3) - (9)].expression);
            statement.expression = exps[0];
            statement.value = _transfer(id)(yyvsp[(5) - (9)].expression);
            (yyval.statement) = _vretained statement;
        }
    break;

  case 120:
#line 706 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeScopeImp();
        }
    break;

  case 121:
#line 710 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = _transfer(ORScopeImp *)(yyvsp[(1) - (2)].expression);
            [imp addStatements:_transfer(id) (yyvsp[(2) - (2)].statement)];
            (yyval.expression) = _vretained imp;
        }
    break;

  case 122:
#line 716 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = _transfer(ORScopeImp *)(yyvsp[(1) - (2)].expression);
            [imp addStatements:_transfer(id) (yyvsp[(2) - (2)].statement)];
            (yyval.expression) = _vretained imp;
        }
    break;

  case 123:
#line 722 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORScopeImp *imp = _transfer(ORScopeImp *)(yyvsp[(1) - (2)].expression);
            [imp addStatements:_transfer(id) (yyvsp[(2) - (2)].identifier)];
            (yyval.expression) = _vretained imp;
        }
    break;

  case 124:
#line 731 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained [NSMutableArray array];
        }
    break;

  case 125:
#line 735 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *list = [NSMutableArray array];
            [list addObject:_transfer(id)(yyvsp[(1) - (1)].expression)];
            (yyval.expression) = _vretained list;
        }
    break;

  case 126:
#line 741 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].expression);
            [list addObject:_transfer(id) (yyvsp[(3) - (3)].expression)];
            (yyval.expression) = _vretained list;
        }
    break;

  case 127:
#line 750 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssign;
        }
    break;

  case 128:
#line 754 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignAnd;
        }
    break;

  case 129:
#line 758 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignOr;
        }
    break;

  case 130:
#line 762 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignXor;
        }
    break;

  case 131:
#line 766 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignAdd;
        }
    break;

  case 132:
#line 770 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignSub;
        }
    break;

  case 133:
#line 774 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignDiv;
        }
    break;

  case 134:
#line 778 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignMuti;
        }
    break;

  case 135:
#line 782 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.Operator) = AssignOperatorAssignMod;
        }
    break;

  case 137:
#line 790 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORAssignExpression *expression = makeAssignExpression((yyvsp[(2) - (3)].Operator));
        expression.expression = _transfer(id) (yyvsp[(3) - (3)].expression);
        expression.value = _transfer(ORValueExpression *)(yyvsp[(1) - (3)].expression);
        (yyval.expression) = _vretained expression;
    }
    break;

  case 139:
#line 801 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORTernaryExpression *expression = makeTernaryExpression();
        expression.expression = _transfer(id)(yyvsp[(1) - (5)].expression);
        [expression.values addObject:_transfer(id)(yyvsp[(3) - (5)].expression)];
        [expression.values addObject:_transfer(id)(yyvsp[(5) - (5)].expression)];
        (yyval.expression) = _vretained expression;
    }
    break;

  case 140:
#line 809 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORTernaryExpression *expression = makeTernaryExpression();
        expression.expression = _transfer(id)(yyvsp[(1) - (4)].expression);
        [expression.values addObject:_transfer(id)(yyvsp[(4) - (4)].expression)];
        (yyval.expression) = _vretained expression;
    }
    break;

  case 142:
#line 821 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorLOGIC_OR);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 144:
#line 832 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorLOGIC_AND);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 146:
#line 842 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorOr);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 148:
#line 852 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorXor);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 150:
#line 863 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorAnd);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 152:
#line 874 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorEqual);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 153:
#line 881 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorNotEqual);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 155:
#line 891 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorLT);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 156:
#line 898 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorLE);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 157:
#line 905 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorGT);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 158:
#line 912 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorGE);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 160:
#line 922 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorShiftLeft);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 161:
#line 929 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorShiftRight);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 163:
#line 939 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorAdd);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 164:
#line 946 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorSub);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 166:
#line 957 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorMulti);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 167:
#line 964 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorDiv);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 168:
#line 971 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORBinaryExpression *exp = makeBinaryExpression(BinaryOperatorMod);
        exp.left = _transfer(id) (yyvsp[(1) - (3)].expression);
        exp.right = _transfer(id) (yyvsp[(3) - (3)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 170:
#line 982 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression((yyvsp[(1) - (2)].Operator));
        exp.value = _transfer(id)(yyvsp[(2) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 171:
#line 988 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression(UnaryOperatorSizeOf);
        exp.value = _transfer(id)(yyvsp[(2) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 172:
#line 994 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression(UnaryOperatorIncrementPrefix);
        exp.value = _transfer(id)(yyvsp[(2) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 173:
#line 1000 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression(UnaryOperatorDecrementPrefix);
        exp.value = _transfer(id)(yyvsp[(2) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 174:
#line 1009 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorAdressPoint;
    }
    break;

  case 175:
#line 1013 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorAdressValue;
    }
    break;

  case 176:
#line 1017 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorAdressValue;
    }
    break;

  case 177:
#line 1021 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorNegative;
    }
    break;

  case 178:
#line 1025 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorBiteNot;
    }
    break;

  case 179:
#line 1029 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.Operator) = UnaryOperatorNot;
    }
    break;

  case 184:
#line 1043 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression(UnaryOperatorIncrementSuffix);
        exp.value = _transfer(id)(yyvsp[(1) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 185:
#line 1049 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORUnaryExpression *exp = makeUnaryExpression(UnaryOperatorDecrementSuffix);
        exp.value = _transfer(id)(yyvsp[(1) - (2)].expression);
        (yyval.expression) = _vretained exp;
    }
    break;

  case 186:
#line 1055 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        is_variable = true;
        ORMethodCall *methodcall = (ORMethodCall *)[ORMethodCall new];
        methodcall.caller =  _transfer(ORValueExpression *)(yyvsp[(1) - (3)].expression);
        methodcall.methodOperator = MethodOpretorDot;
        methodcall.names = [@[_typeId (yyvsp[(3) - (3)].identifier)] mutableCopy];
        (yyval.expression) = _vretained methodcall;
    }
    break;

  case 187:
#line 1064 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORMethodCall *methodcall = (ORMethodCall *) [ORMethodCall new];
        methodcall.caller =  _transfer(ORValueExpression *)(yyvsp[(1) - (3)].expression);
        methodcall.methodOperator = MethodOpretorArrow;
        methodcall.names = [@[_typeId (yyvsp[(3) - (3)].identifier)] mutableCopy];
        (yyval.expression) = _vretained methodcall;
    }
    break;

  case 188:
#line 1072 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        is_variable = true;
        (yyval.expression) = _vretained makeFuncCall(_transfer(id) (yyvsp[(1) - (4)].expression), _transfer(id) (yyvsp[(3) - (4)].expression));
    }
    break;

  case 189:
#line 1077 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        ORSubscriptExpression *value = [ORSubscriptExpression new];
        value.caller = _typeId (yyvsp[(1) - (4)].expression);
        value.keyExp = _typeId (yyvsp[(3) - (4)].expression);
        (yyval.expression) = _vretained value;
    }
    break;

  case 190:
#line 1084 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = (yyvsp[(5) - (5)].expression);
    }
    break;

  case 191:
#line 1088 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = (yyvsp[(6) - (6)].expression);
    }
    break;

  case 192:
#line 1095 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSString *value = _transfer(NSString *)(yyvsp[(1) - (1)].identifier);
            
            if ([value hasPrefix:@"0x"]) {
                unsigned long long ullvalue = strtoull(value.UTF8String, NULL, 16);
                (yyval.expression) = _vretained makeIntegerValue(ullvalue);
            }else{
                unsigned long long ullvalue = strtoull(value.UTF8String, NULL, 0);
                (yyval.expression) = _vretained makeIntegerValue(ullvalue);
            }
        }
    break;

  case 193:
#line 1107 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSString *value = _transfer(NSString *)(yyvsp[(1) - (1)].identifier);
            (yyval.expression) = _vretained makeDoubleValue(value.doubleValue);
        }
    break;

  case 194:
#line 1113 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *array = [NSMutableArray array];
            (yyval.expression) = _vretained array;
        }
    break;

  case 195:
#line 1118 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *array = _transfer(id)(yyvsp[(1) - (4)].expression);
            [array addObject:@[_transfer(id)(yyvsp[(2) - (4)].expression),_transfer(id)(yyvsp[(4) - (4)].expression)]];
            (yyval.expression) = _vretained array;
        }
    break;

  case 196:
#line 1124 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = (yyvsp[(1) - (2)].expression);
        }
    break;

  case 197:
#line 1132 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            is_variable = true;
            (yyval.expression) = _vretained makeValue(OCValueVariable,_transfer(id) (yyvsp[(1) - (1)].identifier));
        }
    break;

  case 198:
#line 1137 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueSelf);
        }
    break;

  case 199:
#line 1141 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueSuper);
        }
    break;

  case 200:
#line 1145 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            is_variable = true;
            (yyval.expression) = (yyvsp[(1) - (1)].expression);
        }
    break;

  case 201:
#line 1150 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            is_variable = true;
            (yyval.expression) = (yyvsp[(2) - (3)].expression);
        }
    break;

  case 202:
#line 1155 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueDictionary,_transfer(id)(yyvsp[(3) - (4)].expression));
        }
    break;

  case 203:
#line 1159 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueArray,_transfer(id)(yyvsp[(3) - (4)].expression));
        }
    break;

  case 204:
#line 1163 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueNSNumber,_transfer(id)(yyvsp[(3) - (4)].expression));
        }
    break;

  case 205:
#line 1167 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueNSNumber,_transfer(id)(yyvsp[(2) - (2)].expression));
        }
    break;

  case 206:
#line 1171 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueString,_typeId (yyvsp[(2) - (2)].identifier));
        }
    break;

  case 207:
#line 1175 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSString *sel = _typeId (yyvsp[(1) - (1)].identifier);
            NSString *selector = [sel substringWithRange:NSMakeRange(10, sel.length - 11)];
            (yyval.expression) = _vretained makeValue(OCValueSelector,selector);
        }
    break;

  case 208:
#line 1181 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueProtocol,_transfer(id)(yyvsp[(3) - (4)].identifier));
        }
    break;

  case 209:
#line 1185 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueCString,_transfer(id)(yyvsp[(1) - (1)].identifier));
        }
    break;

  case 212:
#line 1191 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueNil);
        }
    break;

  case 213:
#line 1195 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeValue(OCValueNULL);
        }
    break;

  case 214:
#line 1199 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeBoolValue(YES);
        }
    break;

  case 215:
#line 1203 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeBoolValue(NO);
        }
    break;

  case 216:
#line 1210 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.declaration_modifier) = DeclarationModifierWeak;
        }
    break;

  case 217:
#line 1214 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.declaration_modifier) = DeclarationModifierStrong;
        }
    break;

  case 218:
#line 1218 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.declaration_modifier) = DeclarationModifierStatic;
        }
    break;

  case 219:
#line 1225 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        NSMutableArray *array = _transfer(NSMutableArray *)(yyvsp[(3) - (3)].expression);
        for (ORDeclareExpression *declare in array){
            declare.pair.type = _typeId (yyvsp[(2) - (3)].declare);
            declare.modifier = (yyvsp[(1) - (3)].declaration_modifier);
            _vretained declare;
        }
        (yyval.expression) = _vretained array;
    }
    break;

  case 220:
#line 1235 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        NSMutableArray *array = _transfer(NSMutableArray *)(yyvsp[(2) - (2)].expression);
        for (ORDeclareExpression *declare in array){
            declare.pair.type = _typeId (yyvsp[(1) - (2)].declare);
            _vretained declare;
        }
        (yyval.expression) = _vretained array;
    }
    break;

  case 221:
#line 1246 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
         (yyval.expression) = _vretained [@[_typeId (yyvsp[(1) - (1)].expression)] mutableCopy];
     }
    break;

  case 222:
#line 1250 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        NSMutableArray *array = _transfer(NSMutableArray *)(yyvsp[(1) - (3)].expression);
        [array addObject:_transfer(id) (yyvsp[(3) - (3)].expression)];
        (yyval.expression) = _vretained array;
    }
    break;

  case 223:
#line 1259 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = _vretained makeDeclareExpression(nil, _typeId (yyvsp[(1) - (1)].expression), nil);
    }
    break;

  case 224:
#line 1263 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.expression) = _vretained makeDeclareExpression(nil, _typeId (yyvsp[(1) - (3)].expression), _typeId (yyvsp[(3) - (3)].expression));
    }
    break;

  case 225:
#line 1270 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeVar(nil);
        }
    break;

  case 228:
#line 1279 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORVariable *var = _transfer(ORVariable *)(yyvsp[(2) - (2)].expression);
            var.isBlock = YES;
            (yyval.expression) = _vretained var;
        }
    break;

  case 229:
#line 1285 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            ORVariable *var = _transfer(ORVariable *)(yyvsp[(2) - (2)].expression);
            var.ptCount = (yyvsp[(1) - (2)].IntValue);
            (yyval.expression) = _vretained var;
        }
    break;

  case 230:
#line 1294 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.expression) = _vretained makeVar(nil);
        }
    break;

  case 232:
#line 1302 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained makeVar(_typeId (yyvsp[(1) - (1)].identifier));
}
    break;

  case 233:
#line 1306 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.expression) = _vretained _typeId (yyvsp[(2) - (3)].expression);
}
    break;

  case 234:
#line 1310 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORFuncVariable *funVar = [ORFuncVariable copyFromVar:_transfer(ORVariable *)(yyvsp[(1) - (4)].expression)];
    NSMutableArray *pairs = _transfer(NSMutableArray *)(yyvsp[(3) - (4)].expression);
    if ([pairs lastObject] == [NSNull null]) {
        funVar.isMultiArgs = YES;
        [pairs removeLastObject];
    }
    funVar.pairs = pairs;
    (yyval.expression) = _vretained funVar;
}
    break;

  case 235:
#line 1321 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    ORVariable *var = _transfer(ORVariable *)(yyvsp[(1) - (4)].expression);
    if ((yyvsp[(3) - (4)].expression) == NULL){
        var.ptCount += 1;
        (yyval.expression) = _vretained var;
    }else{
        ORCArrayVariable *arrayVar = [ORCArrayVariable copyFromVar:var];
        arrayVar.capacity = _transfer(ORNode *)(yyvsp[(3) - (4)].expression);
        (yyval.expression) = _vretained arrayVar;
    }
}
    break;

  case 236:
#line 1337 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.IntValue) = 1;
        }
    break;

  case 237:
#line 1341 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
           (yyval.IntValue) = (yyvsp[(2) - (2)].IntValue) + 1;
       }
    break;

  case 238:
#line 1346 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            (yyval.IntValue) = 0;
        }
    break;

  case 241:
#line 1354 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
            NSMutableArray *array = _transfer(NSMutableArray *)(yyvsp[(1) - (3)].declare);
            [array addObject:[NSNull null]];
            (yyval.expression) = _vretained array;
        }
    break;

  case 242:
#line 1362 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained [NSMutableArray array];
            }
    break;

  case 243:
#line 1366 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *array = [NSMutableArray array];
                [array addObject:_transfer(id)(yyvsp[(1) - (1)].declare)];
                (yyval.declare) = _vretained array;
            }
    break;

  case 244:
#line 1372 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                NSMutableArray *array = _transfer(NSMutableArray *)(yyvsp[(1) - (3)].declare);
                [array addObject:_transfer(id) (yyvsp[(3) - (3)].declare)];
                (yyval.declare) = _vretained array;
            }
    break;

  case 245:
#line 1381 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
        (yyval.declare) = _vretained makeTypeVarPair(_typeId (yyvsp[(2) - (3)].declare), _typeId (yyvsp[(3) - (3)].expression));
    }
    break;

  case 246:
#line 1389 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
    (yyval.declare) = nil;
}
    break;

  case 248:
#line 1395 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeObject, _typeId (yyvsp[(1) - (2)].identifier));
            }
    break;

  case 249:
#line 1399 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeStruct, _typeId (yyvsp[(1) - (2)].identifier));
            }
    break;

  case 250:
#line 1403 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeUnion, _typeId (yyvsp[(1) - (2)].identifier));
            }
    break;

  case 251:
#line 1407 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeObject,@"id");
            }
    break;

  case 252:
#line 1411 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeObject,@"typeof");
            }
    break;

  case 253:
#line 1415 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                 (yyval.declare) = _vretained makeTypeSpecial(TypeUChar);
            }
    break;

  case 254:
#line 1419 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeUShort);
            }
    break;

  case 255:
#line 1423 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeUInt);
            }
    break;

  case 256:
#line 1427 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeULong);
            }
    break;

  case 257:
#line 1431 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeULongLong);
            }
    break;

  case 258:
#line 1435 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeChar);
            }
    break;

  case 259:
#line 1439 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeShort);
            }
    break;

  case 260:
#line 1443 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeInt);
            }
    break;

  case 261:
#line 1447 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeLong);
            }
    break;

  case 262:
#line 1451 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeLongLong);
            }
    break;

  case 263:
#line 1455 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeDouble);
            }
    break;

  case 264:
#line 1459 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeFloat);
            }
    break;

  case 265:
#line 1463 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeClass);
            }
    break;

  case 266:
#line 1467 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeBOOL);
            }
    break;

  case 267:
#line 1471 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeSEL);
            }
    break;

  case 268:
#line 1475 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeVoid);
            }
    break;

  case 269:
#line 1479 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"
    {
                (yyval.declare) = _vretained makeTypeSpecial(TypeObject,@"id");
            }
    break;


/* Line 1267 of yacc.c.  */
#line 4507 "/Users/gaoyu/Desktop/OCRunner/OC2Script/build/oc2mango.build/Debug/oc2mango.build/DerivedSources/y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1484 "/Users/gaoyu/Desktop/OCRunner/OC2Script/oc2mangoLib/cal.y"

void yyerror(const char *s){
    extern unsigned long yylineno , yycolumn , yylen;
    extern char linebuf[500];
    extern char *yytext;
    NSMutableString *str = [NSMutableString string];
    for (int i = 0; i < yycolumn - yylen; i++){
        [str appendString:@" "];
    }
    for (int i = 0; i < yylen; i++){
        [str appendString:@"^"];
    }
    NSString *errorInfo = [NSString stringWithFormat:@"\n------yyerror------\nline: %lu\n%s\n%@\nerror: %s\n-------------------\n",yylineno + 1,linebuf,str,s];
    OCParser.error = errorInfo;
}

