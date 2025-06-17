// Calculating sum of 'n' natural numbers inputted by user

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
       sum+=i;
       if(i==n){
           printf("The sum of first %d natural numbers is %d",n,sum);
       }
    }
    return 0;
}
