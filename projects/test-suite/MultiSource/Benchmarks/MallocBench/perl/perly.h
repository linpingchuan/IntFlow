#ifndef YYERRCODE
#define YYERRCODE 256
#endif

#define WORD 257
#define APPEND 258
#define OPEN 259
#define SSELECT 260
#define LOOPEX 261
#define USING 262
#define FORMAT 263
#define DO 264
#define SHIFT 265
#define PUSH 266
#define POP 267
#define LVALFUN 268
#define WHILE 269
#define UNTIL 270
#define IF 271
#define UNLESS 272
#define ELSE 273
#define ELSIF 274
#define CONTINUE 275
#define SPLIT 276
#define FLIST 277
#define FOR 278
#define FILOP 279
#define FILOP2 280
#define FILOP3 281
#define FILOP4 282
#define FILOP22 283
#define FILOP25 284
#define FUNC0 285
#define FUNC1 286
#define FUNC2 287
#define FUNC2x 288
#define FUNC3 289
#define FUNC4 290
#define FUNC5 291
#define HSHFUN 292
#define HSHFUN3 293
#define FLIST2 294
#define SUB 295
#define FILETEST 296
#define LOCAL 297
#define DELETE 298
#define RELOP 299
#define EQOP 300
#define MULOP 301
#define ADDOP 302
#define PACKAGE 303
#define AMPER 304
#define FORMLIST 305
#define REG 306
#define ARYLEN 307
#define ARY 308
#define HSH 309
#define STAR 310
#define SUBST 311
#define PATTERN 312
#define RSTRING 313
#define TRANS 314
#define LISTOP 315
#define DOTDOT 316
#define OROR 317
#define ANDAND 318
#define UNIOP 319
#define LS 320
#define RS 321
#define MATCH 322
#define NMATCH 323
#define UMINUS 324
#define POW 325
#define INC 326
#define DEC 327
typedef union {
    int	ival;
    char *cval;
    ARG *arg;
    CMD *cmdval;
    struct compcmd compval;
    STAB *stabval;
    FCMD *formval;
} YYSTYPE;
extern YYSTYPE yylval;
extern YYSTYPE yylval;
