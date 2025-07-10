// Program to compare two strings lexicographically (like strcmp) without using built-in functions

#include <stdio.h>
#include<string.h>

int main() {

   int ans , length ;
   char str1[15],str2[15];

   printf("Enter string 1 : ");
   // scans everything until newline
   scanf("%[^\n]",str1);

   // consumes the leftover newline character from buffer
   getchar();                       

   printf("Enter string 2 : ");
   scanf("%[^\n]",str2);

   getchar();
   
   // Find the length of the shorter string (to avoid accessing out of bounds)
  
   length = (strlen(str1) < strlen(str2)) ? strlen(str1) : strlen(str2);

   // Loop to compare characters one by one (up to and including '\0' if needed)
  
   for(int i = 0 ; i <= length ; i++){

       // If characters at same index are equal
     
       if(str1[i]==str2[i])
        {
               // If we reached the end (all characters matched)
          
               if(i==length)
                {
                  ans = 0;
                  printf("%d",ans);
                  break;
               }

            continue;
       }
       else
        {
            // First mismatch found; calculate and print ASCII difference
            
           ans = str1[i] - str2[i];
           printf("%d",ans);
           break;
        }
   }
    return 0;
}
/*
   - strlen(str) returns the number of characters in the string before '\0'.
     (It does NOT include the '\0' character itself)

   Why we use i <= length:

   - i < length checks only the letters (actual characters),
     so it may miss if one string has extra characters at the end.

   - i <= length also compares the '\0' character (end of string),
     so it can detect if one string is longer than the other.

   Example:
     "laksh" and "laksha" match for 5 letters.
     But "laksh" ends with '\0' and "laksha" has an extra 'a'.
     So using i <= length will catch this difference.
*/
