// #3160. Find the Number of Distinct Colors Among the Balls

// You are given an integer limit and a 2D array queries of size n x 2.

// There are limit + 1 balls with distinct labels in the range [0, limit]. Initially, all balls are uncolored. For every query in queries that is of the form [x, y], you mark ball x with the color y. After each query, you need to find the number of distinct colors among the balls.

// Return an array result of length n, where result[i] denotes the number of distinct colors after ith query.

// Note that when answering a query, lack of a color will not be considered as a color



// #include <stdlib.h>
// // hash data structure implementation
// typedef struct Hash {
//   int *key;
//   int *val;
//   int cap;
// } Hash;
// // alloc a new hash instance
// Hash *hashNew(int cap) {
//   Hash *ins = malloc(sizeof(Hash));
//   *ins = (Hash){calloc(cap, sizeof(int)), calloc(cap, sizeof(int)), cap};
//   return ins;
// }
// // free hash instance
// void hashFree(Hash *ins) {
//   free(ins->key);
//   free(ins->val);
//   free(ins);
// }
// // get k-v index in hash array, implementing hash function
// int hashGetId(Hash *ins, int k) {
//   int id = k % ins->cap;                      // hash function
//   while (ins->key[id] && ins->key[id] != k) { // collision chcek
//     if (++id == ins->cap)
//       id = 0;
//   }
//   ins->key[id] = k;
//   return id;
// }
// // set key-val pair
// void hashSetKV(Hash *ins, int k, int v) {
//   int id = hashGetId(ins, k);
//   ins->val[id] = v;
// }
// // get val
// int hashGetV(Hash *ins, int k) {
//   int id = hashGetId(ins, k);
//   return ins->val[id];
// }
// // increase val by 1, return former val
// int hashIncV(Hash *ins, int k) {
//   int id = hashGetId(ins, k);
//   return ins->val[id]++;
// }
// // decrease val by 1, return former val
// int hashDecV(Hash *ins, int k) {
//   int id = hashGetId(ins, k);
//   return ins->val[id]--;
// }
// int *queryResults(int limit, int **queries, int queriesSize,
//                   int *queriesColSize, int *returnSize) {
//   int *rs = malloc(queriesSize * sizeof(int));
//   *returnSize = queriesSize;
//   int cap = queriesSize * 2;
//   Hash *hashBall = hashNew(cap);  // k:ball, v:color
//   Hash *hashColor = hashNew(cap); // k:color, v:color cnt
//   int cntDistinct = 0;
//   for (int i = 0; i < queriesSize; i++) {
//     int ball = queries[i][0], newColor = queries[i][1],
//         oldColor = hashGetV(hashBall, ball),
//         newColorCnt = hashGetV(hashColor, newColor),
//         oldColorCnt = hashGetV(hashColor, oldColor);
//     // 1. remove old color
//     if (oldColor == 0) { // ball is not colored
//       ;
//     } else if (oldColorCnt > 1) { // colored, more than one ball this color
//       hashDecV(hashColor, oldColor);
//     } else if (oldColorCnt == 1) { // colored, only this ball this color
//       cntDistinct--;
//       hashDecV(hashColor, oldColor);
//     }
//     // 2. add new color
//     newColorCnt = hashGetV(
//         hashColor, newColor); // update color cnt(in case newColor == oldColor)
//     if (newColorCnt == 0) { // new color is distinct
//       cntDistinct++;
//     }
//     hashSetKV(hashBall, ball, newColor);
//     hashIncV(hashColor, newColor);
//     // update result array
//     rs[i] = cntDistinct;
//   }
//   hashFree(hashBall);
//   hashFree(hashColor);
//   return rs;
// }