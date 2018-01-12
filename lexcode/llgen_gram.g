{	
#include <stdio.h>
}
%start parse, spec;
spec : 
     | 'a' spec {printf("2");}
     | 'b' spec {printf("1");}
     ;
{
int main(void)
{
printf("\n");
parse();
return 0;
}
void LLmessage(int tk)
{
printf("Error %d",tk);
}

}
