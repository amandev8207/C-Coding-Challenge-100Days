// 1534. Count Good Triplets
// Easy
// Topics
// Companies
// Hint
// Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

// A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:

// 0 <= i < j < k < arr.length
// |arr[i] - arr[j]| <= a
// |arr[j] - arr[k]| <= b
// |arr[i] - arr[k]| <= c
// Where |x| denotes the absolute value of x.

// Return the number of good triplets.





// int countGoodTriplets(int* arr, int arrSize, int a, int b, int c) {
//     int x = 0, i, j, k;
//     for (i = 0; i < arrSize - 2; i++) {
//         for (j = i + 1; j < arrSize - 1; j++) {
//             for (k = j + 1; k < arrSize; k++) {
//                 if ((abs(arr[i] - arr[j])) <= a &&
//                     (abs(arr[j] - arr[k])) <= b && (abs(arr[i] - arr[k])) <= c)
//                     x++;
//             }
//         }
//     }
//     return x;
// }