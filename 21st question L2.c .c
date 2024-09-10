#include <stdio.h>

int main() {
    int num1, num2;
    char operation;
    int result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operation (add,sub,mul,div): ");
    scanf(" %c", &operation); 
    
    switch (operation) {
        case 'add':
            result = num1 + num2;
            printf("Result of add: %d\n", result);
            break;
        case 'sub':
            result = num1 - num2;
            printf("Result of sub: %d\n", result);
            break;
        case 'mul':
            result = num1 * num2;
            printf("Result of mul: %d\n", result);
            break;
        case 'div':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result of div: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }
    
    return 0;
}