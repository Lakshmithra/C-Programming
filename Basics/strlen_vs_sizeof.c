// Program to demonstrate the difference between sizeof and strlen for strings.
// sizeof gives total allocated size; strlen gives actual length up to '\0'.

#include<stdio.h>
#include<string.h>
int main(){
    
    char name1[] = "Moonlight";      // size = 9 + 1 ('\0') = 10
    char name2[20] = "Moonlight";    // total size = 20, but only 10 used
    
     // sizeof → gives total size of array in bytes (includes unused space)

    printf("Size of name1 : %zu\n",sizeof(name1));    
    printf("Size of name2 : %zu\n\n",sizeof(name2));
    
     // strlen → counts characters before '\0' (actual length of string)

    printf("Length of name1 : %zu\n",strlen(name1));
    printf("Length of name2 : %zu\n",strlen(name2)); 
    
    return 0;
}
