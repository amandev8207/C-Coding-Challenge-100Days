// #3356. Zero Array Transformation II

// You are given an integer array nums of length n and a 2D array queries where queries[i] = [li, ri, vali].

// Each queries[i] represents the following action on nums:

// Decrement the value at each index in the range [li, ri] in nums by at most vali.
// The amount by which each value is decremented can be chosen independently for each index.
// A Zero Array is an array with all its elements equal to 0.

// Return the minimum possible non-negative value of k, such that after processing the first k queries in sequence, nums becomes a Zero Array. If no such k exists, return -1.

// #include <stdlib.h>

// int minZeroArray(int *nums, int numsSize, int **queries, int queriesSize, int *queriesColSize)
// {
//   int *differs = (int *)calloc(numsSize, sizeof(int));

//   int intervalValue = 0;
//   int numIndex = 0, queriesIndex = 0, top = 0;

//   while (numIndex < numsSize)
//   {
//     if (nums[numIndex] <= intervalValue)
//     {
//       numIndex++;
//       intervalValue += numIndex != numsSize ? differs[numIndex] : 0;
//       continue;
//     }
//     if (queriesIndex == queriesSize) break;
//     while (queriesIndex < queriesSize && nums[numIndex] > intervalValue)
//     {
//       differs[queries[queriesIndex][0]] += queries[queriesIndex][2];
//       if (queries[queriesIndex][1] != numsSize - 1)
//         differs[queries[queriesIndex][1] + 1] -= queries[queriesIndex][2];
//       if (queries[queriesIndex][0] <= numIndex && numIndex <= queries[queriesIndex][1])
//       {
//         intervalValue += queries[queriesIndex][2];
//       }
//       queriesIndex++;
//     }
//   }

//   if (numIndex == numsSize)
//     return queriesIndex;
//   else
//     return -1;
// }