// This program demonstrates common math functions in C: sqrt, ceil, floor, and pow.

#include <stdio.h>
#include <math.h>

int main(){
    
   // To find the square root of a number, use the sqrt() function:

    int  a = 25;
    printf("Square root of %d : %.1f\n",a,sqrt(a));
    
   // The ceil() function rounds a number upwards, floor() rounds downwards.
  
   float b = 1.5;
   printf("Ceil of %f  : %.2f \n",b,ceil(b));
   printf("Floor of %f : %.2f \n",b,floor(b));
    
     // The pow() function raises a number to the power of another.
     
    int c = 2 , d = 5;
    printf("Power of %d to %d : %.1f\n",c ,d , pow(c,d));
    
    return 0;
}
/*
    Note:
    - Most C math functions (like sqrt, pow, sin) return float/double — not int.
    - Use %f to print their results.
    - In printf: %f works for both float and double.
    - In scanf: use %f for float, %lf for double.
    - Only a few functions (like abs, rand) return int.
*/
