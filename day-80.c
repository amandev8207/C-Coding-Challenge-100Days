// 2444. Count Subarrays With Fixed Bounds
// Hard
// Topics
// Companies
// Hint
// You are given an integer array nums and two integers minK and maxK.

// A fixed-bound subarray of nums is a subarray that satisfies the following conditions:

// The minimum value in the subarray is equal to minK.
// The maximum value in the subarray is equal to maxK.
// Return the number of fixed-bound subarrays.

// A subarray is a contiguous part of an array.

 


// long long countSubarrays(int* nums, int numsSize, int minK, int maxK) {
//     long long currCount = 0, totalCount = 0;
//     int left = 0, countMinK = 0, countMaxK = 0;

//     for(int idx = 0; idx < numsSize; idx++) {
//         if(nums[idx] == minK) {
//             countMinK++;
//         }

//         if(nums[idx] == maxK) {
//             countMaxK++;
//         }

//         if(nums[idx] < minK || nums[idx] > maxK) {
//             left = idx + 1;
//             currCount = 0;
//             countMinK = 0;
//             countMaxK = 0;
//             continue;
//         }

//         if(countMinK >= 1 && countMaxK >= 1) {
//             while(left < idx) {
//                 if(nums[left] == minK) {
//                     if(countMinK == 1) {
//                         break;
//                     }

//                     countMinK--;
//                 }

//                 if(nums[left] == maxK) {
//                     if(countMaxK == 1) {
//                         break;
//                     }

//                     countMaxK--;
//                 }

//                 left++;
//                 currCount++;
//             }

//             totalCount += currCount + 1;
//         }
//     }

//     return totalCount;
// }