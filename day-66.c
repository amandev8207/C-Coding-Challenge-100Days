// 3272. Find the Count of Good Integers
// Hard
// Topics
// Companies
// Hint
// You are given two positive integers n and k.

// An integer x is called k-palindromic if:

// x is a palindrome.
// x is divisible by k.
// An integer is called good if its digits can be rearranged to form a k-palindromic integer. For example, for k = 2, 2020 can be rearranged to form the k-palindromic integer 2002, whereas 1010 cannot be rearranged to form a k-palindromic integer.

// Return the count of good integers containing n digits.

// Note that any integer must not have leading zeros, neither before nor after rearrangement. For example, 1010 cannot be rearranged to form 101.





// typedef long long ll;

// #define HASH_SIZE (1 << 17)
// static unsigned long long visTable[HASH_SIZE];

// static inline unsigned int hashFunc(unsigned long long key) {
//     return (unsigned int)(key % HASH_SIZE);
// }

// bool checkAndInsert(unsigned long long key) {
//     unsigned int idx = hashFunc(key);
//     while (true) {
//         if (visTable[idx] == 0) {
//             visTable[idx] = key;
//             return true;
//         } else if (visTable[idx] == key) {
//             return false;
//         }
//         idx = (idx + 1) & (HASH_SIZE - 1);
//     }
// }

// ll fact[11];
// void initFact(){
//     fact[0] = 1;
//     for (int i=1; i<=10; i++){
//         fact[i] = fact[i-1]*i;
//     }
// }

// ll TotalPermutations(int freq[10], int n) {
//     ll total = fact[n];
//     for (int d = 0; d < 10; d++){
//         total /= fact[freq[d]];
//     }
//     return total;
// }

// ll PermutationsLeadingZero(int freq[10], int n) {
//     if (freq[0] == 0) return 0;
//     int copy[10];
//     memcpy(copy, freq, sizeof(int)*10);
//     copy[0]--;
//     ll total = fact[n-1];
//     for (int d = 0; d < 10; d++){
//         total /= fact[copy[d]];
//     }
//     return total;
// }

// ll calcMultiset(int freq[10], int n) {
//     ll tot = TotalPermutations(freq, n);
//     ll lz = PermutationsLeadingZero(freq, n);
//     return tot - lz;
// }

// unsigned long long encodeFreq(int freq[10]) {
//     unsigned long long code = 0;
//     for (int d = 0; d < 10; d++){
//         code |= ((unsigned long long)freq[d] & 0xFULL) << (4*d);
//     }
//     return code;
// }

// ll vectorToNumber(int *num, int n) {
//     ll ans = 0;
//     for (int i = 0; i < n; i++){
//         ans = ans * 10 + num[i];
//     }
//     return ans;
// }

// ll globalAns = 0;

// void generatePalindrome(int *num, int left, int right, int n, int k) {
//     if (left > right) {
//         ll candidate = vectorToNumber(num, n);
//         if (candidate % k == 0) {
//             int freq[10] = {0};
//             for (int i = 0; i < n; i++){
//                 freq[num[i]]++;
//             }
//             unsigned long long code = encodeFreq(freq);
//             if (checkAndInsert(code)) {
//                 globalAns += calcMultiset(freq, n);
//             }
//         }
//         return;
//     }
//     int start = (left == 0) ? 1 : 0;
//     for (int digit = start; digit <= 9; digit++){
//         num[left] = digit;
//         num[right] = digit;
//         generatePalindrome(num, left+1, right-1, n, k);
//     }
// }

// ll countGoodIntegers(int n, int k) {
//     globalAns = 0;
//     memset(visTable, 0, sizeof(visTable));
//     initFact();
//     int *num = (int*)malloc(sizeof(int)*n);
//     generatePalindrome(num, 0, n-1, n, k);
//     free(num);
//     return globalAns;
// }