//C Program (Sum Formula)

#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    // Calculate the expected sum of numbers from 1 to n+1
    int total = (n + 1) * (n + 2) / 2;

    // Calculate the actual sum of the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // The missing number is the difference
    return total - sum;
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (1 to %d, with one missing):\n", n + 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the missing number
    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}



//C Program (XOR Method)

#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int xor_all = 0, xor_arr = 0;

    // XOR all numbers from 1 to n+1
    for (int i = 1; i <= n + 1; i++) {
        xor_all ^= i;
    }

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        xor_arr ^= arr[i];
    }

    // Missing number is the XOR of xor_all and xor_arr
    return xor_all ^ xor_arr;
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (1 to %d, with one missing):\n", n + 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the missing number
    int missing = findMissingNumber(arr, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}
