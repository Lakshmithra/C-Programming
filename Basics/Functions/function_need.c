// Program to demonstrate need of function

#include<stdio.h>

void sum (int x , int y ){
    printf("Sum : %d\n", x + y);
}
void diff(int x , int y ){
    printf("Difference : %d\n", x - y);
}
void mul (int x , int y ){
    printf("Multiply : %d\n", x * y);
}

int main(){
     
     int a , b;
     printf("Enter first number : ");
     scanf("%d",&a);
     
     printf("Enter second number : ");
     scanf("%d",&b);
     
     sum (a,b);
     diff (a,b);
     mul (a,b);
     
     return 0;
}
