// Keep asking the user to enter a username until it is at least 8 characters long

#include <stdio.h>
#include<string.h>   //for using strlen()
int main()
 {
    char name[100];
    for(int i=1;i>0;i++)
    {
        printf("Enter a username:");
        fgets(name,sizeof(name),stdin);   //consider name with spaces
        name[strcspn(name,"\n")]='\0';   //For replacing '\n' with '\0'
        size_t length = strlen(name);   //size_t is accurate for sizes,length,indexes
        if(strlen(name)>=8)
            {
            break;
            }
    }
     return 0;
}
