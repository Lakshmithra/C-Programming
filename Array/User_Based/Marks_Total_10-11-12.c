//Program to calculate 10th ,11th, 12th total marks of a student

#include <stdio.h>
int main()
{
    int marks_10[5],marks_11[6],marks_12[6];
    int total_10=0,total_11=0,total_12=0;
    
    printf("Calculating 10th total marks:\n\n");
    for(int i=0;i<5;i++)
    {
        printf("Enter mark in subject %d:",i+1);
        scanf("%d",&marks_10[i]);
        total_10+=marks_10[i];
    }
    printf("\nTotal marks in 10th standard:%d\n",total_10);
    
    printf("\nCalculating 11th total marks:\n\n");
    for(int i=0;i<6;i++)
    {
        printf("Enter mark in subject %d:",i+1);
        scanf("%d",&marks_11[i]);
        total_11+=marks_11[i];
    }
    printf("\nTotal marks in 11th standard:%d\n",total_11);
    
    printf("\nCalculating 12th total marks:\n\n");
    for(int i=0;i<6;i++)
    {
        printf("Enter mark in subject %d:",i+1);
        scanf("%d",&marks_12[i]);
        total_12+=marks_12[i];
    }
    printf("\nTotal marks in 12th standard:%d\n",total_12);
    return 0;
}
