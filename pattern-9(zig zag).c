#include <stdio.h>

void printZigZag(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printZigZag(rows);
    return 0;
}
