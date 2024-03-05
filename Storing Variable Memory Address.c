#include <stdio.h>



int main() {
    
    int num1 = 5;
    int num2 = 10;
    char char1;

    int* pAddress1= NULL; // a pointer with no value assigned
    pAddress1 = &num1;
    printf("\n The location of num1 is at 0x%p\n", pAddress1);

    int* pAddress2= NULL; // a pointer with no value assigned
    pAddress2= &num2;
    printf("\n The location of num2 is at 0x%p\n", pAddress2);

    char* pAddress3 = NULL;
    pAddress3= &char1;
    printf("\n The location of char1 is at 0x%p\n", pAddress3);

    //A char pointer points to a memory location of at least 1 byte, a int pointer points to a memory location of 4 bytes.

    return 0;
}
