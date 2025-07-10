// Program to reverse a string manually without using built-in functions

#include<stdio.h>
int main(){

    char str[20] ;
    printf("Enter the string     : ");
    scanf("%[^\n]",str);

    int i = 0 ;
    while(str[i] != '\0'){
         i++;
        
    }
    int length = i;
    
    char temp[20];
    for( int i = 0 ; i < length/2 ; i++){

        temp[i] = str[i];
        str[i]  = str[length-i-1];
        str[length-i-1] = temp[i];
    }
    printf("%s",str);

    return 0;
}
