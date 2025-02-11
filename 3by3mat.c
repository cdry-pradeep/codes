#include <stdio.h>

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Initialize the matrix
    int value = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = value++;
        }
    }

    // Print the matrix
    printf("3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
