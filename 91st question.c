#include <stdio.h>

int main() {
    int number, square, cube;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &number);

    ptr = &number;  

    square = (*ptr) * (*ptr);      
    cube = (*ptr) * (*ptr) * (*ptr);  

    printf("Square of %d is: %d\n", *ptr, square);
    printf("Cube of %d is: %d\n", *ptr, cube);

    return 0;
}
