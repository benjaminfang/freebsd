#define WORD 257
#define METHOD 258
#define FUNCMETH 259
#define THING 260
#define PMFUNC 261
#define PRIVATEREF 262
#define FUNC0SUB 263
#define UNIOPSUB 264
#define LSTOPSUB 265
#define LABEL 266
#define FORMAT 267
#define SUB 268
#define ANONSUB 269
#define PACKAGE 270
#define USE 271
#define WHILE 272
#define UNTIL 273
#define IF 274
#define UNLESS 275
#define ELSE 276
#define ELSIF 277
#define CONTINUE 278
#define FOR 279
#define LOOPEX 280
#define DOTDOT 281
#define FUNC0 282
#define FUNC1 283
#define FUNC 284
#define UNIOP 285
#define LSTOP 286
#define RELOP 287
#define EQOP 288
#define MULOP 289
#define ADDOP 290
#define DOLSHARP 291
#define DO 292
#define HASHBRACK 293
#define NOAMP 294
#define LOCAL 295
#define MY 296
#define OROP 297
#define ANDOP 298
#define NOTOP 299
#define ASSIGNOP 300
#define OROR 301
#define ANDAND 302
#define BITOROP 303
#define BITANDOP 304
#define SHIFTOP 305
#define MATCHOP 306
#define UMINUS 307
#define REFGEN 308
#define POWOP 309
#define PREINC 310
#define PREDEC 311
#define POSTINC 312
#define POSTDEC 313
#define ARROW 314
typedef union {
    I32	ival;
    char *pval;
    OP *opval;
    GV *gvval;
} YYSTYPE;
extern YYSTYPE yylval;
