#include <stdio.h>

int isAbundant(int num) {
    int sum = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of proper divisors is greater than the number
    return sum > num;
}

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an abundant number
    if (isAbundant(num)) {
        printf("%d is an abundant number.\n", num);
    } else {
        printf("%d is not an abundant number.\n", num);
    }

    return 0;
}
