// Program to calculate the length of a string (like strlen) without using built-in functions, by counting characters until the null terminator '\0'

#include<stdio.h>
int main(){
    
    char str[20] ;
    printf("Enter the string     : ");
    scanf("%[^\n]",str);
    
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    printf("Length of the string : %d\n",i);
    
    return 0;
}
