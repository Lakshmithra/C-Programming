/* Program to print matrix multiplication
   condition :- Matrix multiplication is possible when:
                columns of A == rows of B
*/

#include<stdio.h>
int main(){
    
    int r1,r2,c1,c2;
    printf("Enter number of rows and columns for matrix A (r c):");
    scanf("%d  %d",&r1,&c1);
    printf("Enter number of rows and columns for matrix B (r c):");
    scanf("%d  %d",&r2,&c2);
    
    if(c1==r2) {
        
        int n1[r1][c1],n2[r2][c2],n[r1][c2];
        
        printf("Enter the elements of Matrix A:\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                scanf("%d",&n1[i][j]);
            }
        }
      
        printf("Enter the elements of Matrix B:\n");
        for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                scanf("%d",&n2[i][j]);
            }
        }
      
        printf("\nMATRIX A:\n");
         for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                printf("%d\t",n1[i][j]);
            }
            printf("\n");
        }
      
        printf("\nMATRIX B:\n");
         for(int i = 0; i < r2; i++){
            for(int j = 0; j < c2; j++){
                printf("%d\t",n2[i][j]);
            }
            printf("\n");
        }
       
       for(int i = 0;i<r1;i++){
         for(int j=0;j<c2;j++){
             n[i][j]=0;
            for(int k =0;k<c1;k++){
               n[i][j]+=n1[i][k]*n2[k][j] ;
            }
        }
    } 
// The number (c1 or r2) tells about How many times to multiply and add values when calculating each element in the result matrix.

    printf("\nMultiplication of matrices A and B\n");
       for(int i = 0;i<r1;i++){
        for(int j=0;j<c2;j++){ 
            printf("%d\t",n[i][j]);
        }
        printf("\n");
       }
    }
    
   else{
        printf("INVALID ! Can't proceed matrix multiplication.\nColumns of first row must be equal to rows of second matrix\n");
    }
       
   return 0;
  }
