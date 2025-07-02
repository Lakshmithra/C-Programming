/*  Program to find transpose of a matrix
    transpose means rows become columns and columns become rows
    we just swap the positions of elements like num[i][j] becomes num[j][i]
*/

#include<stdio.h>
int main(){
    
    int rows,cols;
    printf("Enter number of rows of the matrix    :");
    scanf("%d",&rows);
    printf("Enter number of columns of the matrix :");
    scanf("%d",&cols);
    
    int num[rows][cols];
    printf("Enter the elements of matrix:\n");
    
    for(int i =0 ;i < rows; i++){
        for(int j = 0; j < cols ; j++){
            scanf("%d",&num[i][j]);
        }
    }
    printf("\nMatrix (%d x %d)\n",rows,cols);
    for(int i =0 ;i < rows; i++){
        for(int j = 0; j < cols ; j++){
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix (%d x %d)\n",cols,rows);
    for(int i =0 ;i < cols; i++){
        for(int j = 0; j < rows ; j++){
            printf("%d\t",num[j][i]);
        }
        printf("\n");
    }
    return 0;
}
