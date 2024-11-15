#include <stdio.h>

// Function to check if an element is already in the union array
int isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1; // Element found
        }
    }
    return 0; // Element not found
}

// Function to find the union of two arrays
void findUnion(int arr1[], int n1, int arr2[], int n2) {
    int unionArr[n1 + n2]; // Array to store the union
    int unionSize = 0;

    // Add all elements of the first array to the union
    for (int i = 0; i < n1; i++) {
        if (!isPresent(unionArr, unionSize, arr1[i])) {
            unionArr[unionSize++] = arr1[i];
        }
    }

    // Add elements from the second array to the union if not already present
    for (int i = 0; i < n2; i++) {
        if (!isPresent(unionArr, unionSize, arr2[i])) {
            unionArr[unionSize++] = arr2[i];
        }
    }

    // Print the union array
    printf("Union of the two arrays:\n");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    // Input the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Find and print the union
    findUnion(arr1, n1, arr2, n2);

    return 0;
}
