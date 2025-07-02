// Program to print sum of indivudual rows and columns

#include <stdio.h>
int main() {
    
    int num[3][3];
    printf("Enter the elements of the matrix\n");
    
    for(int i = 0 ;i < 3; i++){
        for(int j = 0;j < 3; j++){
            scanf("%d",&num[i][j]);
        }
    }
  
    printf("\n Matrix :\n");
    for(int i = 0 ;i < 3; i++){
        for(int j = 0;j < 3; j++){
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(int i = 0 ;i < 3; i++){
        int rowsum = 0;
        for(int j = 0;j < 3; j++){
            rowsum += num[i][j];
        }
        printf("Sum of row %d:%d\n",i+1,rowsum);
    }
    printf("\n");
    
    for(int j = 0 ;j < 3; j++){
        int colsum = 0;
        for(int i = 0;i < 3; i++){
            colsum += num[i][j];
        }
        printf("Sum of column %d:%d\n",j+1,colsum);
    }
    return 0;
}
 /* For finding column sum, we are fixing the column 'j' and adding all values from each row.
       We can also do this in another way by just changing the formula like this:
       colsum += num[j][i]; without changing the loop variables.
       
       Example:
    
       for(int i = 0 ;i < 3; i++){
           int colsum = 0;
           for(int j = 0; j < 3; j++){
               colsum += num[j][i];
           }
           printf("Sum of column %d: %d\n", i+1, colsum);
       }
 */
