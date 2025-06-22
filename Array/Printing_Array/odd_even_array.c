#include<stdio.h>
int main()
{
    int odd_count=0,even_count=0;
    int num[100],n;
     
     while(1)
     {
         printf("Enter number of elements between 1 and 100:");
         scanf("%d",&n);
    
    if(n>100 || n<=0){
        printf("Invalid Input ! Enter a valid number between 1 and 100\n\n");
        continue;
    }
    
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&num[i]);
        
        if(num[i]%2==1){
            odd_count++;
        }
        if(num[i]%2==0){
            even_count++;
        }
     }
       break; 
    }
    printf("Even elements in an array:%d\n",even_count);
    printf("Odd elements in an array:%d\n",odd_count); 
}
