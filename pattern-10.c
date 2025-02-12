#include <stdio.h>

void printHollowDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printHollowDiamond(rows);
    return 0;
}

