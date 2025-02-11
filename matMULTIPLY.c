#include <stdio.h>

void multiplyMatrices(int firstMatrix[][2], int secondMatrix[][2], int result[][2], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void display(int result[][2], int row, int col) {
    printf("\nOutput Matrix:\n");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d  ", result[i][j]);
            if (j == col - 1)
                printf("\n");
        }
    }
}

int main() {
    int firstMatrix[2][2] = {{1, 2}, {3, 4}};
    int secondMatrix[2][2] = {{2, 0}, {1, 3}};
    int result[2][2];
    int rowFirst = 2, colFirst = 2, rowSecond = 2, colSecond = 2;

    // Function to multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond);

    // Function to display the result
    display(result, rowFirst, colSecond);

    return 0;
}
