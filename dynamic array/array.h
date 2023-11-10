typedef struct {
    int size;
    int capacity;
    void* list;
} array;

array* initialize(int size);
array* insert(void* data);
array* remove(int index);