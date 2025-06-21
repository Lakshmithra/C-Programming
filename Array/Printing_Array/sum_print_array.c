//Reading elements from the user and Printing sum of the array

#include<stdio.h>
int main()
{
    int num[10],sum=0,n,i;
    while(1)
        {
        printf("Enter number of elements:");
        scanf("%d",&n);
        if(n>10 || n<=0){
            printf("Invalid Input ! Enter elements between 1 and 10\n");
            continue;
        }
        else{
        for(i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];
      }
        printf("Sum of %d elements in an array : %d",n,sum);
           }
        break;
       }
   return 0;
}
