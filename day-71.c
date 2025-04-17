// 2176. Count Equal and Divisible Pairs in an Array
// Easy
// Topics
// Companies
// Hint
// Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k




// int countPairs(int* nums, int numsSize, int k) {
//     int count=0;
//     for(int i=0;i<numsSize-1;i++){
//         for(int j=i+1;j<numsSize;j++){
//             if(nums[i]==nums[j] && (i*j)%k==0) count++;
//         }
//     }
//     return count;
// }