// 2145. Count the Hidden Sequences
// Medium
// Topics
// Companies
// Hint
// You are given a 0-indexed array of n integers differences, which describes the differences between each pair of consecutive integers of a hidden sequence of length (n + 1). More formally, call the hidden sequence hidden, then we have that differences[i] = hidden[i + 1] - hidden[i].

// You are further given two integers lower and upper that describe the inclusive range of values [lower, upper] that the hidden sequence can contain.

// For example, given differences = [1, -3, 4], lower = 1, upper = 6, the hidden sequence is a sequence of length 4 whose elements are in between 1 and 6 (inclusive).
// [3, 4, 1, 5] and [4, 5, 2, 6] are possible hidden sequences.
// [5, 6, 3, 7] is not possible since it contains an element greater than 6.
// [1, 2, 3, 4] is not possible since the differences are not correct.
// Return the number of possible hidden sequences there are. If there are no possible sequences, return 0.






// int numberOfArrays(int *differences, int differencesSize, int lower,
//     int upper) {
// long long curr = 0, min = 0, max = 0; // current, min, max offsets

// for (int i = 0; i < differencesSize; i++) {
// curr += differences[i];
// if (curr < min)
// min = curr;
// else if (curr > max)
// max = curr;
// }

// int rs = (upper - lower) - (max - min) + 1;
// return rs > 0 ? rs : 0;
// }