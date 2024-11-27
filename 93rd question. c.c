#include <stdio.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0;

    while (*str != '\0') {
        if (*str != ' ' && *str != '\t' && *str != '\n') {
            if (!inWord) {
                count++;   // Start of a new word
                inWord = 1;
            }
        } else {
            inWord = 0;   // End of the current word
        }
        str++;  // Move to the next character
    }
    return count;
}

int main() {
    char str[200];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count words using the function
    int wordCount = countWords(str);

    // Display the result
    printf("The number of words in the string is(are): %d\n", wordCount);

    return 0;
}
    