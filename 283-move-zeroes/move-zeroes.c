void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    // Step 1: Move non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[insertPos++] = nums[i];
        }
    }

    // Step 2: Fill remaining positions with zeros
    while (insertPos < numsSize) {
        nums[insertPos++] = 0;
    }
}
