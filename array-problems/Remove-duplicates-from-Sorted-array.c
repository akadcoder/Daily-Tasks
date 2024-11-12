#include <stdio.h>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) {
        return n; // Array is already unique if it has 0 or 1 element
    }

    int j = 0; // Index of the next unique element

    // Traverse the array
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Add the last unique element

    return j; // New length of the array after removing duplicates
}

int main() {
    int n;
    
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int newLength = removeDuplicates(arr, n);

    // Output the result
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
