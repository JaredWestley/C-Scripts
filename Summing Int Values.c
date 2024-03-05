#include <stdio.h>

int sum_user_input() {
    int sum = 0;
    char c;

    printf("Enter numbers to sum, 'q' to quit:\n");

    while (1) {
        printf("Enter a number: ");
        c = getchar(); 

        if (c >= '0' && c <= '9') { 
            sum += c - '0'; 

        } else if (c == 'q' || c == 'x') { 
            break; 
        } else if (c == '\n' || c == ' ' || c == '\t') {
            continue;
        } else {
            printf("Invalid input. Only enter numbers or 'q' / 'x' to quit.\n");
        }

        
        printf("Current sum: %d\n\n", sum);
    }

    return sum;
}

int main() {
    int result = sum_user_input();
    printf("The sum of the entered numbers is: %d\n", result);
    return 0;
}
