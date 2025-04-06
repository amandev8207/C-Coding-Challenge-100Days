// 368. Largest Divisible Subset
// Medium
// Topics
// Companies
// Given a set of distinct positive integers nums, return the largest subset answer such that every pair (answer[i], answer[j]) of elements in this subset satisfies:

// answer[i] % answer[j] == 0, or
// answer[j] % answer[i] == 0
// If there are multiple solutions, return any of them.




// typedef struct unit {
//     int cnt;
//     int formerIndex;
//   } unit;
  
//   int cmpAsc(const void *a, const void *b) { return *(int *)a - *(int *)b; }
  
//   int *largestDivisibleSubset(int *nums, int numsSize, int *returnSize) {
//     qsort(nums, numsSize, sizeof(int), cmpAsc);
  
//     unit list[numsSize];
//     list[0] = (unit){1, -1};
  
//     int maxCnt = 0, endIndex;
  
//     for (int i = 0; i < numsSize; i++) {
//       int currCnt = 0;
//       for (int j = 0; j < i; j++)
//         if (nums[i] % nums[j] == 0 && list[j].cnt > currCnt) {
//           currCnt = list[j].cnt;
//           list[i].formerIndex = j;
//         }
//       list[i].cnt = ++currCnt;
  
//       if (currCnt > maxCnt) {
//         maxCnt = currCnt;
//         endIndex = i;
//       }
//     }
  
//     int *rs = malloc(maxCnt * sizeof(int));
//     for (int i = maxCnt - 1, j = endIndex; i >= 0; i--, j = list[j].formerIndex)
//       rs[i] = nums[j];
  
//     *returnSize = maxCnt;
//     return rs;
//   }