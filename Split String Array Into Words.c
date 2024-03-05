#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void to_words(char line[], char **words, int *num_words) {
    int word_count = 0;
    int index = 0;
    char temp_word[100]; // Assuming maximum word length of 100 characters
    
    while (line[index] != '\n' && line[index] != '\0') {
        int temp_index = 0;
        
        // If the character is not a space
        while (line[index] != ' ' && line[index] != '\n' && line[index] != '\0') {
            temp_word[temp_index++] = line[index++];
        }

        // Terminate the word
        temp_word[temp_index] = '\0'; 
        
        words[word_count] = (char*)malloc((temp_index + 1) * sizeof(char));
        strcpy(words[word_count], temp_word);
        word_count++;
        
    
        while (line[index] == ' ') {
            index++;
        }
    }
    
    // Update the number of words
    *num_words = word_count;
}

int main() {
    printf("Enter a line of text: ");
    
    char line[1000];
    char c;
    int index = 0;
    char *words[20]; 
    int num_words = 0;

    while ((c = getchar()) != '\n' && index < 999) {
        line[index++] = c;
    }
    //terminate the line
    line[index] = '\0'; 
    
    
    to_words(line, words, &num_words);
    
    
    printf("Words in the line:\n");
    for (int i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
        free(words[i]); 
    }
    
    return 0;
}
