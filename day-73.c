// 2563. Count the Number of Fair Pairs
// Solved
// Medium
// Topics
// Companies
// Hint
// Given a 0-indexed integer array nums of size n and two integers lower and upper, return the number of fair pairs.

// A pair (i, j) is fair if:

// 0 <= i < j < n, and
// lower <= nums[i] + nums[j] <= upper




// int compare(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }

// long count(int *nums, int numsSize, int limit) {
//     long res = 0;
//     int l = 0, r = numsSize - 1;
//     while (l < r) {
//         if (nums[l] + nums[r] > limit) {
//             r--;
//         } else {
//             res += r - l;
//             l++;
//         }
//     }
//     return res;
// }

// long countFairPairs(int *nums, int numsSize, int lower, int upper) {
//     qsort(nums, numsSize, sizeof(int), compare);
//     return count(nums, numsSize, upper) - count(nums, numsSize, lower - 1);
// }