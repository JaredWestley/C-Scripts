#include <stdio.h>
#include <stdlib.h>

void interleave(int *first, int *first_length, int *second, int *second_length, int *return_array, int *result_length) {
    int i, j, k;
    i = j = k = 0;

    while (i < *first_length && j < *second_length) {
        return_array[k++] = first[i++];
        return_array[k++] = second[j++];
    }


    while (i < *first_length) {
        return_array[k++] = first[i++];
    }
    while (j < *second_length) {
        return_array[k++] = second[j++];
    }
    
    *result_length = k;
}

int main() {
    int first_length = rand() % 11 + 10;
    int second_length = rand() % 11 + 10;

    int first[first_length];
    int second[second_length];


    for (int i = 0; i < first_length; i++) {
        first[i] = rand() % 101;
    }
    for (int i = 0; i < second_length; i++) {
        second[i] = rand() % 101;
    }

    printf("First array:\n");
    for (int i = 0; i < first_length; i++) {
        printf("%d ", first[i]);
    }

    printf("\nSecond array:\n");
    for (int i = 0; i < second_length; i++) {
        printf("%d ", second[i]);
    }

    int result[first_length + second_length];
    int result_length;

    interleave(first, &first_length, second, &second_length, result, &result_length);

    printf("\nInterleaved array:\n");
    for (int i = 0; i < result_length; i++)
        printf("%d ", result[i]);
    printf("\n");

    return 0;
    

}