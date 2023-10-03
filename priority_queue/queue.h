#include "node.h"

typedef struct {
    int capacity;
    int size;
    node* head;
} queue;

void insert(queue* queue, int key, void* value);
node* extract_min(queue* queue);