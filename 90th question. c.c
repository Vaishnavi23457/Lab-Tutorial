#include <stdio.h>

void calculateLengths(char *str, int *lengthWithSpaces, int *lengthWithoutSpaces) {
    *lengthWithSpaces = 0;
    *lengthWithoutSpaces = 0;

    while (*str != '\0') {
        (*lengthWithSpaces)++;  // Count every character
        if (*str != ' ') {
            (*lengthWithoutSpaces)++;  // Count only non-space characters
        }
        str++;  // Move pointer to the next character
    }
}

int main() {
    char str[100];
    int lengthWithSpaces, lengthWithoutSpaces;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    char *newline = str;
    while (*newline != '\0') {
        if (*newline == '\n') {
            *newline = '\0';
            break;
        }
        newline++;
    }

    // Calculate lengths
    calculateLengths(str, &lengthWithSpaces, &lengthWithoutSpaces);

    // Display results
    printf("Length of the string including spaces: %d\n", lengthWithSpaces);
    printf("Length of the string excluding spaces: %d\n", lengthWithoutSpaces);

    return 0;
}
