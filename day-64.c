// 2999. Count the Number of Powerful Integers
// Hard
// Topics
// Companies
// Hint
// You are given three integers start, finish, and limit. You are also given a 0-indexed string s representing a positive integer.

// A positive integer x is called powerful if it ends with s (in other words, s is a suffix of x) and each digit in x is at most limit.

// Return the total number of powerful integers in the range [start..finish].

// A string x is a suffix of a string y if and only if x is a substring of y that starts from some index (including 0) in y and extends to the index y.length - 1. For example, 25 is a suffix of 5125 whereas 512 is not.











// long long power(long long base, int exp) {
//     long long rs = 1;
//     while (exp--)
//       rs *= base;
//     return rs;
//   }
  
//   int digitNum(long long num) {
//     int k = 0;
//     while (num) {
//       k++;
//       num /= 10;
//     }
//     return k;
//   }
  
//   long long count(long long num, int limit, long long suffix) {
//     long long rs = 0, divide = power(10, digitNum(suffix)), rm = num % divide;
  
//     num /= divide;
//     int num_digit = digitNum(num), nums[16] = {0};
//     for (int i = 0; i < num_digit; i++) {
//       nums[i] = num % 10;
//       num /= 10;
//     }
  
//     for (int i = num_digit - 1; i >= 0; i--) {
//       if (nums[i] <= limit) {
//         rs += nums[i] * power(limit + 1, i);
//       } else {
//         rs += (limit + 1) * power(limit + 1, i);
//         return rs;
//       }
//     }
  
//     rs += nums[0] <= limit && rm >= suffix;
  
//     return rs;
//   }
  
//   long long numberOfPowerfulInt(long long start, long long finish, int limit,
//                                 char *s) {
//     long long suffix = atoll(s);
//     return count(finish, limit, suffix) - count(start - 1, limit, suffix);
//   }