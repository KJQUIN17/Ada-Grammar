#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "ada.y"

/* Kyle Quinn
   ada.y
   Final Ada Grammar
*/

#line 17 "ada.y"
typedef union {
	int integer;
	char *var;
} YYSTYPE;
#line 35 "y.tab.c"
#define IS 257
#define BEG 258
#define END 259
#define PROCEDURE 260
#define ID 261
#define NUMBER 262
#define TYPE 263
#define ARRAY 264
#define RAISE 265
#define OTHERS 266
#define RECORD 267
#define IN 268
#define OUT 269
#define RANGE 270
#define CONSTANT 271
#define DERIVES 272
#define EXCEPTION 273
#define NULLWORD 274
#define LOOP 275
#define IF 276
#define STAR 277
#define THEN 278
#define ELSEIF 279
#define ELSE 280
#define EXIT 281
#define WHEN 282
#define AND 283
#define OR 284
#define EQ 285
#define NEQ 286
#define LT 287
#define GT 288
#define GTE 289
#define LTE 290
#define TICK 291
#define NOT 292
#define EXP 293
#define ARROW 294
#define OF 295
#define DOTDOT 296
#define ENDIF 297
#define ENDREC 298
#define ENDLOOP 299
#define EXITWHEN 300
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    2,    3,    7,    8,    9,    9,   10,   10,   11,
   11,   12,   12,   12,   12,    1,    4,   14,   14,   13,
   13,   15,   15,   15,   15,   15,   15,   16,   22,   22,
   23,   17,   24,   24,   19,   18,   20,   21,    5,    5,
   25,   25,   25,   25,   25,   25,   25,   26,   27,   28,
   33,   33,   33,   29,   34,   34,   34,   30,   31,   36,
   36,   35,   39,   39,   38,   38,   42,   42,   41,   45,
   45,   44,   44,   48,   48,   47,   47,   47,   37,   37,
   40,   40,   40,   40,   40,   40,   43,   43,   46,   46,
   32,   49,   49,    6,    6,   50,   50,   50,   51,   51,
   51,
};
short yylen[] = {                                         2,
    1,    8,    2,    8,    3,    3,    0,    6,    4,    1,
    3,    1,    1,    2,    0,    1,    2,    2,    0,    3,
    0,    1,    1,    1,    1,    1,    1,   11,    1,    1,
    1,    6,    3,    2,    3,    7,    5,    3,    2,    0,
    2,    2,    2,    2,    2,    2,    2,    3,    2,    4,
    2,    3,    0,    6,    5,    2,    0,    2,    2,    3,
    0,    2,    3,    0,    2,    3,    3,    0,    2,    3,
    0,    2,    2,    3,    0,    1,    1,    3,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    3,    3,    1,    2,    0,    5,    4,    0,    2,    3,
    0,
};
short yydefred[] = {                                      0,
    0,    0,    1,    0,    3,    0,    0,    0,    0,    0,
    0,    0,   22,   23,   24,   25,   26,   27,    0,    0,
    0,    0,    0,    0,    0,   17,    0,   11,    0,    0,
   76,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   16,    0,   38,   35,    0,   18,    0,   20,    0,
    0,    0,    0,    0,   49,   58,   41,    0,   77,    0,
   73,    0,    0,    0,    0,   39,   42,   43,   44,   45,
   46,   47,   79,   80,   59,    0,   81,   82,   83,   85,
   86,   84,   62,    0,   88,   87,   65,    0,   89,   90,
   69,    0,    0,   72,    0,    0,    5,    0,    0,    0,
    0,    0,   29,   30,    0,   48,    0,    0,    0,    0,
    0,    0,   78,   66,    0,   94,    0,    0,    0,    0,
    0,    0,   31,   37,    0,    0,    0,    0,    0,    0,
   32,    0,    0,   91,   51,    0,   50,    0,    0,    0,
    0,    0,    2,   60,   63,   67,   70,   74,    6,    0,
    0,    0,   33,   36,   92,   52,    0,    0,    0,   99,
    0,    0,    0,    0,   13,    0,    0,    0,    0,   56,
   54,   97,  100,    0,   14,    0,    0,    0,    0,   96,
    0,    4,    0,    0,    8,   28,   55,
};
short yydgoto[] = {                                       2,
   55,    3,    4,    9,   39,   75,   24,   25,  107,  135,
   10,  176,   11,   26,   12,   13,   14,   15,   16,   17,
   18,  115,  134,  112,   40,   41,   42,   43,   44,   45,
   46,   65,  121,  169,   47,   85,   86,   48,   93,   94,
   49,   97,   98,   50,  101,  102,   51,  104,  118,  126,
  152,
};
short yysindex[] = {                                   -212,
 -219,    0,    0, -149,    0, -174,   68, -147, -143,   58,
 -142,   60,    0,    0,    0,    0,    0,    0, -144, -136,
  -40, -190, -139, -142, -134,    0, -174,    0, -179,  -39,
    0, -135,   66,  -40,  -38,  -30,  -38,  -34, -146,  -40,
   69,   70,   71,   72,   73,   74, -245, -191,   57,   59,
 -140,    0, -138,    0,    0,   95,    0, -174,    0,   98,
 -144, -182,  -38,  -38,    0,    0,    0, -241,    0, -133,
    0,   99,   57, -130, -117,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -38,    0,    0,    0,    0,
    0,    0,    0,  -38,    0,    0,    0,  -34,    0,    0,
    0,  -34,  -30,    0, -123, -144,    0, -115, -182,   86,
   88, -150,    0,    0, -141,    0,  105,  112,  100,  -38,
 -137,  -40,    0,    0, -120,    0,  102, -245, -191,   57,
   59, -140,    0,    0,  116,  106,  -40, -131, -103, -144,
    0, -182,  -38,    0,    0,  104,    0, -176, -111, -128,
  -94, -126,    0,    0,    0,    0,    0,    0,    0, -158,
 -146, -182,    0,    0,    0,    0,  -38,  -40, -127,    0,
  -40, -111,  -40, -100,    0, -103,  -88,  132, -104,    0,
    0,    0,    0, -130,    0,  117,  118, -116,  -40,    0,
 -144,    0, -103, -176,    0,    0,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0, -151,  120,    0,    0,    0,
  -78,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -222,    0,    0,  -78,    0,    0, -151,    0,    0,   18,
    0,    0,    0, -231,    0,    0,    0,    0,  -77, -227,
    0,    0,    0,    0,    0,    0,  -32,  -33,    3,  -10,
  -23,    0,    0,    0,    0,  -76,    0, -151,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -114,    0,    0,
    0,    0,    3,  -75,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  142,    0,    0,    0,
    0, -205,    0,    0, -108,    0,    0,  -32,  -33,    3,
  -10,  -23,    0,    0,    0,    0, -222,    0,    0, -110,
    0,    0,    0,    0,    0,    0,    0, -107, -108,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -74,
  -77,    0,    0,    0,    0,    0,    0, -105,    0,    0,
  -70, -108, -218,  -68,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -75,    0,  150,    0,    0, -205,    0,
    0,    0,    0, -107,    0,    0,    0,
};
short yygindex[] = {                                      0,
 -109,    0,    0,  136,  -17,   34,    0,    0,    0,    5,
  -16,    0,  170,  174,    0,    0,    0,    0,  -47,    0,
    0,  -84,    0,   61,    0,    0,    0,    0,    0,    0,
   -7,    0,    0,    6,  113,   75,    0,  108,   76,    0,
  -22,  -44,    0,  107,   77,    0,  -21,   78,   63,   20,
 -106,
};
#define YYTABLESIZE 308
short yytable[] = {                                      37,
   64,   37,   28,  151,   38,   37,   38,   64,   61,   37,
   64,   61,  151,  111,   71,   73,   68,   75,   75,   75,
   75,   75,   76,   75,  138,   64,   61,   70,  124,   72,
   71,   40,   71,   71,   71,   75,   40,   83,   84,  119,
   40,    5,  170,   68,  110,   40,   68,    1,   71,   40,
   40,   40,   40,   40,   40,  116,  117,  164,  120,   77,
   77,   68,   77,   40,   77,  183,  186,   40,   40,   40,
   52,   40,   40,   40,   40,  130,   77,  178,  113,  114,
   53,  132,   54,  196,   60,  156,    7,   61,    8,  136,
   62,   40,  111,   87,   88,   89,   90,   91,   92,   96,
   99,   95,  167,  168,  148,  100,   21,    6,   21,  174,
  175,   19,  146,   20,   21,   22,    7,   23,   27,  161,
   29,   56,   58,  110,   67,   66,   74,   77,   78,   79,
   80,   81,   82,  105,  106,  117,  103,  109,  133,  123,
  149,  127,  137,  139,  122,  150,  140,  141,  143,  149,
  180,  125,  144,  182,  142,  184,  159,   52,  145,  179,
  153,  147,  166,  160,  162,  171,  172,  173,  185,  181,
  187,  194,  188,  189,  136,  191,  192,   10,  193,   19,
    7,   95,   93,   98,   53,  101,   15,   34,   40,   57,
    9,   40,   12,  108,  177,  195,   59,   57,  128,  197,
  163,  129,  154,  190,  155,  165,    0,  157,  131,  158,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   30,   31,   69,   31,   32,    0,   69,   31,    0,    0,
   69,   31,   63,   33,   34,   35,    0,    0,    0,    0,
    0,    0,    0,    0,   64,   61,    0,    0,    0,   64,
   64,   36,    0,   36,   75,    0,    0,   36,    0,   75,
   75,   75,   75,   75,   75,   75,   75,   71,    0,    0,
    0,    0,   71,   71,   71,   71,   71,   71,   71,   71,
   68,    0,    0,    0,    0,   68,   68,   68,   68,   68,
   68,   68,   68,    0,   77,    0,    0,    0,    0,    0,
   77,   77,   77,   77,   77,   77,   77,   77,
};
short yycheck[] = {                                      40,
   40,   40,   19,  124,   45,   40,   45,   41,   41,   40,
   44,   44,  124,   61,   36,   38,   34,   41,   42,   43,
   44,   45,   40,   47,  109,   59,   59,   35,   73,   37,
   41,  259,   43,   44,   45,   59,  259,  283,  284,  281,
  259,  261,  149,   41,   61,  273,   44,  260,   59,  281,
  273,  279,  280,  281,  282,   63,   64,  142,  300,   42,
   43,   59,   45,  282,   47,  172,  176,  299,  300,  297,
  261,  299,  300,  279,  280,   98,   59,  162,  261,  262,
  271,  103,  273,  193,  264,  130,  261,  267,  263,  106,
  270,  297,  140,  285,  286,  287,  288,  289,  290,   43,
   42,   45,  279,  280,  122,   47,  258,  257,  260,  268,
  269,   44,  120,  261,  258,   58,  261,  260,   59,  137,
  257,  261,  257,  140,   59,  261,  273,   59,   59,   59,
   59,   59,   59,  272,   40,  143,  277,   40,  262,   41,
  261,  259,  258,   58,  278,  266,   59,  298,   44,  261,
  168,  282,   41,  171,  296,  173,   41,  261,   59,  167,
   59,  299,   59,   58,  296,  294,  261,  294,  269,  297,
  259,  189,   41,  278,  191,   59,   59,   58,  295,  258,
  257,  259,   41,  259,  299,  294,  261,  298,  259,  297,
   41,  297,  261,   58,  161,  191,   27,   24,   86,  194,
  140,   94,  128,  184,  129,  143,   -1,  131,  102,  132,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  261,  262,  261,  262,  265,   -1,  261,  262,   -1,   -1,
  261,  262,  272,  274,  275,  276,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  278,  278,   -1,   -1,   -1,  283,
  284,  292,   -1,  292,  278,   -1,   -1,  292,   -1,  283,
  284,  285,  286,  287,  288,  289,  290,  278,   -1,   -1,
   -1,   -1,  283,  284,  285,  286,  287,  288,  289,  290,
  278,   -1,   -1,   -1,   -1,  283,  284,  285,  286,  287,
  288,  289,  290,   -1,  277,   -1,   -1,   -1,   -1,   -1,
  283,  284,  285,  286,  287,  288,  289,  290,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 300
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'|'",0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"IS","BEG","END","PROCEDURE","ID","NUMBER","TYPE","ARRAY","RAISE",
"OTHERS","RECORD","IN","OUT","RANGE","CONSTANT","DERIVES","EXCEPTION",
"NULLWORD","LOOP","IF","STAR","THEN","ELSEIF","ELSE","EXIT","WHEN","AND","OR",
"EQ","NEQ","LT","GT","GTE","LTE","TICK","NOT","EXP","ARROW","OF","DOTDOT",
"ENDIF","ENDREC","ENDLOOP","EXITWHEN",
};
char *yyrule[] = {
"$accept : program",
"program : main_body",
"main_body : main_specification IS declarative_part_sequence BEG sequence_of_statements exception_part END ';'",
"main_specification : PROCEDURE ID",
"procedure_body : procedure_specification IS declarative_part_sequence BEG sequence_of_statements exception_part END ';'",
"procedure_specification : PROCEDURE ID formal_parameter_part",
"formal_parameter_part : '(' parameters ')'",
"formal_parameter_part :",
"parameters : identifier_list ':' mode type_name ';' parameters",
"parameters : identifier_list ':' mode type_name",
"identifier_list : ID",
"identifier_list : ID ',' identifier_list",
"mode : IN",
"mode : OUT",
"mode : IN OUT",
"mode :",
"type_name : ID",
"declarative_part_sequence : declarative_part procedure_sequence",
"procedure_sequence : procedure_body procedure_sequence",
"procedure_sequence :",
"declarative_part : decl ';' declarative_part",
"declarative_part :",
"decl : array_type_definition",
"decl : record_type_definition",
"decl : name_type_definition",
"decl : variable_declaration",
"decl : constant_variable_declaration",
"decl : exception_type_definition",
"array_type_definition : TYPE ID IS ARRAY '(' constant_option DOTDOT constant_option ')' OF type_name",
"constant_option : ID",
"constant_option : NUMBER",
"constant_expression : NUMBER",
"record_type_definition : TYPE ID IS RECORD component_list ENDREC",
"component_list : variable_declaration ';' component_list",
"component_list : variable_declaration ';'",
"variable_declaration : identifier_list ':' type_name",
"name_type_definition : TYPE ID IS RANGE constant_option DOTDOT constant_option",
"constant_variable_declaration : identifier_list ':' CONSTANT DERIVES constant_expression",
"exception_type_definition : identifier_list ':' EXCEPTION",
"sequence_of_statements : statement_type sequence_of_statements",
"sequence_of_statements :",
"statement_type : NULLWORD ';'",
"statement_type : assignment_statement ';'",
"statement_type : procedure_call ';'",
"statement_type : loop_statement ';'",
"statement_type : if_statement ';'",
"statement_type : raise_exception ';'",
"statement_type : expression ';'",
"assignment_statement : ID DERIVES expression",
"procedure_call : ID optional_actual_parameter_part",
"loop_statement : LOOP sequence_of_statements loop_exit ENDLOOP",
"loop_exit : EXIT ';'",
"loop_exit : EXITWHEN expression ';'",
"loop_exit :",
"if_statement : IF expression THEN sequence_of_statements if_more ENDIF",
"if_more : ELSEIF expression THEN sequence_of_statements if_more",
"if_more : ELSE sequence_of_statements",
"if_more :",
"raise_exception : RAISE ID",
"expression : relation boolean_operator_list",
"boolean_operator_list : boolean_operator relation boolean_operator_list",
"boolean_operator_list :",
"relation : simple_expression relational_operator_list",
"relational_operator_list : relational_operator simple_expression relational_operator_list",
"relational_operator_list :",
"simple_expression : term adding_operator_list",
"simple_expression : '-' term adding_operator_list",
"adding_operator_list : adding_operator term adding_operator_list",
"adding_operator_list :",
"term : factor multiplying_operator_list",
"multiplying_operator_list : multiplying_operator factor multiplying_operator_list",
"multiplying_operator_list :",
"factor : primary primary_list",
"factor : NOT primary",
"primary_list : STAR primary primary_list",
"primary_list :",
"primary : NUMBER",
"primary : ID",
"primary : '(' expression ')'",
"boolean_operator : AND",
"boolean_operator : OR",
"relational_operator : EQ",
"relational_operator : NEQ",
"relational_operator : LT",
"relational_operator : LTE",
"relational_operator : GT",
"relational_operator : GTE",
"adding_operator : '+'",
"adding_operator : '-'",
"multiplying_operator : '*'",
"multiplying_operator : '/'",
"optional_actual_parameter_part : '(' actual_parameter_part ')'",
"actual_parameter_part : expression ',' actual_parameter_part",
"actual_parameter_part : expression",
"exception_part : EXCEPTION exception_body",
"exception_part :",
"exception_body : WHEN choice_sequence ARROW sequence_of_statements exception_body",
"exception_body : WHEN OTHERS ARROW sequence_of_statements",
"exception_body :",
"choice_sequence : ID choice_sequence",
"choice_sequence : '|' ID choice_sequence",
"choice_sequence :",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
#line 179 "ada.y"
#include <stdio.h>
#include <string.h>

main(){

    printf("About to scan. . . . . .\n");
	yyparse();

}
#line 424 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 23 "ada.y"
{printf ("\n*******\nDone.\n*******\n");}
break;
#line 609 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
