%{

#include<stdio.h>
int yywrap(void);
int yylex(void);

%}

op [+-*/]

letter [a-zA-Z]

digitt [0-9]

id {letter}*|({letter}{digitt})+

notid ({digitt}{letter})+
%s comment
%%

[ \t\n]+
"//".* {fprintf(yyout,"%s \n", yytext);}
<INITIAL>auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while {fprintf(yyout,"\n<br><span style='color:red;'>%s</span><br>\n", yytext);}
<INITIAL>[//]         ECHO; BEGIN(comment);
<comment>. {fprintf(yyout,"%s \n", yytext);}
<comment>[\n]  ECHO; BEGIN(INITIAL);
{id} {fprintf(yyout,"%s\n",yytext);}
{notid} {fprintf(yyout,"%s \n", yytext);}
%%

int yywrap(void)
{
return 1;
}

int main()

{
FILE *fp;

char file[100];

printf("\nEnter the filename: ");

scanf("%s", file);

fp=fopen(file,"r");
yyin=fp;
yyout = fopen("keyWordColor.html","w+");
printf("Done.! Check your html file\n");
return yylex();
}

