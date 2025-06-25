//Program to find whether a number is even or odd using ternary operator

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    (num%2==0)
    ? printf("EVEN")
    : printf("ODD");
    
    return 0;
}


