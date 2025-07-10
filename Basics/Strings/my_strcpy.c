// Program to copy one string into another (like strcpy) without built-in functions, ensuring enough space and adding null terminator '\0' to end the string properly.

#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[10] = "Moon";
    char str2[10] = "Light";
    
    puts(str1);
    puts(str2);
    
    if(sizeof(str1) > strlen(str2))
       {
         int i = 0; 
         while(str2[i] != '\0')
         {
            str1[i] = str2[i];
            i++;
        }
     str1[i] = '\0';
     puts(str1);
    } 
    else 
    {
        printf("str1 doesn't have enough space to copy str2 !");
    }
    
    return 0;
}
