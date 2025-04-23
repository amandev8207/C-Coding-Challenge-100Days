// 1399. Count Largest Group
// Easy
// Topics
// Companies
// Hint
// You are given an integer n.

// Each number from 1 to n is grouped according to the sum of its digits.

// Return the number of groups that have the largest size.







// /* The largest digit sum is 9 + 9 + 9 + 9 beacuse the largest
//  * number is 10000, and 9999 would be the number has largest
//  * digit sum. 
//  */
// #define MAX_DIGIT_SUM 36

// int digit_sums[MAX_DIGIT_SUM + 1];

// /* This function calculate the sum of each digit of number n */
// int get_digit_sum(int n) 
// {
//     int sum = 0;
//     while (n) {
//         sum += n % 10;
//         n /= 10;
//     }

//     return sum;
// }

// int countLargestGroup(int n) 
// {
//     /* Init the digit_sums to zeros, this is counter of different digit sums */
//     memset(digit_sums, 0, (MAX_DIGIT_SUM + 1) * sizeof(int));

//     /* Iterate each number from 1 to n */
//     for (int i = 1; i <= n; ++i) {
//         int digit_sum = get_digit_sum(i);
//         digit_sums[digit_sum]++;
//     }

//     /* Find the number of groups that have the largest size */
//     int max_size = 0;
//     int counter = 0;

//     for (int i = 0; i <= MAX_DIGIT_SUM; ++i) {
//         /* When find the larger size, resetthe max_size and its counter */
//         if (digit_sums[i] > max_size) {
//             max_size = digit_sums[i];
//             counter = 0;
//         }

//         counter += (digit_sums[i] == max_size);
//     }

//     return counter;
// }