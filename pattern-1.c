#include <stdio.h>

void printHollowTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printHollowTriangle(rows);
    return 0;
}
