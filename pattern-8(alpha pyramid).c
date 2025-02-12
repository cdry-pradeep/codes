#include <stdio.h>

void printAlphabetPyramid(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("%c", ch);
        }
        ch++;
        printf("\n");
    }
}

int main() {
    int rows = 5;
    printAlphabetPyramid(rows);
    return 0;
}
