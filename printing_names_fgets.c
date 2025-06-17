// Printing names with spaces using fgets

#include<stdio.h>
#include<string.h>             // library for using fgets()

int main()
{
     char name[50];
     printf("Enter your name:");
     fgets(name,50,stdin);         //syntax of fgets: fgets(variable_name,size,stdin);

// fgets()  moves exclamatory to newline after pressing enter

     name[strcspn(name,"\n")]=0;   // removing newline
     printf("Hello %s !",name);
     return 0;
}
