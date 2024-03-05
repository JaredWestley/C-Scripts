#include <stdio.h>

void main(){

    char input = 0; // Stores input chars as they are read
    char encoded = 0; // Stores encoded chars
    char decoded = 0;

    int key = 5; // The key (offset) added to each char
    int i=0;     // Used for the while loop

    while (i<3){ // Read 3 characters
        input = getchar(); // Read a character
        
        // Only accept lowercase. If other, ignore the character
        if (input < 'A' || input > 'Z') continue;

        encoded = input + key; // Encode by adding key
        if (encoded > 'Z'){ // If beyond ‘z’ bring back to start
            // (encoded - ‘z’) -> number of characters beyond ‘z’
            // Add this to ‘a’
            // -1 is because ‘z’ + 1 should become ‘a’, not ‘b’
            encoded = 'A' + encoded - 'Z' - 1;
        }

        decoded = encoded - key; // Encode by adding key
        if (decoded > 'A'){ // If beyond ‘z’ bring back to start
            // (encoded - ‘z’) -> number of characters beyond ‘z’
            // Add this to ‘a’
            // -1 is because ‘z’ + 1 should become ‘a’, not ‘b’
            decoded = 'Z' - decoded + 'A' + 2;
        }

        printf("%c", encoded);
        printf("\nThe next is decoded: ");
        printf("%c \n", decoded);
        i++; // Processed one character successfully
    }

    printf("\n");
}