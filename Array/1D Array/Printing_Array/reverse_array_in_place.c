// Reversing element of an array (not printing in reverse , swapping the original array )

#include <stdio.h>
int main()
{
    int num[10],temp,n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)                                                //Loop for gettinng input from the user
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
    }

    printf("\nOriginal array:\n");
    for(i=0;i<n;i++)                                             //Loop for printing original array
    {
     printf("%d\t",num[i]);
    }

    for(i=0;i<n/2;i++)                                       //Loop for swapping 2 elements of an array
    {
       temp=num[i];
       num[i]=num[n-(i+1)];
       num[n-(i+1)]=temp;
    }
  
    printf("\nReversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    return 0;
}

/* Using temporary variable (user defined) for storing the value before assigning
  Example:
  int temp;
  temp = num[0];         // Step 1: Save num[0]
  num[0] = num[4];      // Step 2: Put num[4] into num[0]
  num[4] = temp;       // Step 3: Restore original num[0] into num[4]
*/
