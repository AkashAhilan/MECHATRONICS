#include <stdio.h>

int main() {
    int arr[] = {5, 15, 3, 8, 7, 12, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    int left = 0, right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("The indices are: %d and %d\nThe values are: %d and %d\n", right, left, arr[right], arr[left]);
            break;  // Stop after finding one pair, remove this if you want to find all pairs
        } else if (sum > target) {
            right--;
        } else {
            left++;
        }
    }

    return 0;
}

