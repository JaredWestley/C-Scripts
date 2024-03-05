#include <stdio.h>

void order_numbers(int *a, int *b){
    if (*a > *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int num1 = 20;
    int num2 = 10;

    printf("Numbers before sorting: num1: %d num2: %d\n", num1, num2);

    order_numbers(&num1, &num2);

    printf("Numbers after sorting: num1: %d num2: %d", num1, num2);

    return 0;
}
