// Program to demonstrate memory leaks
// Compile with dcc --leakcheck to see this error
// Patrick Chambers (z5264081), 14/4/22

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *insert_first(int value, struct node *head);
void print_list(struct node *head);

int main(void) {
    
    int i = 0;
    struct node *head = NULL;
    while (i < 10) {
        // `insert_first` is a function which malloc's a new node, 
        // inserts it at the head of the list, and
        // returns it.
        head = insert_first(i, head);
        i++;
    }

    // print_list(head);
    
    free(head);

    // What error does this cause?
    // print_list(head);

    return 0;
}

// Insert a node at the head of a list
// Takes the value to insert and the head of the original list
// Returns the head of the new list
struct node *insert_first(int value, struct node *head) {
    struct node *new_head = malloc(sizeof(struct node));
    new_head->data = value;
    new_head->next = head;
    return new_head;
}


// Prints a linked list
// Takes in the head of the list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}