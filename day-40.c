// 2206. Divide Array Into Equal Pairs
// Easy
// Topics
// Companies
// Hint
// You are given an integer array nums consisting of 2 * n integers.

// You need to divide nums into n pairs such that:

// Each element belongs to exactly one pair.
// The elements present in a pair are equal.
// Return true if nums can be divided into n pairs, otherwise return false.



// bool divideArray(int* nums, int numsSize) {
//     int *visited = (int *)calloc(501,sizeof(int));
//     int i;
//     for(i=0;i<numsSize;i++) {
//         visited[nums[i]]+=1;
//     }
//     for(i=0;i<=500;i++){
//         if( visited[i] % 2!=0) return false;
//     }
//     return true;
// }