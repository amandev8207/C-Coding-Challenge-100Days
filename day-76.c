// 2338. Count the Number of Ideal Arrays
// Solved
// Hard
// Topics
// Companies
// Hint
// You are given two integers n and maxValue, which are used to describe an ideal array.

// A 0-indexed integer array arr of length n is considered ideal if the following conditions hold:

// Every arr[i] is a value from 1 to maxValue, for 0 <= i < n.
// Every arr[i] is divisible by arr[i - 1], for 0 < i < n.
// Return the number of distinct ideal arrays of length n. Since the answer may be very large, return it modulo 109 + 7.









// #define MOD 1000000007

// int dp[10001][15];
// long long fact[10005], inv[10005];

// // Fast exponentiation: (a^b) % MOD
// long long power(long long a, int b) {
//     long long res = 1;
//     while (b > 0) {
//         if (b % 2) res = (res * a) % MOD;
//         a = (a * a) % MOD;
//         b /= 2;
//     }
//     return res;
// }

// // Combination C(a, b) = a! / (b! * (a - b)!)
// long long comb(int a, int b) {
//     if (b > a) return 0;
//     return fact[a] * inv[b] % MOD * inv[a - b] % MOD;
// }

// // Precompute factorials and inverse factorials
// void precompute(int n) {
//     fact[0] = inv[0] = 1;
//     for (int i = 1; i <= n; i++) fact[i] = (fact[i - 1] * i) % MOD;
//     for (int i = 1; i <= n; i++) inv[i] = power(fact[i], MOD - 2);
// }

// int idealArrays(int n, int maxValue) {
//     precompute(n);
//     int maxLen = n < 14 ? n : 14;

//     // Clear dp
//     for (int i = 1; i <= maxValue; i++)
//         for (int j = 1; j <= maxLen; j++)
//             dp[i][j] = 0;

//     // Initialize: length 1 sequences
//     for (int i = 1; i <= maxValue; i++)
//         dp[i][1] = 1;

//     // Build dp table
//     for (int len = 2; len <= maxLen; len++) {
//         for (int i = 1; i <= maxValue; i++) {
//             for (int j = i * 2; j <= maxValue; j += i) {
//                 dp[j][len] = (dp[j][len] + dp[i][len - 1]) % MOD;
//             }
//         }
//     }

//     // Calculate result
//     long long ans = 0;
//     for (int len = 1; len <= maxLen; len++) {
//         for (int i = 1; i <= maxValue; i++) {
//             ans = (ans + dp[i][len] * comb(n - 1, len - 1)) % MOD;
//         }
//     }

//     return (int)ans;
// }