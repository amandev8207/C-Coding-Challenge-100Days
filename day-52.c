// 2818. Apply Operations to Maximize Score
// Hard
// Topics
// Companies
// Hint
// You are given an array nums of n positive integers and an integer k.

// Initially, you start with a score of 1. You have to maximize your score by applying the following operation at most k times:

// Choose any non-empty subarray nums[l, ..., r] that you haven't chosen previously.
// Choose an element x of nums[l, ..., r] with the highest prime score. If multiple such elements exist, choose the one with the smallest index.
// Multiply your score by x.
// Here, nums[l, ..., r] denotes the subarray of nums starting at index l and ending at the index r, both ends being inclusive.

// The prime score of an integer x is equal to the number of distinct prime factors of x. For example, the prime score of 300 is 3 since 300 = 2 * 2 * 3 * 5 * 5.

// Return the maximum possible score after applying at most k operations.

// Since the answer may be large, return it modulo 109 + 7.





// #define MOD (int)(1e9 + 7)

// typedef struct unit {
//   int v;       // val
//   int s;       // score
//   int l;       // left bound index
//   int r;       // right bound index
//   long long n; // valid range count
// } unit;

// int getScore(int v) {
//   const int primeList[65] = {
//       2,   3,   5,   7,   11,  13,  17,  19,  23,  29,  31,  37,  41,
//       43,  47,  53,  59,  61,  67,  71,  73,  79,  83,  89,  97,  101,
//       103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167,
//       173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239,
//       241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313};
//   int score = 0, i = 0;
//   while (v > 1) {
//     if (v % primeList[i] == 0) {
//       score++;
//       while (v % primeList[i] == 0)
//         v /= primeList[i];
//     }
//     i++;
//     if (i == 65 && v != 1) { // prime factor > 313
//       score++;
//       break;
//     }
//   }
//   return score;
// }

// int cmpValDesc(const void *a, const void *b) {
//   return (*(unit *)b).v - (*(unit *)a).v;
// }

// long long power(long long base, int exp) {
//   long long rs = 1;
//   while (exp) {
//     if (exp % 2 == 1)
//       rs = rs * base % MOD;
//     base = base * base % MOD;
//     exp /= 2;
//   }
//   return rs;
// }

// int maximumScore(int *nums, int numsSize, int k) {
//   unit list[numsSize];
//   // calculate prime score for each num
//   for (int i = 0; i < numsSize; i++) {
//     list[i].v = nums[i];
//     list[i].s = getScore(nums[i]);
//   }
//   // find left & right bound and calculate valid range cnt for each num, using
//   // monotonic stack
//   int monostack[numsSize + 1], itop = 0;
//   // left bound: l<i, list[l].s >= list[i].s
//   monostack[0] = -1;
//   for (int i = 0; i < numsSize; i++) {
//     while (itop > 0 && list[monostack[itop]].s < list[i].s)
//       itop--; // pop stack
//     list[i].l = monostack[itop];
//     monostack[++itop] = i; // push stack
//   }
//   // right bound: i<r, list[i].s < list[r].s
//   // valid range cnt = (i-l)*(r-i)
//   itop = 0, monostack[0] = numsSize;
//   for (int i = numsSize - 1; i >= 0; i--) {
//     while (itop > 0 && list[monostack[itop]].s <= list[i].s)
//       itop--;
//     list[i].r = monostack[itop];
//     monostack[++itop] = i;
//     // calculate range
//     list[i].n = (long long)(i - list[i].l) * (list[i].r - i);
//   }

//   // quick sort list by val in descending order
//   qsort(list, numsSize, sizeof(unit), cmpValDesc);

//   // calculate result
//   long long rs = 1;
//   int i = 0;
//   while (k) {
//     if (list[i].n <= k) {
//       rs = rs * power(list[i].v, list[i].n) % MOD;
//       k -= list[i].n;
//       i++;
//     } else {
//       rs = rs * power(list[i].v, k) % MOD;
//       k = 0;
//     }
//   }
//   return (int)rs;
// }