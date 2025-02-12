#include <stdio.h>

void printPascalsTriangle(int n) {
    for (int line = 1; line <= n; line++) {
        int c = 1;
        for (int i = 1; i <= line; i++) {
            printf("%d ", c);
            c = c * (line - i) / i;
        }
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printPascalsTriangle(rows);
    return 0;
}
