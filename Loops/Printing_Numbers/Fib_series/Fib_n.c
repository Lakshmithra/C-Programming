// Printing n numbers of fibonacci sequence

#include<stdio.h>
int main()
{
    int n,fib = 0,i = -1,j = 1;
    printf("Enter number of Fibonacci terms:");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid Negative Number\n");
    }
    for(int k=1;k<=n;k++){
        fib =i+j;
        printf("Fibonacci Term %d : %d\n",k,fib);
        i = j,j = fib;
    }
    return 0;
}
