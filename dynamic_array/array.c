#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "array.h"

array* initialize_array(int size) {
    array* arr = malloc(sizeof(array));

    if (arr == NULL) {
        printf("Couldn't allocate memory for array structure.");
        exit(0);
    }

    arr->capacity = size + 10;
    arr->size = size;
    arr->list = malloc(arr->capacity * sizeof(void*));

    if (arr == NULL) {
        printf("Couldn't allocate memory for array.");
        exit(0);
    }

    return arr;
}

array* insert_element(array* arr, void* data) {
    if (arr->capacity / 2 < arr->size) {
        arr->capacity *= 2;
        void** new_list = realloc(arr->list, arr->capacity * sizeof(void*));

        if (new_list == NULL) {
            printf("Couldn't reallocate memory for array.");
            exit(0);
        }

        arr->list = new_list;
    }

    arr->list[arr->size++] = data;
    return NULL;
}

array* remove_element(array* arr, int index) {
    return NULL;
}

array* delete_array(array* arr) {
    return NULL;
}

void print_array(array* arr) {
    for (uint32_t i = 0; i < arr->size; i++) {
        printf("%x\n", arr->list[i]);
    }
}