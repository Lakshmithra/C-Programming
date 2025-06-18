// Printing first 10 numbers of fibonacci sequence

#include<stdio.h>
int main()
{
    int fib = 0,i = -1,j = 1;
    printf("The first 10 numbers of fibonacci sequence:\n");
    for(int k=1;k<=10;k++){
        fib =i+j;
        printf("%d\n",fib);
        i = j,j = fib;
    }
    return 0;
}
