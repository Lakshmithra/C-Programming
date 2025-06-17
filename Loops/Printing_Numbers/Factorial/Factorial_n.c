// Program  to calculate the factorial of a number
// Note: Works correctly only for n ≤ 20, as factorials beyond that overflow the data type

#include<stdio.h>
int main()
{
    int i,n;
    unsigned long long fact=1;
    printf("Enter a positive number between 1 to 20:");
    scanf("%d",&n);
    for(i = n;i >= 1;i--){
        fact*= i;
    }
    printf("The factorial of %d : %llu ",n,fact);
    // %llu (formar specifier) is used to print an unsigned long long integer (for large factorial result)

}
