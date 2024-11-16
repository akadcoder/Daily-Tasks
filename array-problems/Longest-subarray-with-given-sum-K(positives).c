#include <stdio.h>

int longestSubarrayWithSumK(int arr[], int n, int k) {
    int start = 0, current_sum = 0, max_length = 0;

    for (int end = 0; end < n; end++) {
        // Add the current element to the current_sum
        current_sum += arr[end];

        // Shrink the window from the left until current_sum <= k
        while (current_sum > k && start <= end) {
            current_sum -= arr[start];
            start++;
        }

        // Check if the current_sum equals k
        if (current_sum == k) {
            int length = end - start + 1;
            if (length > max_length) {
                max_length = length;
            }
        }
    }

    return max_length;
}

int main() {
    int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 12;

    int result = longestSubarrayWithSumK(arr, n, k);
    printf("Length of the longest subarray with sum %d: %d\n", k, result);

    return 0;
}
