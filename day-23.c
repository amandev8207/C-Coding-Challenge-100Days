// #873. Length of Longest Fibonacci Subsequence

// A sequence x1, x2, ..., xn is Fibonacci-like if:

// n >= 3
// xi + xi+1 == xi+2 for all i + 2 <= n
// Given a strictly increasing array arr of positive integers forming a sequence, return the length of the longest Fibonacci-like subsequence of arr. If one does not exist, return 0.

// A subsequence is derived from another sequence arr by deleting any number of elements (including none) from arr, without changing the order of the remaining elements. For example, [3, 5, 8] is a subsequence of [3, 4, 5, 6, 7, 8].


// #include <stdio.h>
// int binarySearch(int* arr, int left, int right, int target) {
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) return mid;
//         else if (arr[mid] < target) left = mid + 1;
//         else right = mid - 1;
//     }
//     return -1; 
// }
// int lenLongestFibSubseq(int* arr, int arrSize) {
//     int dp[arrSize][arrSize]; 
//     int max_length = 0;
//     for (int i = 0; i < arrSize; i++) {
//         for (int j = 0; j < arrSize; j++) {
//             dp[i][j] = 2;
//         }
//     }
//     for (int j = 1; j < arrSize; j++) {
//         for (int i = 0; i < j; i++) {
//             int prev = arr[j] - arr[i];
//             int k = binarySearch(arr, 0, i - 1, prev);
//             if (k != -1) {
//                 dp[i][j] = dp[k][i] + 1;
//                 max_length = (dp[i][j] > max_length) ? dp[i][j] : max_length;
//             }
//         }
//     }
//     return max_length >= 3 ? max_length : 0;
// }