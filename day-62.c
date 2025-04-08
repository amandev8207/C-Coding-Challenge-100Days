// 3396. Minimum Number of Operations to Make Elements in Array Distinct
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:

// Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.
// Note that an empty array is considered to have distinct elements. Return the minimum number of operations needed to make the elements in the array distinct.









// int minimumOperations(int* nums, int numsSize) {
//     int operations = 0;
//     for (int i = 0; i < numsSize; i++){
//         for (int j = i + 1; j < numsSize & i < numsSize; j++){
//             if (nums[i] == nums[j]){
//                 operations += 1;
//                 nums += 3;
//                 numsSize -= 3;
//                 i = -1;
//                 break;
//             }
//         }
//     }
//     return operations;
// }