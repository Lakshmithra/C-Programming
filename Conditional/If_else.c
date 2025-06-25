//Program to find whether a number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num==0)
      {
        printf("Zero is Even");
      }
    else if(num%2==0)
       {
        printf("Even");
       }
    else
       {
        printf("Odd");
       }
}

/* 
  0 is an even number because it divides by 2 with no remainder.
  So, the output for 0 should be "Even".
*/

