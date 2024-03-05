#include <stdio.h>

char to_uppercase(char input) {
    if (input >= 'a' && input <= 'z') {
        return input - 32;
    }
    return input;
}

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    printf("Converted string: ");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c", to_uppercase(input[i]));
    }
    printf("\n");

    return 0;
}
