// 2918. Minimum Equal Sum of Two Arrays After Replacing Zeros
// Medium
// Topics
// Companies
// Hint
// You are given two arrays nums1 and nums2 consisting of positive integers.

// You have to replace all the 0's in both arrays with strictly positive integers such that the sum of elements of both arrays becomes equal.

// Return the minimum equal sum you can obtain, or -1 if it is impossible.




// long long minSum(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     long long s1 = 0, z1 = 0, s2 = 0, z2 = 0;

//     for(int i = 0; i < nums1Size; i++) {
//         z1 += nums1[i]? 0 : 1;
//         s1 += nums1[i];
//     }
//     for(int i = 0; i < nums2Size; i++) {
//         z2 += nums2[i]? 0 : 1;
//         s2 += nums2[i];
//     }

//     if(s2 + z2 > s1 + z1) {
//         int tmp = s1;
//         s1 = s2;
//         s2 = tmp;
//         tmp = z1;
//         z1 = z2;
//         z2 = tmp;
//     }

//     if(s1 + z1 - s2 != 0 && z2 == 0) return -1;
//     return s1 + z1;
// }