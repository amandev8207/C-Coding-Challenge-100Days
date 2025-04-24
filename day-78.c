// 2799. Count Complete Subarrays in an Array
// Medium
// Topics
// Companies
// Hint
// You are given an array nums consisting of positive integers.

// We call a subarray of an array complete if the following condition is satisfied:

// The number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.
// Return the number of complete subarrays.

// A subarray is a contiguous non-empty part of an array






// int countCompleteSubarrays(int* nums, int numsSize) {
//     int freq[2001] = {0};
//     int count_distinct = 0;
//     int start = 0;
//     int count_sub = 0;

//     for(int i = 0; i < numsSize; i++) {
//         freq[nums[i]]++;
//         if(freq[nums[i]] == 1) count_distinct++;
//     }
    
//     memset(freq, 0, sizeof(int) * 2001);
//     for(int i = 0; i < numsSize; i++) {
//         freq[nums[i]]++;
//         if(freq[nums[i]] == 1) {
//             count_distinct--;
//         }

//         if(count_distinct == 0) {
//             count_sub++;
//             while(start < i && freq[nums[start]] > 1) {
//                 freq[nums[start]]--;
//                 start++;
//             }

//             count_sub += start;
//         }
//     }

//     return count_sub;
// }