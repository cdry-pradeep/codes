#include <stdio.h>

void printCombination(char arr[], int n, int r, int index, char data[], int i) {
    if (index == r) {
        for (int j = 0; j < r; j++) {
            printf("%c ", data[j]);
        }
        printf("\n");
        return;
    }

    if (i >= n)
        return;

    data[index] = arr[i];
    printCombination(arr, n, r, index + 1, data, i + 1);

    printCombination(arr, n, r, index, data, i + 1);
}

int main() {
    char arr[] = {'A', 'B', 'C'};
    int n = sizeof(arr) / sizeof(arr[0]);
    int r = 2;
    char data[r];
    printCombination(arr, n, r, 0, data, 0);
    return 0;
}
