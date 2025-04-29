// 2962. Count Subarrays Where Max Element Appears at Least K Times
// Medium
// Topics
// Companies
// You are given an integer array nums and a positive integer k.

// Return the number of subarrays where the maximum element of nums appears at least k times in that subarray.

// A subarray is a contiguous sequence of elements within an array.






// long long countSubarrays(int* nums, int numsSize, int k) {
//     int mx = nums[0];
//     for (int i = 1; i < numsSize; i++)
//     {
//         if (nums[i] > mx)
//         {
//             mx = nums[i];
//         }
//     }

//     long long retval = 0;
//     int hashbrown = 0;
//     int j = 0;

//     for (int i = 0; i < numsSize; i++)
//     {
//         while (j < numsSize && hashbrown < k)
//         {
//             if (nums[j] == mx)
//             {
//                 hashbrown++;
//             }
//             j++;
//         }

//         if (hashbrown < k)
//         {
//             break;
//         }

//         retval += numsSize - j + 1;

//         if (nums[i] == mx)
//         {
//             hashbrown--;
//         }
//     }

//     return retval;
// }