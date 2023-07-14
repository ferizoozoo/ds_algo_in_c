#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;

int main() {
    Node* node = malloc(sizeof(Node));
    node->data = 1;

    Node* head = node;

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

    remove_last(head);

    print_list(head); 
    printf("---------------------------\n");

    head = remove_first(head);

    print_list(head); 
    printf("---------------------------\n");

    int value3 = 40;
    head = insert_first(value3, head);

    print_list(head); 
    printf("---------------------------\n");

    int value4 = 40;
    insert_last(value4, head);

    print_list(head); 
    printf("---------------------------\n");
}