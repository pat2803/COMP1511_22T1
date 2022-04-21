// A program that takes in command line arguments and prints each out on a 
// newline
// Patrick Chambers (z5264081), 19/4/22

#include <stdio.h>
#include <ctype.h>

// What does the main function have instead of void?
int main(int argc, char *argv[]) {

    int i = 1;
    while (i < argc) {

        int ch_index = 0;
        while (argv[i][ch_index] != '\0') {

            printf("%c", toupper(argv[i][ch_index]));
            ch_index++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

