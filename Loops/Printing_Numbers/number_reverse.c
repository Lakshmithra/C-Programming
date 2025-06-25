//Program to print reverse of a number

#include<stdio.h>
int main()
{
    int num,rev=0,r;
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(num>0)                         //Termination condition
    {
        r = num % 10;                 // Get the last digit of the number using modulo
        rev =  rev * 10 + r;         // Shift current digits in 'rev' left and add the new digit
        num = num/10;               // Remove the last digit from 'num' by dividing by 10

    }
    printf("The reverse of the number : %d\n",rev);
    return 0;
}

/* For input 1234, steps would be:

r = 4 → rev = 0 * 10 + 4 = 4
r = 3 → rev = 4 * 10 + 3 = 43
r = 2 → rev = 43 * 10 + 2 = 432
r = 1 → rev = 432 * 10 + 1 = 4321  

*/
