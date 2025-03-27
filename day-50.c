// 2780. Minimum Index of a Valid Split
// Medium
// Topics
// Companies
// Hint
// An element x of an integer array arr of length m is dominant if more than half the elements of arr have a value of x.

// You are given a 0-indexed integer array nums of length n with one dominant element.

// You can split nums at an index i into two arrays nums[0, ..., i] and nums[i + 1, ..., n - 1], but the split is only valid if:

// 0 <= i < n - 1
// nums[0, ..., i], and nums[i + 1, ..., n - 1] have the same dominant element.
// Here, nums[i, ..., j] denotes the subarray of nums starting at index i and ending at index j, both ends being inclusive. Particularly, if j < i then nums[i, ..., j] denotes an empty subarray.

// Return the minimum index of a valid split. If no valid split exists, return -1.




// static int minimumIndex(int* nums, int numsSize){
//     int max_i = 0;  // max element

//     int max_r = 0;  // max element amount
//     int max_l = 0;
    
//     int right = numsSize;       // nums amount
//     int left = 0;
    
//     int count = 0;  // counter for Boyer–Moore
//     for (int i = 0; i < numsSize; i++){
//         if (count == 0){
//             max_i = nums[i];
//             count = 1;
//         } else if (max_i == nums[i]){
//             count++;
//         } else {
//             count--;
//         }
        
//     }
//     for (int i = 0; i < numsSize; i++){
//         if (nums[i] == max_i) max_r++;
//     }

//     for (int i = 0; i < numsSize; i++){
//         right--; left++;
//         if (nums[i] == max_i){
//             max_r--; max_l++;
//             if (max_r > right/2 && max_l > left/2) return i;
//         }
//     }

//     return -1;
// }