// This program demonstrates function call and definition using actual and formal parameters.

#include <stdio.h>

// Called Function
// It has formal parameters: int x and int y

void sum (int x , int y){     
    int s =  x +  y;
    printf("The sum of %d and %d : %d",x,y,s);
}

int main(){
    
    int a , b;
    printf("Enter two numbers (a  b) : ");
    scanf("%d %d",&a,&b);
    
    // Called Function
    // It has formal parameters: int x and int y

    sum (a , b);
    
    return 0;
}
/* 
    SYNTAX :-
    
    return_type function_name (){
        # code to be executed
    }
    
    parameters inside called function - formal parameters
    parameters inside calling function - actual parameters
    
*/
