#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;

int main() {
    Node* head = malloc(sizeof(Node));
    head->data = 1;

    print_list(head);
    printf("---------------------------\n");

    for (int i = 2; i < 10; i++)
        insert_last(i, head);

    print_list(head);
    printf("---------------------------\n");   

    int value = 4;
    Node* found_node = find_node(value, head);
    remove_node(found_node, head);

    print_list(head); 
    printf("---------------------------\n");

    int value2 = 9;
    Node* found_node2 = find_node(value2, head);
    remove_node(found_node2, head);

    print_list(head); 
    printf("---------------------------\n");
}