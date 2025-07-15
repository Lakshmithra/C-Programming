// Program to demonstrate file creation, writing, and read error handling using file handling in C

#include <stdio.h>

int main(){

    FILE *p;                                              // Declare file pointer for writing
    p = fopen("Demo fopen.c","w");                        // Open file in write mode (creates or overwrites)
    fprintf( p , "Hello Universe !");                     // Write a string into the file

    fclose(p);                                            // Close the file after writing

    FILE *q;                                              // Declare file pointer for reading
    q = fopen ("No file.c","r");                          // Try to open a non-existent file in read mode
    if(q==NULL){                                          // Check if file opening failed
        printf("File doesn't exist !");                   // Print error message

        return 1;                                         // Return with error code
    }
    fclose(q);                                            // Close the file if opened successfully
    
    return 0;
}

/*
    FILE HANDLING IN C:

    File handling lets you store and access data permanently in external files 
    instead of temporary console I/O.

     Basic Steps:
    1. Declare a FILE pointer → FILE *fp;
    2. Open a file with fopen() using modes like:
        - "r"  → Read (file must exist)
        - "w"  → Write (creates or overwrites)
        - "a"  → Append (adds to end or creates)
    3. Check if file opened successfully (especially in read mode).
    4. Use file functions:
        - fprintf(), fscanf() → formatted I/O
        - fgetc(), fputc()   → single char I/O
        - fgets(), fputs()   → string I/O
    5. Close with fclose(fp); to free resources.

     Always close files properly. 
    File handling allows data to persist after the program ends.
*/
