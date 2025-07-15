// Program to demonstrate dynamic memory allocation using malloc, calloc, realloc, and free in C

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    int *p;
    p = (int *) malloc (n * sizeof(int));

    if(p==NULL){
        printf("Memory allocation with malloc failed !");
        return 1;
    }

    printf("\nPrinting uninitialized malloc : \n");

     for(int i = 0 ; i < n; i++){
        printf("%d\n",p[i]);            // contains garbage values
    }

    int *q;
    q = (int *)calloc (n , sizeof(int));

    if(q==NULL){
        printf("Memory allocation with calloc failed !");
        free(p);
        return 1;
    }

    printf("\nPrinting uninitialized calloc :\n");

     for(int i = 0 ; i < n; i++){
            printf("%d\n",q[i]);         // all zeros
     }

     int *r;
     r = (int *)realloc (q , 10 * sizeof(int));

     if(r==NULL){
        printf("Memory allocation with realloc failed !");
        free(p);
        free(q);
        return 1;
     }

     printf("\nPrinting uninitialized realloc (calloc expanded to 10 elements):\n");
     for(int i = 0 ; i < 10; i++){
            printf("%d\n",r[i]);    // first n values preserved, rest may be garbage
     }

     free(p);
     free(r);

     return 0;
}

/*
    Dynamic Memory Allocation (DMA) in C

    In C, dynamic memory allocation allows you to allocate memory at runtime,
    from the heap, instead of the stack. This is useful when you don't know 
    the size of data structures in advance or need to resize them during execution.

    Common functions used for DMA:
    --------------------------------
    1. malloc()  - Allocates uninitialized memory.
    2. calloc()  - Allocates memory and initializes all bytes to zero.
    3. realloc() - Changes the size of previously allocated memory.
    4. free()    - Frees the allocated memory to avoid memory leaks.

    Unlike stack memory, heap memory is manually managed by the programmer.
    If not freed properly, it can lead to memory leaks.

    This program demonstrates all three allocation functions and the importance
    of freeing memory after use.
*/
