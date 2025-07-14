// Program demonstrating nested structures using Employee and Date details.

#include <stdio.h>

struct Date{
    
    int day;
    int month;
    int year;
    
};
struct Employee{
    
    char name[15];
    int id;
    int salary;
    struct Date join;
};


int main(){
    
    struct Employee e[3];
    
    for(int i = 0 ; i < 3 ; i++){
        
        printf("Enter details of employee %d : ",i+1);
        
        printf("\nEnter name : ");
        scanf(" %[^\n]",e[i].name);
        
        printf("Enter ID   : ");
        scanf("%d",&e[i].id);
        
        printf("Enter salary : ");
        scanf("%d",&e[i].salary);
        
        printf("Enter joining Date (dd-mm-yyyy) : ");
        scanf("%d %d %d",&e[i].join.day , &e[i].join.month , &e[i].join.year);
      
    }
    
    for(int i = 0 ; i < 3 ; i++){
        
        printf("\n\nEmployee %d :",i+1);
        printf("\nName : %s ",e[i].name);
        printf("\nId   : %d",e[i].id);
        printf("\nSalary : %d",e[i].salary);
        printf("\nJoining date : %d - %d - %d",e[i].join.day,e[i].join.month,e[i].join.year);
        
    }
    
    return 0;
    
}

/*
    NESTED STRUCTURES IN C

    A nested structure is a structure within another structure.
    It helps organize related sub-information more clearly (e.g., Date inside Employee).
    Improves code readability, maintainability, and modularity.
    Useful when one logical unit (like Employee) contains another (like Date of joining).
    Accessed using dot notation (e.g., e[i].join.day).
*/
