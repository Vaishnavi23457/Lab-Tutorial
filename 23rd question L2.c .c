#include <stdio.h>

int power(int base, int exponent) {
    int result = 1; 
    
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent (non-negative integer): ");
    scanf("%d", &exponent);
    
    int result = power(base, exponent);
    printf("%d raised to the power of %d is %d\n", base, exponent, result);
    
    return 0;
}