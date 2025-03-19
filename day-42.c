// 3191. Minimum Operations to Make Binary Array Elements Equal to One I
// Medium
// Topics
// Companies
// Hint
// You are given a binary array nums.

// You can do the following operation on the array any number of times (possibly zero):

// Choose any 3 consecutive elements from the array and flip all of them.
// Flipping an element means changing its value from 0 to 1, and from 1 to 0.

// Return the minimum number of operations required to make all elements in nums equal to 1. If it is impossible, return -1.




// int minOperations(int* nums, int numsSize) {
//     int i;
//     int count=0;
//     for (i = i; i < numsSize-2; i++) {
//         if (nums[i] == 0) {
//             nums[i] = 1;
//             if (nums[i + 1] == 0)
//                 nums[i + 1] = 1;
//             else
//                 nums[i + 1] = 0;
//             if (nums[i + 2] == 0)
//                 nums[i + 2] = 1;
//             else
//                 nums[i + 2] = 0;
//             count++;
//         }
// }
//         if(nums[numsSize-1]==0 || nums[numsSize-2]==0)
//         return -1;
//         else
//         return count;
//     }