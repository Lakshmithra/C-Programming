// This program demonstrates passing an array to a function using pointers.

#include <stdio.h>

// num[] is a pointer to the first element of the array

void display(int num[] ,int size){
    printf("\nDisplaying elements of array \n");
    for(int i = 0 ; i < size ; i++){
        printf("%d\t",num[i]);
    }
}

int main(){
    
    int s ;
    printf("Enter the number of elements : ");
    scanf("%d",&s);
    
    int numbers[s];
    for(int i = 0 ; i < s ; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&numbers[i]);
    }
  
   display(numbers , s);
    
    return 0;
}
/*
    Why no square brackets [] in the function call?

    - Passing an array like display(numbers, s) sends the address of the first element.
    - In the function, int num[] is the same as int *num — a pointer to the array.
    - Arrays are stored continuously in memory, so num[i] works using pointer arithmetic.
*/
