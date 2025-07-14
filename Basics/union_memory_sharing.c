// Program demonstrating how a union stores data in shared memory

#include <stdio.h>

union Student{
    
    int rollno;
    char grade;
};

int main(){
    
    union Student s1;
    
    // Assigning to rollno
  
    s1.rollno = 6;
    printf("%d\n",s1.rollno);
    
     // Now assigning to grade, which will overwrite rollno due to shared memory
  
    s1.grade = 'A';
    printf("%c\n",s1.grade);
    
    // Reading rollno again gives unexpected result (garbage or reinterpreted value)
  
    printf("%d\n",s1.rollno);
  
     // Printing size of union
  
    printf("%zu\n",sizeof(union Student));
    
     return 0;
}

/*
    UNION IN C

     A union is a special data type similar to a structure, 
       but with one key difference: all members share the same memory location.

     This means:
        - Only one member can hold a value at a time.
        - The size of the union is equal to the size of its largest member.
        - Assigning a new value to one member overwrites the previous value.

     Use unions when:
        - You want to store one of several data types, but never all at once.
        - You're optimizing memory usage in systems like embedded programming.

     Example:
        union Student {
            int rollno;    // 4 bytes
            char grade;    // 1 byte
        };
        - Total size = 4 bytes (not 5), since both share the same memory.
*/    
   
