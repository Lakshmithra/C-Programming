//Program to print cubes from 1 to n
// pow() function - double (accurate for all types of powers(integers,decimals,negative powers))

#include <stdio.h>
#include<math.h>    // For using pow() function
int main() 
{
    int i,n,exponent=3;
    printf("Enter a number n :");
    scanf("%d",&n);
    printf("The cube of numbers upto %d :\n",n);
    for(i=1;i<=n;i++){   
        int base = i;
        double result = pow (base,exponent);                 // syntax:double pow(double base,double exponent);
        printf("%d ^ %d = %.0f\n",base,exponent,result);    //%.0f - Prints result without decimal places
        
    }
    return 0;
}
