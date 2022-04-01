// Program to demo what strings are
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>


#define SIZE 16

void print_string(char *string);

int main(void) {

    // Initialising strings char by char
    // This will give an error when printing if you don't add '\0' at the end
    char string_1[SIZE];
    string_1[0] = 'H';
    string_1[1] = 'e';
    string_1[2] = 'l';
    string_1[3] = 'l';
    string_1[4] = 'o';

    // Uncomment this line to fix the errors ('\0' lets the computer know when
    // the string has ended)
    string_1[5] = '\0';

    printf("String 1: ");
    printf("%s\n", string_1);
    // This line will print out the string in the exact same way
    // print_string(string_1);
    
    /*
    // Declaring and initialising string on the same line
    // This will also give an error if you don't add '\0' at the end
    char string_2[SIZE] = {'H', 'e', 'l', 'l', 'o'};
    // char string_2[SIZE] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("String 2: ");
    print_string(string_2);
    */

    /*
    // Declaring and initialising string using string shorthand
    // This automatically adds a null terminator at the end
    char string_3[SIZE] = "Hello";
    printf("String 3: ");
    print_string(string_3);
    */    

    return 0;
}

// Prints out a string character by character, adding a newline to the end
// Takes in a char pointer - a char array (string) can be converted into a char 
// pointer when put into a function, and it can be used in all the same ways 
// that matter at the moment in 1511
void print_string(char *string) {
    int i = 0;
    // Make sure that printing stops when the null terminator is reached - this 
    // is how we know that the string has ended
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}