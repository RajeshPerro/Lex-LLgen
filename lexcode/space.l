%{
#include<stdio.h>
int yywrap(void);
int yylex(void);

%}
%%
^" "*	;
%%
int yywrap(void){return 1;}
main() {return yylex();}
