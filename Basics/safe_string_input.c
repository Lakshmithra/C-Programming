/* 
   Program to demonstrate string input using scanf (with/without limit), %[^\n], and fgets in C:

    - %s       → Word input (unsafe if no limit)
    - %9s      → Safer word input (limits characters)
    - %[^\n]   → Full-line input with spaces (unsafe, no size limit)
    - fgets()  → Safest option for full-line input
*/


#include<stdio.h>
int main(){
    
   // %s: Reads a word (stops at space/newline). No limit = buffer overflow risk
  
    char name1[15];
    printf("Enter your name : ");
    scanf("%s",name1);   
    printf("%s\n",name1);

     // %9s: Reads a word, limits to 9 characters + '\0'. Safer with size limit, but still stops at space or newline
  
    char name2[10];
    printf("Enter your name : ");
    scanf("%9s",name2);    
    printf("%s\n",name2);
  
    getchar();   // Clears leftover newline character from input buffer
    
  // %[^\n]: Reads input with spaces until newline. No size limit = unsafe
  
    char name3[20];
    printf("Enter your name : ");
    scanf("%[^\n]",name3);      
    printf("%s\n",name3);
    
    getchar();   // Clears leftover newline from previous scanf to ensure fgets works correctly
    
      /*  fgets() advantages:
        - Reads full line with spaces
        - Prevents buffer overflow
        - Safer than scanf() for strings
    */
     char name4[20];
     printf("Enter your name : ");
     fgets(name4 , sizeof(name4) , stdin);
     printf("%s",name4);
     
     return 0;
}
