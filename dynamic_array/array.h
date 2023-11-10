typedef struct {
    int size;
    int capacity;
    void* list;
} array;

array* initialize_array(int size);
array* insert(void* data);
array* remove_element(int index);
array* delete_array();