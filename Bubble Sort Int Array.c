#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10];
    int b[10];
    int i, j, tmp;

    for (i = 0; i < 10; i++)
        a[i] = random() % 101 + 100; 

    printf("Original array:\n");
    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n");

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (a[j] > a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    printf("Sorted array in decreasing order:\n");
    for (i = 0; i < 10; i++) printf("%d ", a[i]);
    printf("\n");

    for (i = 0; i < 10; i++) {
        b[i] = a[i];
    }

    printf("Second array after sorting:\n");
    for (i = 0; i < 10; i++) printf("%d ", b[i]);
    printf("\n");

    return 0;
}
