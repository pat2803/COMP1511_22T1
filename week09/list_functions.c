// Program to do various linked list exercises
// Written by Patrick Chambers (z5264081) on 14/4/22

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);
struct node *add_last(struct node *head, int data);
void print_list(struct node *head);

struct node *copy(struct node *list);
struct node *list_append(struct node *first_list, struct node *second_list);
int identical(struct node *first_list, struct node *second_list);
struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
);


int main(void) {

    // Demo Copy
    struct node *head = NULL;
    head = add_last(head, 10);
    head = add_last(head, 11);
    head = add_last(head, 12);

    struct node *copied = copy(head);
    copied->data = 42;
    print_list(head);
    print_list(copied);

    /*
    // Demo list append
    struct node *head_1 = NULL;
    head_1 = add_last(head_1, 10);
    head_1 = add_last(head_1, 11);
    head_1 = add_last(head_1, 12);

    struct node *head_2 = NULL;
    head_2 = add_last(head_2, 13);
    head_2 = add_last(head_2, 14);
    head_2 = add_last(head_2, 15);

    struct node *appended = list_append(head_1, head_2);
    head_2->data = 42;
    print_list(head_1);
    print_list(head_2);
    printf("\n");
    print_list(appended);
    */
     
    

    return 0;
}

/** PRESCRIBED FUNCTIONS **/

// Initialise a new node with data and return a pointer to it
struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}

// Append to a linked list
// Takes the head of a linked list and the data of the node to add
// Returns the head of the list
struct node *add_last(struct node *head, int data) {
    struct node *new = new_node(data);

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

// Prints the data of a linked list
// Takes the head of the linked list
void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}


// COMPLETE THESE FUNCTIONS

// Makes a copy of the given list and returns it
// Takes the head of a list
// Returns the head of a copy of the original linked list
struct node *copy(struct node *list) {

    struct node *new_head = NULL;
    struct node *curr_node = list;

    // Loop through original list and get the data from each node
    while (curr_node != NULL) {
        // Use the add last function to put each value into a node and add it to
        // the end of the new linked list
        new_head = add_last(new_head, curr_node->data);
        curr_node = curr_node->next;
    }

    return new_head;
}

// Returns a new linked list where it is the second appended to the first
// Takes the head of both lists
// Returns the head of the appended list, which is a copy of second_list 
// appended to a copy of first
struct node *list_append(struct node *first_list, struct node *second_list) {

    // Make sure we are working with copies of the 2 lists - we don't want to 
    // end up changing the original lists
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);

    // If the first list is empty, the appended list is just the second list
    // If the second list is NULL, we'll just make the last node of the first 
    // list point to NULL, which is what it should point at anyway
    if (first_copy == NULL) {
        return second_copy;
    }
    
    // Loop through the first list until you reach the last node
    struct node *curr_node = first_copy;
    while (curr_node->next != NULL) {
        curr_node = curr_node->next;
    }
    // Set the last node of the first list to point at the start of the second 
    // list
    curr_node->next = second_copy;

    return first_copy;
}

// Checks whether 2 linked lists are identical 
// Takes the head of both lists
// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list) {

    return 42;

}

// Given two lists in strictly increasing order, perform the set operation: intersection.
// Return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}