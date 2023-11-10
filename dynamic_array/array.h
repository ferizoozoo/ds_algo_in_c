typedef struct {
    int size;
    int capacity;
    void** list;
} array;

array* initialize_array(int capacity);
array* insert_element(array* arr, void* data);
array* remove_element(array* arr, int index);
array* delete_array(array* arr);
void print_array(array* arr);