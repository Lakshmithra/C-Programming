// Program to demonstrate how to handle whitespace and newline while reading characters into an array

#include<stdio.h>
int main(){
    
    char name1[10];
    for(int i = 0; i < 10 ; i++){
        printf("Enter character %d : ",i+1);
        scanf("%c",&name1[i]);         // Note: space before %c ignores any whitespace, including newline and space
    }
    
    for(int i = 0; i < 10 ; i++){
        printf("%c\n",name1[i]);
    }
    
    return 0;
}
