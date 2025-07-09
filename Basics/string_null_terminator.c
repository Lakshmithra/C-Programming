/*
  In C, a string is a character array that ends with a null character '\0'.

    - If you write: char str[] = "Hello";
    → The compiler adds '\0' automatically.

    - If you write: char str[] = {'H','e','l','l','o'};
    → No '\0' is added, so it's not a proper string.

    - Without '\0', string functions like printf("%s", str) can give wrong or garbage output.

    → Always make sure to include '\0' if you're not using double quotes.
*/


#include <stdio.h>

int main() {

     // We include '\0' at the end to make it a valid C string

    char name1[] = {'H','e','l','l','o','\0'};

    int length1 = sizeof(name1) / sizeof(name1[0]);
    printf("Length of name1 : %d\n",length1);

    for(int i = 0 ; i < length1; i++){

      // Safe because we manually added '\0'
       printf("%c\n",name1[i]);
    }
    printf("%s\n",name1);

     // Same as {'H','e','l','l','o','\0'}
    char name2[] = "Hello";   
 
    int length2 = sizeof(name2) / sizeof(name2[0]);
     printf("Length of name2 : %d\n",length2);

     for(int i = 0 ; i < length2; i++){

    // Safe because '\0' is automatically included
       printf("%c\n",name2[i]);
    }
    printf("%s\n",name2);

    return 0;
}

/*
In C, '\0' is used to show the end of a string.

- %c prints one character. If it's '\0', nothing will be shown.
- %s prints all characters until it finds '\0'.
- If '\0' is missing, %s may show garbage or crash.

→ Always add '\0' if you want your character array to act like a string.


    Part      Behavior
    -----     -------------------------------------
    name1     Manual null terminator ('\0')
    name2     Automatic null terminator
    %c        Prints one character; '\0' prints as blank
    %s        Prints until '\0' is found
    length    Includes '\0' in the count


*/
