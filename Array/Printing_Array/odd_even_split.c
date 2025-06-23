// Separating odd and even elements of an array into two different arrays

#include <stdio.h>
int main()
{
    int num[100],num_odd[100],num_even[100];
    int n,i;
    printf("Enter number of elements :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
    }

   int odd_index=0;                         // odd_index and even_index show where to put the next odd or even number in the array 
   int even_index=0;

    for(i=0;i<n;i++)
    {
     if(num[i]%2==1)
       {
            num_odd[odd_index]=num[i];
            odd_index++;
       }
     if(num[i]%2==0)
       {
            num_even[even_index]=num[i];
            even_index++;
       }
    }

    printf("\nOdd Array :\n{");
    for(i=0;i<odd_index;i++){
        printf("%d",num_odd[i]);
        if(i!=odd_index-1)printf(", ");
    }
    printf("}");

    printf("\nEven Array:\n{");
    for(i=0;i<even_index;i++){
        printf("%d",num_even[i]);
        if(i!=even_index-1)printf(", ");
    }
    printf("}");

    return 0;
}



