#include <stdio.h>
#include <stdlib.h>

int *resample(const int *input, int length, int step_size){
    int *output = malloc((length+step_size-1)/step_size*sizeof(int));

    int output_index = 0;
    for(int i = 0; i < length; i += step_size){
        output[output_index++] = input[i];
    }

    return output;

}

int main(){
    int input[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int length = 10;
    int step = 3;

    int *result = resample(input, length, step);

    for (int i = 0; i < ((length + step -1)/ step); i++){
        printf("%d ", result[i]);
    }

    return 0;

}