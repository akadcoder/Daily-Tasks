#include <stdio.h>

int findSingleNumber(int arr[], int n) {
    int result = 0;

    // XOR all the elements of the array
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (all numbers appear twice except one):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the single number
    int singleNumber = findSingleNumber(arr, n);
    printf("The number that appears only once is: %d\n", singleNumber);

    return 0;
}
