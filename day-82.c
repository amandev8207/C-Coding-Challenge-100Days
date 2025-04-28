// 2302. Count Subarrays With Score Less Than K
// Hard
// Topics
// Companies
// Hint
// The score of an array is defined as the product of its sum and its length.

// For example, the score of [1, 2, 3, 4, 5] is (1 + 2 + 3 + 4 + 5) * 5 = 75.
// Given a positive integer array nums and an integer k, return the number of non-empty subarrays of nums whose score is strictly less than k.

// A subarray is a contiguous sequence of elements within an array.





// long long countSubarrays(int *nums, int numsSize, long long k) {
//     long long rs = 0, sum = 0, product;
//     for (int i = -1, j = 0; j < numsSize; j++) {
//       sum += nums[j];
//       product = sum * (j - i);
//       while (i < j && product >= k) {
//         i++;
//         sum -= nums[i];
//         product = sum * (j - i);
//       }
//       rs += j - i;
//     }
//     return rs;
//   }