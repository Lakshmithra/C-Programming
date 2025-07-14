// Program to store and display details of multiple students using array of structures.

#include <stdio.h>

struct Student {
    
    char grade ;
    int rollno ;
};

int main(){
    
    struct Student s[10];
    
   for(int i = 0 ; i < 10 ; i++){
       printf("Enter grade and rollno of student %d (g r) : ",i+1);
       scanf(" %c  %d",&s[i].grade , &s[i].rollno);
   }
      
  for(int i = 0 ; i < 10 ; i++){
    
        printf("\n\nStudent %d : \n Grade  : %c\n Rollno : %d\n",i+1,s[i].grade , s[i].rollno);
    
    }
    
    return 0;
}

/*
    USING ARRAY OF STRUCTURES IN C

    Why use an array of structures?
       - A structure helps group related data (e.g., grade and roll number) into one unit.
       - When we need to store details of many students, creating separate variables is not practical.
       - So we use an array of structures like: struct Student s[100];

     Purpose:
       - Easily handle large sets of records (like 100 students) using loops.
       - Useful for sorting, searching, or updating multiple records.

     Memory:
       - Each structure has space for grade and rollno.
       - When we create an array (e.g., s[10]), memory is allocated for all 10 students.
       - Each element in the array stores a complete set of student data.
*/
