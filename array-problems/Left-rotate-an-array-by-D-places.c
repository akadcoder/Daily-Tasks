#include <stdio.h>

// Function to reverse a part of the array from index start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to left rotate an array by D places
void leftRotate(int arr[], int n, int d) {
    d = d % n; // Handle cases where D >= N

    // Step 1: Reverse the first D elements
    reverse(arr, 0, d - 1);
    
    // Step 2: Reverse the remaining elements from D to end
    reverse(arr, d, n - 1);
    
    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}

int main() {
    int n, d;
    
    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the number of places to rotate
    printf("Enter the number of places to rotate: ");
    scanf("%d", &d);

    // Left rotate the array by D places
    leftRotate(arr, n, d);

    // Output the result
    printf("Array after left rotation by %d places:\n", d);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
