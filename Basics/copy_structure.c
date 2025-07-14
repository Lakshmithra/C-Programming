// This program demonstrates copying a structure and modifying the original without affecting the copy.

#include <stdio.h>

struct Student {
    
    char grade ;
    int rollno ;
};

int main(){
    
    struct Student s1 = {'A',6};
    printf("Printing Student 1 :\n\nGrade   : %c \nRoll no : %d",s1.grade,s1.rollno);
     
    struct Student s2 ;
    
   s2 = s1;
   
    printf("\n\nCopied Student 2 :\n\nGrade   : %c \nRoll no : %d",s2.grade,s2.rollno);
    
    s1.grade = 'C';
    s1.rollno = 8;
    printf("\n\nModified Student 1 :\n\nGrade   : %c \nRoll no : %d",s1.grade,s1.rollno);
    
    return 0;
}
