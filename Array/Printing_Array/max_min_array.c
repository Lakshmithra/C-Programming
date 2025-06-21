// Printing maximum and minimum elements of an array

#include<stdio.h>
#include<limits.h>     //For using INT_MAX and INT_MIN
int main()
{
    int num[10],n,i,min,max;
    while(1)
    {
        printf("Enter number of elements:");
        scanf("%d",&n);
        if(n > 10|| n <= 0)
        {
            printf("Invalid input ! Enter elements between 1 and 10\n");
            continue;
        }
      
         min = INT_MAX;        // Any real input will be less than INT_MAX, so min gets updated
         max = INT_MIN;       //Any real input will be more than INT_MIN, so max gets updated

        for(i=0;i<n;i++)
        {
            printf("Enter element %d:",i+1);
            scanf("%d",&num[i]);

            if (num[i] > max)
                max = num[i];
            if (num[i] < min)
                min = num[i];
        }

      printf("Maximum element in an array : %d\n",max);
      printf("Minimum element in an array : %d\n",min);
      break;
    }
}

 /* using ternary operator (not recommended)
    use this after reading first element
    max=min=num[0];                            
    max = (num[i] > max) ? num[i] : max;
    min = (num[i] < min) ? num[i]:  min;
*/

