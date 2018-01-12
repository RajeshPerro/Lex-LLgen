%{
#include<stdio.h>
#include<stdlib.h>
int yywrap(void);
int yylex(void);
int word=0, row=0, cha =0;

%}
%%
[^ \n\t]+  {
++word; 
cha+=yyleng;
}
\n { 
++cha; 
++row;
 }
.  {
 ++cha;
 }
%%
int yywrap(void)
{
return 1;
}
int main()
{
yyout = fopen("resultCount.txt","w+");
yylex();
fprintf(yyout,"The number of : word %d , chracter %d rows %d",word,cha,row);
}
