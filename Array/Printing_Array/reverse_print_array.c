// Reading and printing elements of an array in reverse order

#include <stdio.h>
int main()
{
   int i,j,n,num[100];
   while(1)
    {
      printf("Enter number of elements:");
      scanf("%d",&n);
      if(n>100||n<=0){
           printf("Invalid input ! Enter number of elements between 1 and 100\n\n");
           continue;
    }
    else{
        for(i=0;i<n;i++){                         //loop for storing elements in an array
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
   }
        printf("\nElements of an array:\n");   //loop for printing elements of array in reverse order
        for(j=n-1;j>=0;j--){
        printf("%d\t",num[j]);
         }
        }
        break;                              //Exiting after valid input
   }
}
