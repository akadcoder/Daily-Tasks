#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int j = 0; // Index to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < n; i++) {
        // If the current element is non-zero, move it to the position at j
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (j < n) {
        arr[j++] = 0;
    }
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move zeros to the end
    moveZerosToEnd(arr, n);

    // Output the result
    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
