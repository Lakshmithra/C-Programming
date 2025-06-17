// Checking age eligibility for voting using ternary operator

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    
//ternary operator syntax: condition ? true_block : false_block;

    (age>=18)
    ? printf("You are eligible for voting")
    : printf("You are not eligible for voting");  
}
