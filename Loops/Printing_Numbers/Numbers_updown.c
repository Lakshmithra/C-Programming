// Printing numbers from 0-10 and 10-0 using two loops

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++){   //loop for printing 1 to 10
        printf("%d\t",i);
    }
        printf("\n");
    for(j=10;j>=1;j--){   //loop for printing 10 to 1
        printf("%d\t",j);
    }
    return 0;
}
