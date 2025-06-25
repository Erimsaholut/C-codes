//
// Created by Erimsah Olut on 21.06.2025.
//


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    arr = calloc(10, sizeof(int));

    for (int i = 0; i < 10; ++i) {
        *(arr + i) = i;
    }
    arr = realloc(arr, sizeof(int) * 21);

    for (int i = 10; i < 21; ++i) {
        *(arr + i) = i;
    }

    for (int i = 0; i < 21; ++i) {
        printf("%p  -->  %d \n", (arr + i), arr[i]);
    }

    free(arr);

    return 0;
}
