#include <stdio.h>
#include "myheader.h"

int main(){

    display();
    sum(8,18);
    printf("VALUE : %.2f\n" , PI);
    return 0;

}

/*
  Creating Your Own Header Files in C
  -----------------------------------

  Why Create Custom Header Files?
  - To organize and reuse your code easily
  - To separate function declarations, macros, and definitions
  - To make your programs modular and clean

  When to Use:
  - If you have common functions used in multiple files
  - If you want to define reusable macros or constants

  Steps to Create Your Own Header File:

  1. Create a header file (e.g., myheader.h)
     - Add function declarations
     - Add macros or constants
     - Use include guards to prevent multiple inclusion

  2. Create a source file (e.g., myheader.c)
     - Write the actual function definitions here

  3. In your main file (main.c)
     - Use #include "myheader.h" to access the functions/macros

  File Structure Example:
      custom_header_demo/
      ├── main.c
      ├── myheader.c
      └── myheader.h

  This keeps your code organized and easier to manage.
*/
