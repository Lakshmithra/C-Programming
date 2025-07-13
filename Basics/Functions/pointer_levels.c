// Program to demonstrate basics of pointers in C

#include <stdio.h>

int main(){
    
    int a = 26;   // Regular integer variable

    int *b = &a;  // Single pointer: stores address of 'a'
    
    int **c = &b;  // Double pointer: stores address of pointer 'b'
    
    int ***d = &c; // Triple pointer: stores address of pointer to pointer 'c'
    
    // Printing the value of 'a' using increasing levels of indirection
    
    printf("a = %d\n",a);       // Direct value
    printf("b = %d\n",*b);      // Dereferencing once
    printf("c = %d\n",**c);     // Dereferencing twice
    printf("d = %d\n",***d);    // Dereferencing three times

    return 0;
    
}
    +-----+       +-----+       +-----+       +-----+
    |  a  | <-----|  b  | <-----|  c  | <-----|  d  |
    +-----+       +-----+       +-----+       +-----+
     26          &a            &b            &c

    *b     = a
   **c     = *b = a
  ***d     = **c = *b = a
