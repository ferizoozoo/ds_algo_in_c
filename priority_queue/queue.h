#include "node.h"

typedef struct {
    int capacity = 0;
    int size = 0;
    node* head;
} queue;

void insert(queue* queue, int key, void* value);
node* extract_min(queue* queue);