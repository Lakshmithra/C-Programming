/* Program demonstrating enum-based menu selection with switch case

    ENUMS IN C

    Enums (enumerations) assign names to integer constants, improving code clarity.  
    They start from 0 by default, but values can be customized.  
    Useful in menus, states, and mode selection for better readability.  
    Enums make switch-case logic more meaningful and maintainable.  
*/

#include <stdio.h>

enum level{
    BEGINNER = 1,
    INTERMEDIATE,
    ADVANCED
};

int main(){
    
    int level;
    printf("Choose your level\n");
    printf("1 - Beginner level\n");
    printf("2 - Intermediate level\n");
    printf("3 - Advanced level\n");
    printf("\nEnter a level (1/2/3) : ");
    scanf("%d",&level);
    
    switch(level){
        
        case BEGINNER :
        printf("You are on beginner level !\n");
        break;
        
        case INTERMEDIATE :
        printf("You are on intermediate level !\n");
        break;
        
        case ADVANCED :
        printf("You are on advanced level !\n");
        break;
        
        default:
        printf("INVALID ! Enter a valid level (1/2/3) ");
    }
    
    return 0;
}
