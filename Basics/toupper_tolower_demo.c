// Program to demonstrate use of toupper() and tolower() with characters and strings

#include <stdio.h>
#include <string.h>      // For strlen()
#include <ctype.h>      // For toupper() , tolower()
int main(){
    
    char c = 'a';
    char d = 'A';
    printf("%c\n",toupper(c));
    printf("%c\n",tolower(d));
    
    char str1[] = "moonlight";
    for(int i = 0 ; i < strlen(str1) ; i++){
        str1[i] = toupper(str1[i]);
    }
    printf("%s\n",str1);
    
     char str2[] = "MOONLIGHT";
    for(int i = 0 ; i < strlen(str2) ; i++){
        str2[i] = tolower(str2[i]);
    }
    printf("%s\n",str2);
    
    return 0;
}
