// 3306. Count of Substrings Containing Every Vowel and K Consonants II
// Solved
// Medium
// Topics
// Companies
// Hint
// You are given a string word and a non-negative integer k.

// Return the total number of substrings of word that contain every vowel ('a', 'e', 'i', 'o', and 'u') at least once and exactly k consonants.



// int numberOfSubstrings(char* s) {
//     int res = 0;
//     int* map = calloc(3, sizeof(int));
//     int appear = 0;
//     int start = 0, end = 0, length = strlen(s);
//     while(end < length){
//         map[s[end]-'a'] ++;
//         if(map[s[end]-'a'] == 1)
//             appear ++;
//         while(appear == 3){
//             res += (length-end);
//             map[s[start]-'a'] --;
//             if(map[s[start]-'a'] == 0)
//                 appear --;
//             start ++;
//         }
//         end ++;
//     }
//     free(map);
//     return res;
// }