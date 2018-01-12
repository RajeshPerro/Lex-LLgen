%{
#include<stdio.h>
int yywrap(void);
int yylex(void);
%}
%%
^[ \t]*[1-9]*[1-46-9][ \t]*$ {printf("%s(-)",yytext);}
^[ \t]*[1-9]*[0-5][ \t]*$ {printf("%s(+)",yytext);}

%%
int yywrap(void){return 1;}
int main(void) {
yyout = fopen("data.txt","w+");
return yylex();
}

