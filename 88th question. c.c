#include <stdio.h>

void copyArray(int *source, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(source + i);
    }
}

int main() {
    int source[] = {1, 2, 3, 4, 5};
    int size = sizeof(source) / sizeof(source[0]);
    int dest[size];

    copyArray(source, dest, size);

    printf("Copied Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dest[i]);
    }

    return 0;
}
    