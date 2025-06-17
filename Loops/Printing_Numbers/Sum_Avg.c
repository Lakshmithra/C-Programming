// Reading 10 numbers from the user and printing their sum and average

#include <stdio.h>
int main()
{
     int  n[10],sum=0;   
     float avg=0;             
     for(int i=1;i<=10;i++)
     {
         printf("Enter number %d: ",i);
         scanf("%d",&n[i]);
         sum += n[i];
         avg = (float)sum/10;
    }
          printf("The sum of 10 numbers: %d\n",sum);
          printf("The average of 10 numbers: %f",avg);   
          return 0;
}
