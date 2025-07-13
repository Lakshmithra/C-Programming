// Program to demonstrate function wihtout argument and without return type

#include <stdio.h>

void sum(){
    
    int a , b ;
    
    printf("Enter first number : ");
    scanf("%d",&a);
    
    printf("Enter second number : ");
    scanf("%d",&b);
    
    printf("Sum : %d ", a + b);
}

int main(){
    
    sum();
    return 0;
}
