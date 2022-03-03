// A program to show some common while loop errors
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    /*
    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */

    /*
    int i = 0;
    int j = 0;

    while (j = 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    
    /*
    int i = 0;
    int n = 10;
    
    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }
    */

    /*
    int i = 0;

    while (i < 10)
        printf("%d\n", i);
        i = i + 1;
    */

    return 0;
}