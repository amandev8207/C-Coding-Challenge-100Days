// 2873. Maximum Value of an Ordered Triplet I
// Easy
// Topics
// Companies
// Hint
// You are given a 0-indexed integer array nums.

// Return the maximum value over all triplets of indices (i, j, k) such that i < j < k. If all such triplets have a negative value, return 0.

// The value of a triplet of indices (i, j, k) is equal to (nums[i] - nums[j]) * nums[k].






// #define MAX(a, b) ((long long)(a)>(long long)(b) ? (long long)(a) : (long long)(b))

// long long maximumTripletValue(int* nums, int nsize) {
//     long long ret = 0, amax = 0, bmax = 0;
//     for(int i = 0; i < nsize; i++) {
//         ret = MAX(ret, amax * nums[i]);
//         amax = MAX(amax, bmax - nums[i]);
//         bmax = MAX(bmax, nums[i]);
//     }
//     return ret;
// }