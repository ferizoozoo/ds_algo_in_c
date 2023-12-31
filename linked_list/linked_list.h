#ifndef LINKEDLIST_H
# define LINKEDLIST_H

struct Node {
    int data;
    struct Node* next;
};

void insert_last(int, struct Node*);
void insert_first(int, struct Node**);
void remove_node(struct Node*, struct Node*);
void remove_first(struct Node**);
void remove_last(struct Node*);
struct Node* find_node(int, struct Node*);
void print_list(struct Node*);

#endif