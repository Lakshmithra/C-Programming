// Program to demonstrate recursive function 

#include <stdio.h>

int fact (int n);    // Function Declaration

int main(){
    
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    
    int f = fact(num);
    printf("Factorial of %d : %d",num,f);
    return 0;
}

int fact (int n){   // Function Definition
    
    if(n==0){
        return 1;
    }
    else {
        return n * fact (n-1);
    }
}
