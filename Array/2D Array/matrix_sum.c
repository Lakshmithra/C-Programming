// Calculating sum of all elements of a matrix

#include <stdio.h>
int main() {

    // Data_type variable_name [row-size][column-size]
    
   int num[2][2],sum = 0;                   
   printf("Calculating sum of all elements of a matrix\n");

    // First loop indicates rows 

   for(int i = 0;i < 2;i++){            
          printf("\nEnter the elements of row %d:\n",i+1);
          
        // Second loop indicates columns

       for(int j = 0;j < 2;j++){
           printf("Enter element %d:",j+1);
           scanf("%d",&num[i][j]);
           sum += num[i][j];
       }
   }
   printf("\nSum of all elements of the matrix :%d",sum);
   return 0;
}
