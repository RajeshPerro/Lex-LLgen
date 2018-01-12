%{
#include<stdio.h>
#include<stdlib.h>
int yywrap(void);
int yylex(void);
%}
%%
" "[Cc]at" " {printf("Kitty");}
%%
int yywrap(void){return 1;} 
int main(void){return yylex();}
