// Calculating total marks in  6 subjects using array 

#include <stdio.h>
int main()
{
    int sub[6],sum=0;                         // array syntax: data_type array_name[size];
    for(int i=0;i<=5;i++){
         printf("Enter marks in subject %d:",i+1);
         scanf("%d",&sub[i]);
         sum+=sub[i];
    }
    printf("Total marks in 6 subjects:%d",sum);

    return 0;
}
