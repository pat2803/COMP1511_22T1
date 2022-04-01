<<<<<<< HEAD
// Program to demo what strings are
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>


#define SIZE 16

int main(void) {

    // Initialising strings char by char
    char string_1[SIZE];
    string_1[0] = 'H';
    string_1[1] = 'e';
    string_1[2] = 'l';
    string_1[3] = 'l';
    string_1[4] = 'o';
    printf("String 1: %s\n", string_1);

    // // Declaring and initialising string on the same line
    // char string_2[SIZE] = {'H', 'e', 'l', 'l', 'o'};
    // printf("String 2: %s\n", string_2);

    // // Declaring and initialising string using string shorthand
    // char string_3[SIZE] = "Hello";
    // printf("String 3: %s\n", string_3);
    
    // Printing a string character by character
    int i = 0;
    while (string_1[i] != '\0') {
        printf("%c", string_1[i]);
        i++;
    }
    printf("\n");



    return 0;
}
