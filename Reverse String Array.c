#include <stdio.h>

    char given_string[11];
    char user_input;
    int i = 0;

int main(){

    while (i < 12){ 
        user_input = (char) getchar(); 
        if (user_input == '\n') break;  // if we get to the end of the input stop 
        given_string[i] = user_input;
        i++;
        } 

    char new_array[i];


    for(int j = 1; j<=i; j++){
        new_array[j] = given_string[i-j];
    }

    printf("The array: %s", new_array);
}