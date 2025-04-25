// 2845. Count of Interesting Subarrays
// Medium
// Topics
// Companies
// Hint
// You are given a 0-indexed integer array nums, an integer modulo, and an integer k.

// Your task is to find the count of subarrays that are interesting.

// A subarray nums[l..r] is interesting if the following condition holds:

// Let cnt be the number of indices i in the range [l, r] such that nums[i] % modulo == k. Then, cnt % modulo == k.
// Return an integer denoting the count of interesting subarrays.

// Note: A subarray is a contiguous non-empty sequence of elements within an array.







// long long countInterestingSubarrays(int *nums, int numsSize, int modulo,
//     int k) {
// long long rs = 0;
// // remainder frequency map to prefix sums
// int *rmdMap = calloc(modulo, sizeof(int));
// rmdMap[0] = 1;
// for (int i = 1, cnt = 0; i <= numsSize; i++) {
// cnt += nums[i - 1] % modulo == k; // prefix sum to valid num count
// int rmd = cnt % modulo;
// // cnts[i] - cnts[j] == n * modulo + k => rmd(cnts[i]) - rmd(cnts[j]) == k
// rs += rmd < k ? rmdMap[rmd + modulo - k] : rmdMap[rmd - k];
// rmdMap[rmd]++;
// }
// free(rmdMap);
// return rs;
// }