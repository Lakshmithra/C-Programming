/*  Program to manually convert a character to uppercase or lowercase using ASCII values without built-in functions.

    Logic:
    'a' to 'z' (ASCII 97–122) → uppercase by subtracting 32
    'A' to 'Z' (ASCII 65–90)  → lowercase by adding 32
    Difference between cases is always 32 in ASCII 
*/


#include <stdio.h>
int main(){
    
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    
    if((ch >= 97) && (ch <= 122)){
        ch  -=  32;
        printf("Upper case : %c\n",ch);
    }
    else if ((ch >= 65) && (ch <=90)){
        ch = ch + 32;
        printf("Lower case : %c\n",ch);
    }
    else {
        printf("Enter a valid alphabet between A - Z or a - z  !");
    }
  
    return 0;
}
