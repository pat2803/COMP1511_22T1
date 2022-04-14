// Program to the use of free and malloc use after free 
// Uncommenting line 24 will give a malloc use after free error
// Patrick Chambers (z5264081), 14/4/22

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    
    struct node *head = malloc(sizeof(struct node));
    head->data = 42;
    head->next = NULL;

    printf("%d\n", head->data);
    
    free(head);

    // This line will give a malloc use after free error
    // printf("%d\n", head->data);

    return 0;
}


