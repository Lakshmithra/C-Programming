//Program to find days of a week using switch case

#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day (1 to 7):");
    scanf("%d",&day);
    
    switch(day)
    {
         case 1:
            printf("\nSunday");
            break;
        
        case 2:
            printf("\nMonday");
            break;
        
        case 3:
            printf("\nTuesday");
            break;
        
         case 4:
            printf("\nWednesday");
            break;
        
         case 5:
            printf("\nThursday");
            break;
        
         case 6:
            printf("\nFriday");
            break;
        
         case 7:
            printf("\nSaturday");
            break;
        
        default:
            printf("INVALID ! Enter a valid day between 1 and 7");
    }   
    return 0;
}


