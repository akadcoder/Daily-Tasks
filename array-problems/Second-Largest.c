/*Second Largest Element in an Array without sorting*/


#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check if the array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements to find the second largest.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second largest to minimum possible values
    int first = arr[0];
    int second = -1;  // Use -1 to signify no valid second largest initially

    // Loop through the array to find the largest and second largest elements
    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;  // Update second largest
            first = arr[i];   // Update largest
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];  // Update second largest if within bounds
        }
    }

    // Check if a valid second largest was found
    if (second == -1) {
        printf("There is no second largest element in the array.\n");
    } else {
        printf("The second largest element in the array is: %d\n", second);
    }

    return 0;
}
