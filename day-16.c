// #1415. The k-th Lexicographical String of All Happy Strings of Length n

// A happy string is a string that:

// consists only of letters of the set ['a', 'b', 'c'].
// s[i] != s[i + 1] for all values of i from 1 to s.length - 1 (string is 1-indexed).
// For example, strings "abc", "ac", "b" and "abcbabcbcb" are all happy strings and strings "aa", "baa" and "ababbc" are not happy strings.

// Given two integers n and k, consider a list of all happy strings of length n sorted in lexicographical order.

// Return the kth string of this list or return an empty string if there are less than k happy strings of length n.




// char *getHappyString(int n, int k) {
//     const char next[3][2] = {{'b', 'c'}, {'a', 'c'}, {'a', 'b'}};
//     const int pow2[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
//     char *rs = calloc(n + 1, sizeof(char));
//     if (k <= 3 * pow2[n - 1]) { 
//       rs[0] = 'a' + (--k) / pow2[n - 1];
//       for (int i = 1; i < n; i++) 
//         rs[i] = next[rs[i - 1] - 'a'][k % pow2[n - i] / pow2[n - i - 1]];
//     }
//     return rs;
//   }