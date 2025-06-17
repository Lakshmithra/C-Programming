// Calculating sum of first 10 natural numbers

#include<stdio.h>
int main()
{
    int sum=0;
    for(int n=1;n<=10;n++){
       sum+=n;
       if(n==10){
           printf(" The sum of first 10 natural numbers is %d",sum);
       }
    }
    return 0;
}
