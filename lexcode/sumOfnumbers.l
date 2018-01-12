%{
#include<stdio.h>
int yywrap(void);
extern int token_val;
#include "Lpars.h"
%}
%%
\( {return '(';}
\) {return ')';}
\, {return ',';}
" " {return ' ';}
\n {return nl;}
S {return 'S';}
s {return 'S';}

M {return 'M';}
m {return 'M';}

D {return 'D';}
d {return 'D';}
[0-9]+ {token_val=atoi(yytext); return num;}
-[0-9] {token_val=atoi(yytext); return num;}
%%
int yywrap(void){return 1;}