#include <stdio.h>

void printFloydsTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printFloydsTriangle(rows);
    return 0;
}
