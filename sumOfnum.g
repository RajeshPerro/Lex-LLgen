{
#include<stdio.h>
#include<stdlib.h>
int parse(void);
int token_val;
}
%start parse, SA;
%token num,nl;

SA : 'S' A
  | 'M' B
  | 'D' C
  |
  ;

A  :  '('  num  R(token_val)
   |
   ;

B  :  '('  num  M(token_val)
   |
   ;
   
C  :  '('  num  S(token_val)
   |
   ;
  
R(int sum) : ')' {printf("Summation = %d\n ", sum);} nl SA
           | ',' num R(sum + token_val) 
           ;

M(int mul) : ')' {printf("Multiplication = %d\n ", mul);} nl SA
           | ',' num M(mul * token_val) 
           ;

S(int sub) : ')' {printf("Difference = %d\n ", sub);} nl SA
           | ',' num S(sub - token_val) 
           ;

{
int main(){
  printf("\n");
  parse();
}
void LLmessage(int th){
  printf("Error :  %d\n",th);
}
}