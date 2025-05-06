// 1920. Build Array from Permutation
// Easy
// Topics
// Companies
// Hint
// Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).






// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// int* buildArray(int* nums, int numsSize, int* returnSize){
//     *returnSize = numsSize;
// 	register int n = numsSize;
// 	register int i;
//     for(i = 0; i < n; i++) {
//     	nums[i] = nums[i] + (nums[nums[i]] % n) * n;
//     }
//     int j;
//     for(j = 0; j < n; ++j) {
//     	nums[j] = nums[j] / n;
//     }
//     return nums;
// }