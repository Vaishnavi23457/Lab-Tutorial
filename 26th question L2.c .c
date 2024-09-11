#include <stdio.h>

int main() {
    int N;
    int sum_even = 0;
    int sum_odd = 0;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("N must be a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }
    printf("Sum of even numbers between 1 and %d is: %d\n", N, sum_even);
    printf("Sum of odd numbers between 1 and %d is: %d\n", N, sum_odd);

    return 0;
}