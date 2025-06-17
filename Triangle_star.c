// Printing right angled triangle of stars

#include<stdio.h>

int main(){

   int r,i,j;
   printf("Enter number of rows:");
   scanf("%d",&r);

   for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
        printf("*");
    }
   printf("\n");
       
   }
}
