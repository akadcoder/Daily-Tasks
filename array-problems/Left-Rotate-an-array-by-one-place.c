#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    int first = arr[0]; // Store the first element

    // Shift each element to the left by one position
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Place the first element at the end of the array
    arr[n - 1] = first;
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

    // Left rotate the array by one
    leftRotateByOne(arr, n);

    // Output the result
    printf("Array after left rotation by one:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
