// Printing grade

#include <stdio.h>
#include<ctype.h>
int main() {
    char letter;
    for(int i=1;i>0;i++)
{
    printf("Enter a letter between A,B,C,D,F:");
    scanf(" %c", &letter);
    letter=toupper(letter);
    if(letter=='Q'||letter=='q')
        break;

    switch(letter){
        case 'A':
            printf("Excellent!\n");
            break;

        case 'B':
            printf("Good Job!\n");
            break;

        case 'C':
            printf("Well done!\n");
            break;

        case 'D':
            printf("You passed!\n");
            break;

        case 'F':
            printf("Better try again!\n");
            break;

        default:
            printf("Invalid grade!\n");

       continue;
   }
}
    return 0;
}
