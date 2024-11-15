#include <stdio.h>

int findMaxConsecutiveOnes(int arr[], int n) {
    int maxCount = 0;  // Stores the maximum number of consecutive ones
    int count = 0;     // Counts the current streak of ones

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            count++; // Increment count for consecutive ones
            if (count > maxCount) {
                maxCount = count; // Update maxCount if needed
            }
        } else {
            count = 0; // Reset count when a 0 is encountered
        }
    }

    return maxCount;
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the binary array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the binary array (0s and 1s):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the maximum number of consecutive ones
    int maxConsecutive = findMaxConsecutiveOnes(arr, n);
    printf("The maximum number of consecutive ones is: %d\n", maxConsecutive);

    return 0;
}
