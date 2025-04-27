// 3392. Count Subarrays of Length Three With a Condition
// Easy
// Topics
// Companies
// Hint
// Given an integer array nums, return the number of subarrays of length 3 such that the sum of the first and third numbers equals exactly half of the second number




// int countSubarrays(int* nums, int numsSize) {
//     int result=0;
//     for (int i=2;i<numsSize;i++){
//         if((float)((nums[i]+nums[i-2])*2)==(float)(nums[i-1]))  result++;
//     }
// return result;
// }