/*
  What are Storage Classes in C?

  Storage classes define 4 main properties of a variable:
  -------------------------------------------------------
  1. Scope             - Where the variable can be accessed (e.g., inside a function, across files)
  2. Lifetime          - How long the variable stays in memory (e.g., temporary or throughout the program)
  3. Default Value     - What value it gets if not initialized (e.g., 0 or garbage)
  4. Storage Location  - Where it is stored (stack, CPU register, data segment, etc.)

  The 4 Storage Classes in C:
  ---------------------------
  1. auto     - Default for local variables. Stored in stack. Lifetime is limited to the function.
  2. register - Suggests storing variable in CPU register for faster access. Address (&) not allowed.
  3. static   - Keeps its value between function calls. Stored in data segment. Lifetime = full program.
  4. extern   - Refers to a global variable defined elsewhere. Used for cross-file variable access.

  Storage classes help control memory usage, performance, and visibility of variables.
*/

#include <stdio.h>

int v = 26;

void display(){
    
    static int count = 0;
    count++;
    printf("STATIC : %d\n",count);
}

int main(){

    auto int x = 10;
    printf("AUTO : %d\n",x);
    
    register int z = 30;
    printf("REGISTER : %d\n",z);
    
    extern  int v ;
    printf("EXTERN : %d\n",v);
    
    display();
    display();
    display();
    
    return 0;
}
