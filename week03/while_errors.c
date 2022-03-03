// A program to show some common while loop errors
// Uncomment each loop and try compiling and running to see what errors/unwanted 
// outputs you get
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    
    /*
    // Error: variable i is not initialised
    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */

    /*
    // Error: j = 1 is an assignment, not a check for equality. j = 1 always 
    // returns true, so this loop will run forever
    int i = 0;
    int j = 0;

    while (j = 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */
    
    /*
    // Error: n is increasing at a faster rate than i, so i will never be 
    // greater than or equal to n, so the loop will run forever
    int i = 0;
    int n = 10;
    
    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }
    */

    /*
    // Error: while loop doesn't have curly braces, so it won't include all the 
    // code that is meant to be in the while loop
    int i = 0;

    while (i < 10)
        printf("%d\n", i);
        i = i + 1;
    */

    return 0;
}