// Printing n numbers of fibonacci sequence

#include<stdio.h>
int main()
{
    int n,fib = 0,i = -1,j = 1;
    printf("Enter number of Fibonacci terms:");
    scanf("%d",&n);
    printf("The first %d numbers of fibonacci sequence:\n",n);
    for(int k=1;k<=n;k++){
        fib =i+j;
        printf("%d\n",fib);
        i = j , j = fib;
    }
    return 0;
}
