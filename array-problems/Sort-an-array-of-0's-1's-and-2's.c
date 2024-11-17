#include <stdio.h>

void sortArray(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            // Move to the next element
            mid++;
        } else { // arr[mid] == 2
            // Swap arr[mid] and arr[high]
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 2, 1, 0, 1, 2, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    sortArray(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
