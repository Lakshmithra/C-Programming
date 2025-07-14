// This program updates a structure member using a function and pointer. you can pass a struct pointer to a function and change its values

#include <stdio.h>

struct Student {
    
    char grade ;
    int rollno ;
};

void updategrade (struct Student *c){
    c -> grade = 'A';
}

int main(){
    
    struct Student s = {'B',2};
    
    struct Student *p = &s;
    
    printf("Grade   : %c\n",p -> grade);
    printf("Roll no : %d\n", p -> rollno);
    
   updategrade(p);
   
   printf("Grade   : %c\n",p -> grade);
   printf("Roll no : %d\n", p -> rollno);
    
   
    return 0;
}
