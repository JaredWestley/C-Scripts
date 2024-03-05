#include <stdio.h>

int main() {
    
    int matrix[5][5] = {0}; 
    char check, x_char, y_char, value_char;

    printf("Enter 'n' to quit.\n");

    while (1) {
        printf("Do you want to continue? y for yes, n for no: ");
        check = getchar();

        if (check == 'n' || check == 'N') { 
            break; 
        } else if(check == 'y' || check =='Y') {

            while (getchar() != '\n');

            printf("\nEnter the x coordinate: ");
            x_char = getchar(); 
            int x = x_char - '0';
            printf("%d", x);

            while (getchar() != '\n');

            printf("Enter the y coordinate: ");
            y_char = getchar(); 
            int y = y_char - '0';
            printf("%d", y);

            while (getchar() != '\n');

            printf("Enter the value: ");
            value_char = getchar(); 
            int value = value_char - '0';
            printf("%d", value);

            while (getchar() != '\n');

            if (x > 0 && x < 6 && y > 1 && y < 6) {
                matrix[x-1][y-1] = value;  
            } else {
                printf("Invalid coordinates. Please enter values between 1 and 5.\n");
            }

            printf("\nUpdated Matrix:\n");
            for (int row = 0; row < 5; row++) {
                for (int col = 0; col < 5; col++) {
                    printf("%d ", matrix[col][row]);
                }
                printf("\n");
            }
        
        }else if (check == '\n' || check == ' ' || check == '\t') {
            continue;
        } else {
            printf("\nThat was an invalid input, please try again\n");
        }

    }

    return 0;
}
