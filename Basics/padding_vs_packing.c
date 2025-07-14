// Program demonstrating structure padding vs packing using #pragma pack

#include <stdio.h>

struct Padded_Student {

    char grade;
    int rollno;

};

#pragma pack(1)

struct Packed_Student {

    char grade;
    int rollno;

};

#pragma pack()

int main(){

    printf("Size of Student with padding : %zu\n",sizeof(struct Padded_Student));
    printf("Size of Student with packing : %zu",sizeof(struct Packed_Student));

    return 0;

}

/*
    STRUCT PADDING vs PACKING in C

    Padding:
        - Compilers insert extra bytes between members to align data for faster access.
        - For example:
              struct Padded_Student {
                  char grade;     // 1 byte
                  int rollno;     // 4 bytes
              };
          Memory layout (with padding):
              [grade][pad][pad][pad][rollno rollno rollno rollno]
              Total size = 8 bytes (1 byte + 3 padding + 4 for int)

    Packing:
        - Using `#pragma pack(1)` disables padding; members are stored back-to-back.
        - For example:
              struct Packed_Student {
                  char grade;     // 1 byte
                  int rollno;     // 4 bytes
              };
          Memory layout (packed):
              [grade][rollno rollno rollno rollno]
              Total size = 5 bytes (no padding)

    When to use:
        - Padding (default) = Better CPU performance, more memory.
        - Packing = Less memory usage, slower access; useful in embedded systems or file formats.
*/

