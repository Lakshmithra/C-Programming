// This program demonstrates basic concepts of macros and preprocessor directives in C.

#include <stdio.h>
#include "demo.h"

#define PI 3.14
#define SQUARE(x)  ((x) * (x))

int main(){
    
    printf("Value : %.2f \n",PI);
    printf("Square : %d \n",SQUARE(2));
    
    #ifdef PI 
        printf("Macro if defined\n");
    #endif
    
    #ifndef SUM
        printf("Macro is not defined\n");
    #endif
    
    return 0;
}

/*
    C Preprocessor and Macros — Important Concepts

    1. Preprocessor:
       - Runs before the compilation phase.
       - Handles directives starting with '#' (e.g., #include, #define).
       - Used for file inclusion, macros, and conditional code.

    2. #define — Macro Definitions:
       - Defines constants or text replacements.
       - Example: #define PI 3.14

    3. Function-like Macros:
       - Works like a function, but uses text replacement.
       - Example: #define SQUARE(x) ((x)*(x))
       - Always use parentheses around arguments and the full expression.

    4. Conditional Compilation:
       - Used to include or exclude code based on conditions.
       - Example:
           #ifdef DEBUG
               // Debug code
           #endif

           #ifndef FEATURE
               // Run if FEATURE is not defined
           #endif

    5. #undef:
       - Cancels or removes a macro definition.
       - Example: #undef PI

    6. #include:
       - Includes other files in your code.
       - Example:
           #include <stdio.h>    // For standard headers
           #include "myfile.h"   // For user-defined headers

    7. #if, #elif, #else, #endif:
       - Controls code blocks based on conditions or macro values.
       - Example:
           #if VALUE > 10
               // Do something
           #elif VALUE == 10
               // Do something else
           #else
               // Default case
           #endif

    Summary of Common Preprocessor Directives:

      #define      → Define constants or macros
      #undef       → Undefine/remove macros
      #include     → Include header files
      #ifdef       → If macro is defined
      #ifndef      → If macro is not defined
      #if / #elif  → Conditional checks
      #else        → Fallback if above conditions fail
      #endif       → End the conditional block
*/

