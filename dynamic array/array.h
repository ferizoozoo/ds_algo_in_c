typedef struct {
    int size = 0;
    int capacity = 0;
    void* list;
} array;

array* initialize(int size);
array* insert(void* data);
array* remove(int index);