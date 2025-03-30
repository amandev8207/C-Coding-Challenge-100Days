// 763. Partition Labels
// Medium
// Topics
// Companies
// Hint
// You are given a string s. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string "ababcc" can be partitioned into ["abab", "cc"], but partitions such as ["aba", "bcc"] or ["ab", "ab", "cc"] are invalid.

// Note that the partition is done so that after concatenating all the parts in order, the resultant string should be s.

// Return a list of integers representing the size of these parts.






// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// #include <stdlib.h>
// #include <stdbool.h>
// #include <string.h>
// #include <stdint.h>

// int *partitionLabels(const char *s, int *returnSize) {
//     int lastIndex[26];
//     memset(lastIndex, -1, sizeof(lastIndex));
    
//     // Compute the last occurrence of each character
//     for (int i = 0; s[i]; i++) {
//         lastIndex[s[i] - 'a'] = i;
//     }
    
//     int *result = (int *)malloc(sizeof(int) * 26); // Max 26 partitions
//     int count = 0, start = 0, maxEnd = 0;
    
//     for (int i = 0; s[i]; i++) {
//         if (lastIndex[s[i] - 'a'] > maxEnd) {
//             maxEnd = lastIndex[s[i] - 'a'];
//         }
        
//         if (i == maxEnd) { // We reached the end of a partition
//             result[count++] = i - start + 1;
//             start = i + 1;
//         }
//     }
    
//     *returnSize = count;
//     return result;
// }