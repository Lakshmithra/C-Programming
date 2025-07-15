// Program to demonstrate file reading using fgets() and fgetc() in C

#include <stdio.h>
#include <stdlib.h>

int main(){

   char ch[25];
   FILE *p;
   p = fopen("Demo fopen.c","r");

   if(p==NULL){
     printf("File not found !\n");
     exit(1);
   }

   while(fgets(ch,25,p) != NULL){
       printf("%s",ch);
   }
   fclose(p);

    printf("\n");

    FILE *q;
    q = fopen("Demo fopen.c","r");

    if(q==NULL){
        printf("File not found !\n");
        exit(1);
    }

    char c;
    while ((c = fgetc(q)) != EOF){
        putchar(c);
    }
    fclose(q);

   return 0;
}

/*
    SYNTAX COMPARISON: NORMAL I/O vs FILE I/O in C

    Purpose            Normal I/O Syntax                    File I/O Syntax
    --------------------------------------------------------------------------
    Open File          –                                    FILE *fp = fopen("file.txt", "r");
    Close File         –                                    fclose(fp);
    Read Integer       scanf("%d", &x);                     fscanf(fp, "%d", &x);
    Write Integer      printf("%d", x);                     fprintf(fp, "%d", x);
    Read Character     char c = getchar();                  char c = fgetc(fp);
    Write Character    putchar(c);                          fputc(c, fp);
    Read String        gets(str); or fgets(str, size, stdin);  fgets(str, size, fp);
    Write String       puts(str);                           fputs(str, fp);

    Note:
    - Normal I/O is for console input/output.
    - File I/O is for reading/writing data to/from files on disk.
*/
