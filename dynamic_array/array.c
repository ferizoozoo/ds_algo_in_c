#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "array.h"

array* initialize_array(int capacity) {
    array* arr = malloc(sizeof(array));

    if (arr == NULL) {
        printf("Couldn't allocate memory for array structure.\n");
        exit(0);
    }

    arr->capacity = capacity;
    arr->size = 0;
    arr->list = malloc(arr->capacity * sizeof(void*));

    if (arr == NULL) {
        printf("Couldn't allocate memory for array.\n");
        exit(0);
    }

    return arr;
}

array* insert_element(array* arr, void* data) {
    if (arr->capacity / 2 < arr->size) {
        arr->capacity *= 2;
        void** new_list = realloc(arr->list, arr->capacity * sizeof(void*));

        if (new_list == NULL) {
            printf("Couldn't reallocate memory for array.\n");
            exit(0);
        }

        arr->list = new_list;
    }

    arr->list[arr->size] = data;
    arr->size++;

    return NULL;
}

array* remove_element(array* arr, int index) {
    if (index >= arr->size || index < 0) {
        printf("Index out of bounds of array.\n");
        return;
    }

    for (uint32_t i = index; i < arr->size - 1; i++) {
        void* data = arr->list[i + 1]; 
        arr->list[i] = data;
    }
    arr->size--;

    if (arr->capacity / 2 > arr->size) {
        arr->capacity /= 2;
        void** new_list = realloc(arr->list, arr->capacity * sizeof(void*));

        if (new_list == NULL) {
            printf("Couldn't reallocate memory for array.\n");
            exit(0);
        }

        arr->list = new_list;
    }

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