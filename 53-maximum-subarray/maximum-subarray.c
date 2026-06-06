int maxSubArray(int* nums, int numsSize) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // Either extend the current subarray or start a new one
        if (currentSum < 0) {
            currentSum = nums[i];
        } else {
            currentSum += nums[i];
        }

        // Update maxSum if needed
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
