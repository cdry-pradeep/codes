#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Fibonacci number at position %d is %d\n", number, fibonacci(number));

    return 0;
}
