#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct Node Node;

void insert_last(int data, Node* head) {
    if (head == NULL)
        printf("There is no list specified.\n");
        
    Node* current = head;

    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    while (current->next != NULL)
        current = current->next;

    current->next = node;
}

void remove_node(Node* node, Node* head) {
    if (head == NULL)
        printf("The list is empty.\n");

    if (node == NULL)
        printf("You haven't provided a correct node to search for.\n");

    if (node == head) {
        head = head->next;
        free(node);
    }    

    Node* current = head;
    Node* previous = NULL;
    Node* next = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
        next = current->next;

        if (current == node)
            break;
    }        

    previous->next = next;
    free(node);
}

struct Node* find_node(int value, Node* head) {
    Node* current = head;

    while (current != NULL) {
        if (current->data == value)
            return current;
        current = current->next;    
    }

    return NULL;
}

void print_list(Node* head) {
    if (head == NULL)
        printf("The list is empty.\n");

    Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }    
}