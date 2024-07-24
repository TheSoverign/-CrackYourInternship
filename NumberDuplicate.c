#include <stdio.h>

int findDuplicate(int* nums, int numsSize) {
    int left = 1, right = numsSize - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        int count = 0;

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] <= mid) {
                count++;
            }
        }

        if (count > mid) {
            right = mid; // The duplicate is in the lower half
        } else {
            left = mid + 1; // The duplicate is in the upper half
        }
    }

    return left;
}
