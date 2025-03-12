// #2529. Maximum Count of Positive Integer and Negative Integer

// Given an array nums sorted in non-decreasing order, return the maximum between the number of positive integers and the number of negative integers.

// In other words, if the number of positive integers in nums is pos and the number of negative integers is neg, then return the maximum of pos and neg.
// Note that 0 is neither positive nor negative.




// int binSearch(int *a, int lo, int hi, int val) {
//     while(lo <= hi) {
//         int mid = (lo + hi) >> 1;
//         if (a[mid] >= val) hi = mid - 1;
//         else lo = mid + 1;
//     }
//     return lo;
// }

// int maximumCount(int* nums, int numsSize) {
//     int negCount = binSearch(nums, 0, numsSize-1, 0);
//     int posIndex = binSearch(nums, negCount, numsSize-1, 1);
//     int posCount = numsSize - posIndex;
//     if (posCount < negCount) return negCount;
//     return posCount;
// }