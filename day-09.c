// #2342. Max Sum of a Pair With Equal Sum of Digits

// You are given a 0-indexed array nums consisting of positive integers. You can choose two indices i and j, such that i != j, and the sum of digits of the number nums[i] is equal to that of nums[j].

// Return the maximum value of nums[i] + nums[j] that you can obtain over all possible indices i and j that satisfy the conditions.




// int maximumSum(int* nums, int numsSize) {
//     int arr[82] = {0};
//     int sum = 0;
//     int max = -1;
//     for (int i = 0; i < numsSize; i++) {
//         sum = 0;
//         int temp = nums[i];
//         while (temp > 0) {
//             sum = sum + (temp % 10);
//             temp = temp / 10;
//         }
//         if (arr[sum] != 0) {
//             if (max < arr[sum] + nums[i])
//                 max = arr[sum] + nums[i];
//         }
//         if (nums[i] > arr[sum])
//             arr[sum] = nums[i];
//     }
//     return max;
// }