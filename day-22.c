// #1524. Number of Sub-arrays With Odd Sum

// Given an array of integers arr, return the number of subarrays with an odd sum.

// Since the answer can be very large, return it modulo 109 + 7.



// #define MOD (int)(1e9 + 7)
// int numOfSubarrays(int *arr, int arrSize) {
//   int evenCnt = 0, oddCnt = 0; // even and odd sum subarray cnt end with arr[i]
//   uint64_t rs = 0;
//   for (int i = 0, tmp; i < arrSize; i++) {
//     if (arr[i] % 2) {
//       tmp = evenCnt;
//       evenCnt = oddCnt;
//       oddCnt = tmp + 1; // arr[i] is new odd sum subarray
//     } else {
//       evenCnt++; // arr[i] is new even sum subarray
//     }
//     rs = (rs + oddCnt) % MOD; // add new subarray cnt to result
//   }
//   return (int)rs;
// }