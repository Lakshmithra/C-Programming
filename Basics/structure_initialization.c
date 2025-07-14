/*   STRUCTURES IN C (Simple)

A structure is a user-defined data type in C. It allows you to group different types of variables into a single unit.

Example: A student can have a name, age, and grade.
All these can be grouped using a structure.

  Types of Structure Initialization - Compile time

1. Type 1 – Assign values after declaring the structure:
       struct Student s;
       s.grade = 'A';
       strcpy(s.name, "Arun");
       s.age = 12;

2. Type 2 – Give all values at the time of declaration:
       struct Student s = {'B', "Vijay", 14};

3. Type 3 – Give some values at declaration, rest later:
       struct Student s = {'C'};
       strcpy(s.name, "Kumar");
       s.age = 10;
*/


#include<stdio.h>
#include<string.h>

struct Student {
    
    char grade;
    char name[20];
    int age;
    
} s1 = {'A',"Murugan",6};  // Type 2 initialization at declaration

int main(){
    
     // Type 3: Partial compile-time init, rest assigned later
  
    struct Student s2 = {.name = "Velavan"};   // Supported by C99 or later
    s2.grade = 'B';
    s2.age = 7;

   // Type 1: Declare and then assign values
  
    struct Student s3;  
    s3.grade = 'C';
  
  //  NOTE :- s3.name  = "Kadhirvelan";   error: assignment to expression with array type. Cannot do s3.name = "..." directly

    strcpy(s3.name , "Kadhirvelan");
    s3.age = 8;
    
   printf("Student 1 :\n\n Name  : %s \n Age   : %d \n Grade : %c\n",s1.name , s1.age , s1.grade);
   printf("\nStudent 2 :\n\n Name  : %s \n Age   : %d \n Grade : %c\n",s2.name , s2.age , s2.grade);
   printf("\nStudent 3 :\n\n Name  : %s \n Age   : %d \n Grade : %c\n",s3.name , s3.age , s3.grade);
   
   return 0;
}
    
