#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    const char* result = (ch >= 'a' && ch <= 'z') ? "Yes" : "No";
    printf("Is the character a lowercase letter? %s\n", result);
    return 0;
}