{
#include<stdio.h>
#include<stdlib.h>
}
%token tok_p, tok_num, tok_val;
%start parse, s;
s:
 |tok_p tok_num tok_val s
 ;
{
int main(void){
printf("\n");
parse();
printf("ok");
return 0;
}
LLmessage(int tk){
printf("Error %d\n",tk);
exit(1);
}
}
