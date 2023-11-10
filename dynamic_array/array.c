#include "array.h"

array* initialize_array(int size) {
    array* array = malloc(sizeof(array));

    array->capacity = size + 10;
    array->size = size;
    array->list = malloc(array->capacity * sizeof(void*));

    return array;
}

array* insert(void* data) {
    //TODO: check if capacity > size, then realloc memory
    //      else array->list[array->size++] = data
}

array* remove_element(int index) {
    
}

array* delete_array() {

}