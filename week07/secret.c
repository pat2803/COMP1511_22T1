// A secret function. What does it do? No one knows. 
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>

#define SIZE 64

int secret_function(char word[SIZE]);
void print_secret_function(char word[SIZE]);

int main(void) {

    printf("Results of secret function: \n");

    print_secret_function("all lowercase letters");
    print_secret_function("1 LOWERCASE LETTER: a");
    print_secret_function("ALL UPPERCASE");


    return 0;
}

// Counts the number of lowercase letters in a string
// Takes in a string
// Returns the number of lowercase letters
int count_lowercase(char word[SIZE]) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

// Prints the input and output of the secret function in a nice format
// Takes in the string to apply the secret function to
void print_secret_function(char word[SIZE]) {
    printf("Input: \n");
    printf("Input: %s\n", word);
    printf("Output: \n");
    printf("%d \n\n", secret_function(word));
}
