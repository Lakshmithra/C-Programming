// Printing all even numbers from 1 to 20

#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<=20;n++){
        if(n%2==0){
            printf("%d\n",n);
        }
    }
    return 0;
}
