/*Largest Element in an Array*/ 



#include <stdio.h>

int main() {
    int n, i;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int max = arr[0];

    // Loop through the array to find the largest element
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output the largest element
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
