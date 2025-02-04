// #1800. Maximum Ascending Subarray Sum

// Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

// A subarray is defined as a contiguous sequence of numbers in an array.

// A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi  < numsi+1. Note that a subarray of size 1 is ascending.

 

int maxAscendingSum(int* nums, int numsSize) {
    int currentSum = nums[0], maxSum = currentSum;
    
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            currentSum += nums[i]; // Extend ascending subarray
        } else {
            currentSum = nums[i]; // Start a new subarray
        }
        if (currentSum > maxSum) {
            maxSum = currentSum; // Update max sum
        }
    }
    
    return maxSum;
}