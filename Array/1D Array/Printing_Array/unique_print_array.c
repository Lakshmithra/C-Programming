// Printing unique elements in an array without duplicates

#include <stdio.h>
int main()
{
    int num[100],n,i,j,duplicate;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nArray with duplicate elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }

    printf("\nArray without duplicate elements\n");

    for(i=0;i<n;i++)
    {
        duplicate=0;

       for(j=0;j<i;j++){
           if(num[j]==num[i]){
               duplicate++;
           }
       }
        if(duplicate==0){
            printf("%d\t",num[i]);
        }
    }
    return 0;
}
