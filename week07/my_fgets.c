// Creating our own fgets function from scratch (with not quite as much 
// functionality)
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>

#define SIZE 16
#define TRUE 1
#define FALSE 0

char *my_fgets(char *destination, int size);

int main(void) {

    char input[SIZE + 1];

    printf("Enter a sentence: ");
    my_fgets(input, SIZE + 1);
    printf("Inputted sentence: %s", input);



    return 0;
}

// Writing our own fgets function which writes the input (up until '\n' or EOF)
// into the destination string
// Takes in the destination string to store the input and the max size of the 
// input
// Returns a pointer to the destination string on success
// Doesn't return NULL when EOF is reached while nothing has been scanned in 
// (unlike the real fgets function)
char *my_fgets(char *destination, int size) {
    
    // Flag to check whether a new line has been scanned in (this will signal 
    // the function to stop scanning)
    int new_line_check = FALSE;

    char char_input;
    int i = 0;
    // Three conditions to check which would end the my_fgets function:
    // 1. '\n' is scanned in
    // 2. The second last index of the destination string is reached (there must
    //    be space for the '\0' to be at the last index)
    // 3. EOF is scanned in - the scanf here also does the scanning of the next 
    //    character in the input, remember that no matter where a scanf is, if 
    //    the computer runs it, it will scan in the next character from input
    while (
        new_line_check == FALSE && 
        i < size - 1 && 
        scanf("%c", &char_input) == 1
    ) {
        // Copy the inputted character into the destination string
        destination[i] = char_input;
        // If a newline is scanned in make sure the loop stops the next time 
        // round by telling it that its reached a newline
        if (char_input == '\n') {
            new_line_check = TRUE;
        }
        i++;

    }
    // Don't forget to append the null terminator onto the end of the string
    destination[i] = '\0';
    return destination;
}
