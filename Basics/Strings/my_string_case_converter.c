/*  
    Program to manually convert a string to uppercase or lowercase 
    using ASCII values without built-in functions.

    Logic:
    - 'a' to 'z' (ASCII 97–122) → uppercase by subtracting 32
    - 'A' to 'Z' (ASCII 65–90)  → lowercase by adding 32
    - ASCII difference between cases is 32
*/

#include <stdio.h>
int main(){
    
    char ch[20];
    printf("Enter the string : ");
    scanf("%[^\n]",ch);
   
    for( int i = 0 ; ch[i] != '\0' ; i++)
    {
        
        if(ch[i] == 32){
            continue;
        }
        else if((ch[i] >= 97) && (ch[i] <= 122)){
            ch[i]  -=  32;
        }
        else if((ch[i] >= 65) && (ch[i] <=90)){
            ch[i] += 32;
        }
        else {
            printf("Enter a valid string !\n");
            break;
        }
    }
    printf("Converted string : %s",ch);
    return 0;
}
