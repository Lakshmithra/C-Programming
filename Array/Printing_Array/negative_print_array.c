// Counting and Printing negative elements in an array

#include<stdio.h>
int main()
{
    int count_negative=0;
    int num[100],n;

     while(1)
     {
         printf("Enter number of elements between 1 and 100:");
         scanf("%d",&n);

    if(n>100 || n<=0){
        printf("Invalid Input ! Enter a valid number between 1 and 100\n\n");
        continue;
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);

        if(num[i]<0){
            count_negative++;
        }
     }
       break;
    }
   printf("Negative elements in an array:%d",count_negative);
   return 0;
}
