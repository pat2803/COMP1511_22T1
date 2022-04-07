// Allocating memory using malloc
// Patrick Chambers (z5264081), 7/4/22

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int *int_pointer = malloc(sizeof(int));
    
    *int_pointer = 5;

    printf("%d\n", *int_pointer);

    return 0;
}




