// Program that takes in inputs until the input is ended and prints them out
// twice
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>

#define MAX_SIZE 4096

int main(void) {

    // fgets can only store size-1 characters of a string (since the last 
    // character always has to be the null terminator)
    // Therefore we set size to MAX_SIZE+1 if we want up to MAX_SIZE chars 
    // scanned in
    char input[MAX_SIZE + 1];

    // fgets returns NULL if nothing is scanned in when EOF is reached, so 
    // this while loop continues until that point
    // You can type "man 3 fgets" into the terminal to find what fgets returns 
    // under different circumstances
    while (fgets(input, MAX_SIZE + 1, stdin) != NULL) {

        // fgets scans in the whole string (including newline), and then we can 
        // print this twice
        printf("%s", input);
        printf("%s", input);
    }

    return 0;
}
