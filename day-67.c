// 1922. Count Good Numbers
// Medium
// Topics
// Companies
// Hint
// A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

// For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
// Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

// A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.










// #define MOD 1000000000 + 7

// long long binPow(long long a, long long b) {
//     long long ans = 1;
//     while (b > 0) {
//         if (b & 1) {
//             ans *= a;
//             ans %= MOD;
//         }
//         a *= a;
//         a %= MOD;
//         b >>= 1;
//     }

//     return ans;
// }

// int countGoodNumbers(long long n) {
//     long long odd = n / 2;
//     long long even = (n + 1) / 2;

//     long long ans = 1;
//     ans *= binPow(5, even);
//     ans %= MOD;
//     ans *= binPow(4, odd);
//     ans %= MOD;

//     return ans;
// }