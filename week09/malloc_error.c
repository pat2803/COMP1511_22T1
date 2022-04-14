#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data);

int main(void) {
    
    struct node *head = new_node(42);
    printf("%d\n", head->data);

    return 0;
}

struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    return new;
}