%{
#include<stdio.h>
int yywrap(void);
int yylex(void);
%}
word [a-zA-Z]+
num ([1-9][0-9]*)

%%
{word} {printf("WD");}
{num}|(0) {printf("Number Length : %d",yyleng);}
%%

int yywrap(void) {return 1;}
int main(void) {return yylex();}
