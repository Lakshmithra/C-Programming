// printing square of stars

#include <stdio.h>
int main(){
   int i,j,rows,columns;

   printf("Enter number of rows:");
   scanf("%d",&rows);

   printf("Enter number of columns:");
   scanf("%d",&columns);

    for(i=1;i<=columns;i++){
      for(j=1;j<=rows;j++){
      printf("%c",'*');
    }
    printf("\n");
   }
}
