// Program to keep accepting numbers until 0 is entered, and add only the positive numbers
//  POSSUM = POSitive + SUM

#include<stdio.h>
int main()
{
    int num,n,sum=0;
    for(n=1;n>0;n++)
{
        printf("Enter number %d:",n);
        scanf("%d",&num);
        
        if(num<0)
        {
            printf("Invalid - Negative number\n");
            continue;
        }
        sum+=num;
        if(num==0){
            printf("Sum of all positive numbers entered : %d",sum);
            break;
        }
 }
    
    return 0;
    
}
