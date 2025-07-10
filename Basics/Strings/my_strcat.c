// Program to concatenate str2 to str1 manually by finding the end of str1 and copying characters one by one without using built-in functions

#include <stdio.h>
int main(){
    
    char str1[15] = "Moon";
    char str2[15] = "Light";
    
    printf("Printing string 1 : %s\n",str1);
    printf("Printing string 2 : %s\n\n",str2); 

    // Finding the position of null terminator in str1

    int i = 0;
    while (str1[i] != '\0'){
          i++;
    }
    printf("Null terminator before concatenation : %d\n",i);

    // Append each character of str2 to the end of str1

    int j = 0;
    while(str2[j] != '\0'){ 
        str1[i] = str2[j];
        i++;
        j++;
    }
    printf("Null terminator after concatenation  : %d\n\n",i);
    
    // Add the null terminator at the end of the combined string

    str1[i] = '\0';
    printf("Concatenated string : %s\n",str1);
    
    return 0;
}
