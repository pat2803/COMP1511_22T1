// A program to demonstrate how to use a stack using a pancake stack
// Patrick Chambers (z5264081) 21/4/22

#include <stdio.h>

#include "list.h"

void handle_command(struct list *pancake, char command);
void do_add(struct list *stack, char *data);
void do_eat(struct list *stack);

int main(void) {
    struct list *pancake = create_list();

    char command;
    while (scanf(" %c", &command) == 1) {
        handle_command(pancake, command);
    }
    return 0;
}

// Handles a command given by the user
void handle_command(struct list *pancake, char command) {
    char extra_data[MAX_STR_LENGTH];

    // Important commands:
    // - 'a' <name>: place new pancake onto pancake stack
    // - 'e':        eat top pancake
    // - 'p':        print pancake stack
    //
    if (command == 'a') {
        fgets(extra_data, MAX_STR_LENGTH, stdin);
        do_add(pancake, extra_data);
    }
    if (command == 'e') {
        do_eat(pancake);
    }
    if (command == 'p') {
        print_list(pancake);
    }

}

// Add a pancake with to the top of the stack 
// Takes in the pancake stack and the pancake name to add to it
void do_add(struct list *stack, char *data) {
    // Passing the address of the second character so it doesn't include the 
    // first character of the string which is a space
    push_head(stack, &(data[1]));
    printf("Added: %s", data);
}

// Eat a pancake by removing the top pancake from the stack
// Takes in the pancake stack
void do_eat(struct list *stack) {
    struct node *single_pancake = pop_front(stack);
    printf("The customer has eaten %s", single_pancake->data);
}