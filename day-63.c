// 3375. Minimum Operations to Make Array Values Equal to K
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums and an integer k.

// An integer h is called valid if all values in the array that are strictly greater than h are identical.

// For example, if nums = [10, 8, 10, 8], a valid integer is h = 9 because all nums[i] > 9 are equal to 10, but 5 is not a valid integer.

// You are allowed to perform the following operation on nums:

// Select an integer h that is valid for the current values in nums.
// For each index i where nums[i] > h, set nums[i] to h.
// Return the minimum number of operations required to make every element in nums equal to k. If it is impossible to make all elements equal to k, return -1.





// int minOperations(int* nums, int numsSize, int k) {
//     #define max 101
//     int count=0;
//     int hash[max]={0};

//     for(int i=0;i<numsSize;i++){
//         if(nums[i]<k){
//             return -1;
//         }
//         hash[nums[i]]++;
//     } 

//     for(int i=0;i<max;i++){
//         if(hash[i]>0&&i>k){
//             count++;
//         }
//     }
// return count;
// }