// 2900. Longest Unequal Adjacent Groups Subsequence I
// Easy
// Topics
// Companies
// Hint
// You are given a string array words and a binary array groups both of length n, where words[i] is associated with groups[i].

// Your task is to select the longest alternating subsequence from words. A subsequence of words is alternating if for any two consecutive strings in the sequence, their corresponding elements in the binary array groups differ. Essentially, you are to choose strings such that adjacent elements have non-matching corresponding bits in the groups array.

// Formally, you need to find the longest subsequence of an array of indices [0, 1, ..., n - 1] denoted as [i0, i1, ..., ik-1], such that groups[ij] != groups[ij+1] for each 0 <= j < k - 1 and then find the words corresponding to these indices.

// Return the selected subsequence. If there are multiple answers, return any of them.

// Note: The elements in words are distinct.






// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */

// char** getLongestSubsequence(char** words, int wordsSize, int* groups,
//                              int groupsSize, int* returnSize) {

//     char** res = (char**)malloc(sizeof(char*) * (100));
//     *(res) = *(words);
//     uint8_t currIdx = 1;
//     for (uint8_t i = 1; i < wordsSize; ++i) {
//         if (groups[i] == groups[i - 1]) {
//             continue;
//         }
//         *(res + currIdx) = *(words + i);
//         ++currIdx;
//     }
//     *(returnSize) = currIdx;
//     return res;
    
// }