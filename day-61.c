// 416. Partition Equal Subset Sum
// Solved
// Medium
// Topics
// Companies
// Given an integer array nums, return true if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

 

// Example 1:

// Input: nums = [1,5,11,5]
// Output: true
// Explanation: The array can be partitioned as [1, 5, 5] and [11].
// Example 2:

// Input: nums = [1,2,3,5]
// Output: false
// Explanation: The array cannot be partitioned into equal sum subsets.






// bool canPartition(int* nums, int numsSize) {
//     int total = 0;
//     for(int i=0;i<numsSize;i++){
//         total += nums[i];
//     }
//     if(total %2!=0) return false;

//     int target = total/2;
//     bool dp[target+1];
//     memset(dp,false,sizeof(dp));
//     dp[0] = true;

//     for(int i=0;i<numsSize;i++){
//         for(int j=target;j>=nums[i];j--){
//             dp[j] = dp[j] || dp[j-nums[i]];
           
//         }
//     }
    
//     return dp[target];
// }