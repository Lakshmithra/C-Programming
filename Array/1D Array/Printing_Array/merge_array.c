// Merging two arrays into third array

#include<stdio.h>
int main()
{
    int arr_1[100],arr_2[100],arr_3[100];
    int n,n1,n2,i,j,k;
    
     k = 0;                                               // Index for merged array arr_3
    printf("Enter number of elements in arr_1:");
    scanf("%d",&n1);
       for(i=0;i<n1;i++)
        {
           printf("Enter element %d:",i+1);
           scanf("%d",&arr_1[i]);
           arr_3[k] = arr_1[i];                      // Copy arr_1 elements directly into arr_3
            k++;
        }

   printf("\nEnter number of elements in arr_2:");
   scanf("%d",&n2);
      for(j=0;j<n2;j++)
        {
           printf("Enter element %d:",j+1);
           scanf("%d",&arr_2[j]);
           arr_3[k] = arr_2[j];                // Continue filling arr_3 with arr_2 elements
            k++;
        }
    
    printf("\nPrinting arr_1:\n");
    for(i=0;i<n1;i++){
        printf("%d\t",arr_1[i]);
    }    
    
    printf("\nPrinting arr_2:\n");
    for(j=0;j<n2;j++){
        printf("%d\t",arr_2[j]);
    } 
  
    n = n1+n2;                      // Total elements in merged array
    printf("\n\nMerged Array:\n");
    for(k=0;k<n;k++)
        {
           printf("%d\t",arr_3[k]);
        }
    return 0;
}



