// Program to demo what strings are
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>

#define SIZE 16
#define TRUE 1
#define FALSE 0

char *my_fgets(char *destination, int size);

int main(void) {

    char input_word[SIZE];

    my_fgets(input_word, SIZE);
    printf("Inputted word: %s\n", input_word);



    return 0;
}

// Writing our own fgets function which writes the input (up until '\n' or EOF)
// into the destination string
// Takes in the destination string to store the input and the max size of the 
// input
// Returns a pointer to the destination string on success
// Returns NULL when no chars are scanned and EOF occurs
char *my_fgets(char *destination, int size) {
    
    int new_line_check = FALSE;
    char char_input;
    int i = 0;
    while (new_line_check == FALSE && i < size - 1 && scanf("%c", &char_input) == 1) {
        destination[i] = char_input;
        if (char_input == '\n') {
            new_line_check = TRUE;
        }
        i++;
    }
    destination[i] = '\0';

    return destination;
}
