// 2401. Longest Nice Subarray
// Medium
// Topics
// Companies
// Hint
// You are given an array nums consisting of positive integers.

// We call a subarray of nums nice if the bitwise AND of every pair of elements that are in different positions in the subarray is equal to 0.

// Return the length of the longest nice subarray.

// A subarray is a contiguous part of an array.

// Note that subarrays of length 1 are always considered nice.



// int longestNiceSubarray(int *nums, int numsSize) {
//     int maxLen = 1, buf = 0, l = 0;
//     for (int i = 0; i < numsSize;) {
//       while (buf & nums[i])
//         buf ^= nums[l++];
//       buf |= nums[i++];
//       int len = i - l;
//       if (len > maxLen)
//         maxLen = len;
//     }
//     return maxLen;
//   }