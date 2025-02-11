#include <stdio.h>

// Function to multiply each element of an array by a given factor
void multiplyArray(int *arr, int size, int factor) {
    for (int i = 0; i < size; i++) {
        arr[i] *= factor;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int factor = 3;

    printf("Array before multiplication: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the multiplyArray function using call by reference
    multiplyArray(arr, size, factor);

    printf("Array after multiplication: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
