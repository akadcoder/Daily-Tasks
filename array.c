#include <stdio.h>
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // Array of 5 integers
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++) {  
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }
    return 0;
}
