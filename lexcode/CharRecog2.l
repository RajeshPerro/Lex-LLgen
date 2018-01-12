
%{
#include<stdio.h>
#include<stdlib.h>
int yywrap(void);
int yylex(void);


%}

%s qstring 

%%
<qstring>\"	BEGIN 0;
<qstring>.	;
\"	BEGIN qstring;
%%

int yywrap(void)
{
return 1;
}

int main()
{

return yylex();
}
