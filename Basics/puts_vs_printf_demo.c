/*
    Program to demonstrate the difference between printf() and puts() for strings:
    - printf(): allows formatted output (precision, width, alignment, etc.), no automatic newline
    - puts(): prints the full string with an automatic newline, works only with strings
*/

#include<stdio.h>
int main(){
    
  char name[] = "Moonlight";
    
  puts(name);                   // Prints the entire string followed by a newline automatically

  printf("%s\n", name);         // Prints the entire string using printf, manually adding a newline
  
  printf("%.4s\n", name);       // Prints only the first 4 characters of the string, then a newline
  
  printf("%9.4s\n", name);      // Prints first 4 characters, right-aligned in a field of width 9

  printf("%-9.4s\n", name);    // Prints first 4 characters of, left-aligned in a 9-character field

  return 0;
    
}
