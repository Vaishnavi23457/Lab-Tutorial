

#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int x) {
    int s = (int)sqrt(x);
    return (s * s == x);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int N) {
    // A number is Fibonacci if one of the following is a perfect square:
    // 5 * N^2 + 4 or 5 * N^2 - 4
    return isPerfectSquare(5 * N * N + 4) || isPerfectSquare(5 * N * N - 4);
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input the number to check
        
        // Check if N is a Fibonacci number
        if (isFibonacci(N)) {
            printf("IsFibo\n");
        } else {
            printf("IsNotFibo\n");
        }
    }

    return 0;
}
    