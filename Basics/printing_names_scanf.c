// Printing names with spaces using scanf shortcut

#include<stdio.h>
int main()
{
     char name[20];
     printf("Enter your name:");
     scanf("%[^\n]",name);        //  %[^\n] tells scanf to read everything until a newline (\n) — allowing spaces.
     printf("Hello %s !",name);
     return 0;
}
