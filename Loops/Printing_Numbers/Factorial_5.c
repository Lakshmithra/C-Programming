// Program to print factorial of 5

#include<stdio.h>
int main()
{
    int n,fact=1;
    for(n=5;n>=1;n--)  //for loop can also be written as: for(n=1;n<=5;n++)
{ 
    fact*=n;
}
    printf("Factorial of 5: %d",fact);
}
