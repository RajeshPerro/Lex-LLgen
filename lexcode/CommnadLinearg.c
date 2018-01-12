#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 1)
        return 0;

    int i;
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
//after reading the commandline argument now separating file name...so we can do any operation on it...
    nameOfFile = strtok(cmdstring, " ");
      while (nameOfFile != NULL) 
      {
      printf("File name : %s\n", nameOfFile);
      nameOfFile = strtok(NULL, " ,");
      }

    return 0;
}