%{
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int yywrap(void);
int yylex(void);


%}

%s lowerCase UpperCase 

%%
<INITIAL>^[a-z]	        ECHO; BEGIN(lowerCase);
<lowerCase>[A-Z]	putchar(tolower(*yytext));
<INITIAL>^[A-Z]		ECHO; BEGIN(UpperCase);
<UpperCase>[a-z]	putchar(toupper(*yytext));
\n		        ECHO; BEGIN(INITIAL);
%%

int yywrap(void)
{
return 1;
}

int main()
{

return yylex();
}
