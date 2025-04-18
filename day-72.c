// 38. Count and Say
// Medium
// Topics
// Companies
// Hint
// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the run-length encoding of countAndSay(n - 1).
// Run-length encoding (RLE) is a string compression method that works by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string "3322251" we replace "33" with "23", replace "222" with "32", replace "5" with "15" and replace "1" with "11". Thus the compressed string becomes "23321511".

// Given a positive integer n, return the nth element of the count-and-say sequence.







// char* countAndSay(int n) {
//     if (n == 1) {
//         char* base = (char*)malloc(2);
//         strcpy(base, "1");
//         return base;
//     }

//     char* prev = countAndSay(n - 1);
//     int len = strlen(prev);
//     char* result = (char*)malloc(len * 2 + 1); 
//     int resIndex = 0;

//     for (int i = 0; i < len;) {
//         char currentChar = prev[i];
//         int count = 0;
//         while (i < len && prev[i] == currentChar) {
//             count++;
//             i++;
//         }
        
//         result[resIndex++] = count + '0';
        
//         result[resIndex++] = currentChar;
//     }

//     result[resIndex] = '\0'; 
//     free(prev); 
//     return result;
// }