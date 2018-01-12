/* LLgen generated code from source sumOfnum.g */
#include "Lpars.h"
#define LL_LEXI yylex
#define LLNOFIRSTS
#if __STDC__ || __cplusplus
#define LL_ANSI_C 1
#endif
#define LL_LEXI yylex
/* $Id: incl,v 2.13 1997/02/21 15:44:09 ceriel Exp $ */
#ifdef LL_DEBUG
#include <assert.h>
#include <stdio.h>
#define LL_assert(x)	assert(x)
#else
#define LL_assert(x)	/* nothing */
#endif

extern int LLsymb;

#define LL_SAFE(x)	/* Nothing */
#define LL_SSCANDONE(x)	if (LLsymb != x) LLsafeerror(x)
#define LL_SCANDONE(x)	if (LLsymb != x) LLerror(x)
#define LL_NOSCANDONE(x) LLscan(x)
#ifdef LL_FASTER
#define LLscan(x)	if ((LLsymb = LL_LEXI()) != x) LLerror(x)
#endif

extern unsigned int LLscnt[];
extern unsigned int LLtcnt[];
extern int LLcsymb;

#if LL_NON_CORR
extern int LLstartsymb;
#endif

#define LLsdecr(d)	{LL_assert(LLscnt[d] > 0); LLscnt[d]--;}
#define LLtdecr(d)	{LL_assert(LLtcnt[d] > 0); LLtcnt[d]--;}
#define LLsincr(d)	LLscnt[d]++
#define LLtincr(d)	LLtcnt[d]++

#if LL_ANSI_C
extern int LL_LEXI(void);
extern void LLread(void);
extern int LLskip(void);
extern int LLnext(int);
extern void LLerror(int);
extern void LLsafeerror(int);
extern void LLnewlevel(unsigned int *);
extern void LLoldlevel(unsigned int *);
#ifndef LL_FASTER
extern void LLscan(int);
#endif
#ifndef LLNOFIRSTS
extern int LLfirst(int, int);
#endif
#if LL_NON_CORR
extern void LLnc_recover(void);
#endif
#else /* not LL_ANSI_C */
extern LLread();
extern int LLskip();
extern int LLnext();
extern LLerror();
extern LLsafeerror();
extern LLnewlevel();
extern LLoldlevel();
#ifndef LL_FASTER
extern LLscan();
#endif
#ifndef LLNOFIRSTS
extern int LLfirst();
#endif
#if LL_NON_CORR
extern LLnc_recover();
#endif
#endif /* not LL_ANSI_C */
# line 1 "sumOfnum.g"

#include<stdio.h>
#include<stdlib.h>
int parse(void);
int token_val;
#if LL_ANSI_C
void LL0_SA(void);
static void LL1_A(void);
static void LL2_B(void);
static void LL3_C(void);
static void LL4_R(
# line 28 "sumOfnum.g"
int sum) ;
static void LL5_M(
# line 32 "sumOfnum.g"
int mul) ;
static void LL6_S(
# line 36 "sumOfnum.g"
int sub) ;
#else
static LL1_A();
static LL2_B();
static LL3_C();
static LL4_R();
static LL5_M();
static LL6_S();
#endif
#if LL_ANSI_C
void
#endif
LL0_SA(
#if LL_ANSI_C
void
#endif
) {
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* 'S' */ 4 : ;
LLsdecr(0);
LLtincr(7);
LL_SAFE('S');
LL1_A();
break;
case /* 'M' */ 5 : ;
LLsdecr(0);
LLtincr(7);
LL_SAFE('M');
LL2_B();
break;
case /* 'D' */ 6 : ;
LLsdecr(0);
LLtincr(7);
LL_SAFE('D');
LL3_C();
break;
case /*  EOFILE  */ 0 : ;
goto L_3;
L_3: ;
LLsdecr(0);
break;
default: if (LLskip()) goto L_2;
goto L_3;
}
}
static
#if LL_ANSI_C
void
#endif
LL1_A(
#if LL_ANSI_C
void
#endif
) {
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* '(' */ 7 : ;
LLtdecr(7);
LLsincr(1);
LL_SAFE('(');
LL_NOSCANDONE(num);
LL4_R(
# line 16 "sumOfnum.g"
token_val);
break;
case /*  EOFILE  */ 0 : ;
goto L_3;
L_3: ;
LLtdecr(7);
break;
default: if (LLskip()) goto L_2;
goto L_3;
}
}
static
#if LL_ANSI_C
void
#endif
LL2_B(
#if LL_ANSI_C
void
#endif
) {
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* '(' */ 7 : ;
LLtdecr(7);
LLsincr(1);
LL_SAFE('(');
LL_NOSCANDONE(num);
LL5_M(
# line 20 "sumOfnum.g"
token_val);
break;
case /*  EOFILE  */ 0 : ;
goto L_3;
L_3: ;
LLtdecr(7);
break;
default: if (LLskip()) goto L_2;
goto L_3;
}
}
static
#if LL_ANSI_C
void
#endif
LL3_C(
#if LL_ANSI_C
void
#endif
) {
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* '(' */ 7 : ;
LLtdecr(7);
LLsincr(1);
LL_SAFE('(');
LL_NOSCANDONE(num);
LL6_S(
# line 24 "sumOfnum.g"
token_val);
break;
case /*  EOFILE  */ 0 : ;
goto L_3;
L_3: ;
LLtdecr(7);
break;
default: if (LLskip()) goto L_2;
goto L_3;
}
}
static
#if LL_ANSI_C
void
#endif
LL4_R(
#if LL_ANSI_C
# line 28 "sumOfnum.g"
int sum)  
#else
# line 28 "sumOfnum.g"
 sum) int sum;
#endif
{
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* ')' */ 8 : ;
goto L_3;
L_3: ;
LLsdecr(1);
LLsincr(0);
LL_SSCANDONE(')');
# line 28 "sumOfnum.g"
{printf("Summation = %d\n ", sum);}
LL_NOSCANDONE(nl);
LLread();
LL0_SA();
break;
default: if (LLskip()) goto L_2;
goto L_3;
case /* ',' */ 9 : ;
LL_SAFE(',');
LL_NOSCANDONE(num);
LL4_R(
# line 29 "sumOfnum.g"
sum + token_val);
break;
}
}
static
#if LL_ANSI_C
void
#endif
LL5_M(
#if LL_ANSI_C
# line 32 "sumOfnum.g"
int mul)  
#else
# line 32 "sumOfnum.g"
 mul) int mul;
#endif
{
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* ')' */ 8 : ;
goto L_3;
L_3: ;
LLsdecr(1);
LLsincr(0);
LL_SSCANDONE(')');
# line 32 "sumOfnum.g"
{printf("Multiplication = %d\n ", mul);}
LL_NOSCANDONE(nl);
LLread();
LL0_SA();
break;
default: if (LLskip()) goto L_2;
goto L_3;
case /* ',' */ 9 : ;
LL_SAFE(',');
LL_NOSCANDONE(num);
LL5_M(
# line 33 "sumOfnum.g"
mul * token_val);
break;
}
}
static
#if LL_ANSI_C
void
#endif
LL6_S(
#if LL_ANSI_C
# line 36 "sumOfnum.g"
int sub)  
#else
# line 36 "sumOfnum.g"
 sub) int sub;
#endif
{
LLread();
goto L_2; /* so that the label is used for certain */
L_2: ;
switch(LLcsymb) {
case /* ')' */ 8 : ;
goto L_3;
L_3: ;
LLsdecr(1);
LLsincr(0);
LL_SSCANDONE(')');
# line 36 "sumOfnum.g"
{printf("Difference = %d\n ", sub);}
LL_NOSCANDONE(nl);
LLread();
LL0_SA();
break;
default: if (LLskip()) goto L_2;
goto L_3;
case /* ',' */ 9 : ;
LL_SAFE(',');
LL_NOSCANDONE(num);
LL6_S(
# line 37 "sumOfnum.g"
sub - token_val);
break;
}
}

# line 40 "sumOfnum.g"

int main(){
  printf("\n");
  parse();
}
void LLmessage(int th){
  printf("Error :  %d\n",th);
}

