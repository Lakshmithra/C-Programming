/* Addition of two matrices
   condition :- Matrix can be rectangular or square but should be of same dimensions
*/

#include<stdio.h>
int main(){
    
    int r1, c1, r2, c2 ;
   
    printf("Enter rows and columns for matrix A (r1 c1): ");
    scanf("%d %d", &r1, &c1);
    
    printf("Enter rows and columns for matrix B (r2 c2): ");
    scanf("%d %d", &r2, &c2);
    
    if(r1==r2 && c1==c2){
        
         int num1[r1][c1],num2[r2][c2],sum[r1][c1];
    
        printf("Enter the elements of matrix A:\n");
        for(int i = 0;i < r1;i++){
            for(int j = 0;j < c1;j++){
                scanf("%d",&num1[i][j]);
            }
        }
        printf("\n");
        
        printf("Enter the elements of matrix B:\n");
        for(int i = 0;i < r2;i++){
            for(int j = 0;j < c2;j++){
                scanf("%d",&num2[i][j]);
                sum[i][j]=num1[i][j] + num2[i][j];
            }
        }
        printf("\n");
     
        printf("Addition of two matrices\n");
         for(int i = 0;i < r1; i++){
            for(int j = 0;j < c1;j++){
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("INVALID ! Can't proceed matrix addition.\nEnter equal number of rows and columns\n\n");
    }
    return 0;
}
