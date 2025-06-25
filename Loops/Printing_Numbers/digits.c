// Program to find the number of digits in a number 

#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    
    if(num<=0)
       {
          printf("INVALID! Enter a positive number\n");     
       }
    else
     {
         while(num>0)
         {
            num=num/10;
            count++;
         }
         printf("Number of digits in this number:%d",count);
    }
}
