// Program that takes in inputs until the input is ended and prints them out
// twice
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>

#define MAX_SIZE 4096

int main(void) {

    char input[MAX_SIZE + 1];
    while (fgets(input, MAX_SIZE + 1, stdin) != NULL) {
        printf("%s", input);
        printf("%s", input);

    }

    return 0;
}
