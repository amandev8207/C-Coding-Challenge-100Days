// #2523. Closest Prime Numbers in Range

// Given two positive integers left and right, find the two integers num1 and num2 such that:

// left <= num1 < num2 <= right .
// Both num1 and num2 are prime numbers.
// num2 - num1 is the minimum amongst all other pairs satisfying the above conditions.
// Return the positive integer array ans = [num1, num2]. If there are multiple pairs satisfying these conditions, return the one with the smallest num1 value. If no such numbers exist, return [-1, -1].





// int* closestPrimes(int left, int right, int* returnSize) {
//     //Sieve of Eratosthenes Algorithm

//     *returnSize = 2;
//     int* result = malloc(sizeof(int) * 2);
//     result[0] = -1;
//     result[1] = -1;

//     bool* arr = malloc(sizeof(bool) * (right + 1));
//     memset(arr, true, sizeof(bool) * (right + 1));
//     arr[0]=false;
//     arr[1]=false;

//     for (int i = 2; i * i <= right; i++) {
//         if (arr[i]) {
//             for (int j = i * i; j <= right; j += i) {
//                 arr[j] = false;
//             }
//         }
//     }

//     int* prime = malloc(sizeof(int) * (right - left + 1));
//     int index = 0;
//     for (int i = left; i <= right; i++) {
//         if (arr[i]) {
//             prime[index++] = i;
//         }
//     }
//     free(arr);

//     if (index < 2) {
//         free(prime);
//         return result;
//     }

//     int min = INT_MAX;
//     for (int i = 1; i < index; i++) {
//         int diff = prime[i] - prime[i - 1];
//         if (min > diff) {
//             min = diff;
//             result[0] = prime[i - 1];
//             result[1] = prime[i];
//         }
//     }
//     free(prime);
//     return result;
// }