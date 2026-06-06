/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    result[0] = -1;
    result[1] = -1;

    // Helper: find first occurrence
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result[0] = mid;
            right = mid - 1; // keep searching left
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Helper: find last occurrence
    left = 0; right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result[1] = mid;
            left = mid + 1; // keep searching right
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}
