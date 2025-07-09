// Program to reverse a string without using strrev()

#include <stdio.h>
#include <string.h>
int main() {
  
    char name[20] ;
    printf("Name : ");
    scanf("%[^\n]",name);
    
    int length = strlen(name);
    printf("Length of name : %d\n",length);
    
   char temp ;
   for(int i = 0 ; i < length/2 ; i++ ) {
       temp = name[i];
       name[i] = name[length-i-1];
       name[length-i-1] = temp;
   }
   printf("Reversed Name : %s\n",name);

   return 0;
      
}
