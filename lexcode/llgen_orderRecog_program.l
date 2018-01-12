%{
#include<stdio.h>
#include<stdlib.h>
int yywrap(void);
int yylex(void);
#include "Lpars.h"
%}
%%
pay {return tok_p;}
[1-9]*[0-9]+(\,[0-9][0-9])? {return tok_num;}
EUR {return tok_val;}
%%
int yywrap(void)
{return 1;}


