#include <stdio.h>

void reverseCopyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + size - 1 - i);
    }
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int sourceArray[n], destinationArray[n];

    // Input elements in the source array
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements in reverse order
    reverseCopyArray(sourceArray, destinationArray, n);

    // Display the elements of the destination array
    printf("Elements in the destination array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
