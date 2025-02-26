// 1749. Maximum Absolute Sum of Any Subarray
// Medium
// Topics
// Companies
// Hint
// You are given an integer array nums. The absolute sum of a subarray [numsl, numsl+1, ..., numsr-1, numsr] is abs(numsl + numsl+1 + ... + numsr-1 + numsr).

// Return the maximum absolute sum of any (possibly empty) subarray of nums.

// Note that abs(x) is defined as follows:

// If x is a negative integer, then abs(x) = -x.
// If x is a non-negative integer, then abs(x) = x.



// int maxAbsoluteSum(int* nums, int numsSize) {
//     int max = INT_MIN, min = INT_MAX, sum1 = 0, sum2 = 0;
//     for (int idx=0;idx<numsSize;idx++) {
//         sum1 = sum1+nums[idx] > 0 ? sum1+nums[idx] : 0;
//         sum2 = nums[idx] < nums[idx]+sum2 ? nums[idx] : nums[idx]+sum2;
//         max = max > sum1 ? max : sum1;
//         min = min < sum2 ? min : sum2;
//     }    
//     return abs(max) > abs(min) ? abs(max) : abs(min);
// }