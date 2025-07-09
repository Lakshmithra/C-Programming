// Program to demonstrate string manipulation in C using built in functions

#include <stdio.h>
#include <string.h>

int main(){

    char name1 [10]= "Moon";   // Make sure there's enough space for concatenation
    char name2 [10]= "Light";
    char name3 [10];

   // strcpy(dest, src) → Copies source into desttination including the null terminator '\0'. Make sure destination has enough space to hold the source string and '\0'

    strcpy(name3 , name1);
    printf("Copied string : %s\n",name3);

    // strcat(dest, src) → Appends src to the end of dest (dest must have enough space)

    strcat(name1 , name2);
    printf("Concatenated string  : %s\n",name1);

    /*
    strcmp(str1, str2) → Compares two strings lexicographically

    - Returns 0  → if both strings are equal
    - Returns <0 → if str1 < str2
    - Returns >0 → if str1 > str2

    Notes:
    - Case-sensitive: 'A' ≠ 'a'
    - Comparison is based on ASCII values
    - Stops comparing at the first mismatch or at null terminator '\0'
*/


    char s1[] = "Apple";
    char s2[] = "Apple";
    printf("%d\n",strcmp(s1,s2));   //0

    char n1[] = "Mango";
    char n2[] = "Orange";
    printf("%d\n",strcmp(n1,n2));  //<0

    char m1[] = "Pomegranate";
    char m2[] = "Guava";
    printf("%d\n",strcmp(m1,m2));  //>0

    return 0;
}
