/* Demonstrates three types of compile-time initialization of 2D arrays
     Method 1: Flat initialization
     Method 2: Grouped initialization
     Method 3: Readable row-wise initialization
*/


#include <stdio.h>

int main() {
    int a[2][3]={0,0,0,1,1,1};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\n",a[i][j]);
        }
    }
    printf("\n");
    
    int b[2][3]={{0,0,0},{1,1,1}};    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\n",b[i][j]);
        }
    }
    
    printf("\n");
  
    int c[2][3]={           
                {0,0,0},
                {1,1,1}
                };
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\n",c[i][j]);
        }
    }
    return 0;
}
