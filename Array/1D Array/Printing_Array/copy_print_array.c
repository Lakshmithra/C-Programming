// Copying elements from one array to another array

#include<stdio.h>
int main()
{
   int array_1[100],array_2[100];
   int n,i,j;
   while(1)
    {
       printf("Enter number of elements:");
       scanf("%d",&n);
   
       if(n>100 || n<=0){
           printf("Invalid Input ! Enter number of elements between 1 and 100\n\n");
           continue;
       }

       for(i=0;i<n;i++)
        {
           printf("Enter element %d:",i+1);
           scanf("%d",&array_1[i]);
           array_2[i] = array_1[i];          //Copying elements by assigning to the left operand
       }

         printf("\nCopied Array elements\n");
         for(j=0;j<n;j++){
            printf("%d\t",array_2[j]);
          }
       break;
   }
   return 0;
}
