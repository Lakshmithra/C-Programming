// Calculating 10th marks of 5 students using 2D array

#include <stdio.h>
int main() {

    // Data_type variable_name [row-size][column-size]   
   int marks_10[5][5];                   
   printf("Calculating 10th total marks\n");

    // First loop indicates rows (students)

   for(int i = 0;i < 5;i++){             
       printf("\nEnter mark for student %d:\n",i+1);

        // Second loop indicates columns (subjects)

       for(int j = 0;j < 5;j++){          
           printf("Enter mark in subject %d:",j+1);
           scanf("%d",&marks_10[i][j]);
       }
   }
   
   for(int i = 0;i < 5;i++){
      int  sum = 0;
       
       for(int j = 0;j < 5;j++){
           sum += marks_10[i][j];
       }
       printf("The total marks of student %d:%d\n",i+1,sum);
   }
    return 0;
}
