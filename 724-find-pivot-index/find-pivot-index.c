int pivotIndex(int* nums, int numsSize) {
    int totalSum = 0;
    int leftSum = 0;

    // Step 1: Calculate total sum of array
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    // Step 2: Traverse and check pivot index
    for (int i = 0; i < numsSize; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i;  // Found pivot index
        }
        leftSum += nums[i];
    }

    return -1;  // No pivot index found
}
