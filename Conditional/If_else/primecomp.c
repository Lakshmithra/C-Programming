// Program to find whether a number is prime or composite

#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for(i=2;i<num;i++)
    {
         if(num%i==0)
           {
             count++;
           }
    }
    
    if(num<=0 || num==1)
         {
             printf("Neither Prime nor Composite !");
         }
    else if (count==0)
         {
             printf("The number is PRIME !");
         }
    else 
         {
             printf("The number is COMPOSITE !");
         }
}
