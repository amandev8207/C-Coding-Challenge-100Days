// #2965. Find Missing and Repeated Values

// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. Each integer appears exactly once except a which appears twice and b which is missing. The task is to find the repeating and missing numbers a and b.

// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.




// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */

//  int* findMissingAndRepeatedValues(int** grid, int gridSize, int* gridColSize, int* returnSize) {
//     int n = gridSize;
//     int totalElements = n * n;
//     int* result = (int*)malloc(2 * sizeof(int));
//     int* count = (int*)calloc(totalElements + 1, sizeof(int));
    
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < gridColSize[i]; ++j) {
//             count[grid[i][j]]++;
//         }
//     }
    
//     for (int i = 1; i <= totalElements; ++i) {
//         if (count[i] == 2) {
//             result[0] = i;  
//         }
//         if (count[i] == 0) {
//             result[1] = i; 
//         }
//     }
    
//     free(count);
//     *returnSize = 2;
//     return result;
// }