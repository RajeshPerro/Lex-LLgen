%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
int main(int argc, char *argv[]) 
{
FILE *fp;
int TotalWord=0, TotalChar=0, TotalRow=0;
    if (argc < 1)
        return 0;

    int i, cnt=0;
    int strsize = 0;
    char *cmdstring;
    char *nameOfFile;
    for (i=1; i<argc; i++) {
        strsize += strlen(argv[i]);
        if (argc > i+1)
            strsize++;
    }
    cmdstring = malloc(strsize);
    cmdstring[0] = '\0';

    for (i=1; i<argc; i++) {
        strcat(cmdstring, argv[i]);
        if (argc > i+1){
            strcat(cmdstring, " ");   

        }
        
    }
    printf("cmdstring: %s\n", cmdstring);
    nameOfFile = strtok(cmdstring, " ");
 // yyout = fopen("resultCount.txt","a");
  while (nameOfFile != NULL) 
      {
	cnt++;
	fp=fopen(nameOfFile,"r");     
 	printf("File name :%s\n", nameOfFile);
      	nameOfFile = strtok(NULL, " ,");
      	yyin=fp;
	yyout = fopen("resultCount.txt","a");
	yylex(); 
   	fprintf(yyout,"In file: %d The number of : word %d , chracter %d rows %d\n",cnt,word,cha,row); 	
	TotalWord=TotalWord+word;
        TotalChar = TotalChar+cha;
        TotalRow = TotalRow+row;    
   	word=0; 
       	cha =0;
	row=0;
	}
//yylex();
fprintf(yyout,"The total number of : word %d , chracter %d rows %d\n",TotalWord,TotalChar,TotalRow);
//return 0;
}
