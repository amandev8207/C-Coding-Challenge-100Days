// 2033. Minimum Operations to Make a Uni-Value Grid
// Medium
// Topics
// Companies
// Hint
// You are given a 2D integer grid of size m x n and an integer x. In one operation, you can add x to or subtract x from any element in the grid.

// A uni-value grid is a grid where all the elements of it are equal.

// Return the minimum number of operations to make the grid uni-value. If it is not possible, return -1.






// #define MAX_VALUE   10000

// int minOperations(int** grid, int gridSize, int* gridColSize, int x) {
//     short sSize = 1 + MAX_VALUE/x;
//     int anCount[sSize];
//     memset(anCount, 0, sSize*sizeof(int));

//     // parse input grid
//     int* pnMax = anCount;
//     int* pnMin = anCount + sSize;
//     short sRemainder = **grid % x;
//     while(gridSize--)
//     {
//         int nGridColSize = *gridColSize;
//         int* pnGrid = *(grid++);
//         while(nGridColSize--)
//         {
//             if(sRemainder != *pnGrid % x) return -1;

//             int* pnCount = anCount + (*(pnGrid++)/x);
//             if(pnMax < pnCount) pnMax = pnCount;
//             if(pnCount < pnMin) pnMin = pnCount;

//             (*pnCount)++;
//         }
//     }

//     // check all pre-counts
//     int nLeft = 0, nRet = 0;
//     int* pnCount = pnMin;
//     while(pnCount < pnMax)
//     {
//         nLeft += *(pnCount++);
//         nRet += nLeft;
//     }

//     // sliding from right to left again and find to optimize operations
//     int nRight = 0, nTmp = nRet;
//     while(pnMin < pnCount)
//     {
//         nTmp -= nLeft;
//         nLeft -= *(--pnCount);
//         nRight += *(pnMax--);
//         nTmp += nRight;
//         if(nTmp < nRet) nRet = nTmp;
//     }

//     return nRet;
// }