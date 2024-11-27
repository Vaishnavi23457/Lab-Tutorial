#include <stdio.h>

int findLargest(int *arr, int size) {
    int *ptr = arr; // Pointer to traverse the array
    int largest = *ptr; // Initialize with the first element

    for (int i = 1; i < size; i++) {
        ptr++; // Move to the next element
        if (*ptr > largest) {
            largest = *ptr; // Update the largest value
        }
    }
    return largest;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size. Enter a positive number.\n");
        return 1;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest element using the function
    int largest = findLargest(arr, n);

    // Display the largest element
    printf("The largest element is: %d\n", largest);

    return 0;
}
