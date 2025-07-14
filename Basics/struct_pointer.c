// This program accesses and modifies structure members using a pointer. Use * to declare a struct pointer, and -> to access or modify its members.

#include <stdio.h>

struct Student {
    
    char grade ;
    int rollno ;
};

int main(){
    
    struct Student s = {'A',2};
    
    struct Student *p = &s;
    
    printf("Grade   : %c\n",p -> grade);
    printf("Roll no : %d\n", p -> rollno);
    
   p -> grade = 'B';
   p -> rollno = 8;
   
   printf("Grade   : %c\n",p -> grade);
   printf("Roll no : %d\n", p -> rollno);
    
    return 0;
}
