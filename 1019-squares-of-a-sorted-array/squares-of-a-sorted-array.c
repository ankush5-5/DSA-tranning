/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    // Allocate memory for the result array
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int left = 0;
    int right = numsSize - 1;
    int pos = numsSize - 1;

    // Two-pointer approach
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[pos--] = leftSquare;
            left++;
        } else {
            result[pos--] = rightSquare;
            right--;
        }
    }

    return result;
}
