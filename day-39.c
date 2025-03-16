// 2594. Minimum Time to Repair Cars
// Medium
// Topics
// Companies
// Hint
// You are given an integer array ranks representing the ranks of some mechanics. ranksi is the rank of the ith mechanic. A mechanic with a rank r can repair n cars in r * n2 minutes.

// You are also given an integer cars representing the total number of cars waiting in the garage to be repaired.

// Return the minimum time taken to repair all the cars.

// Note: All the mechanics can repair the cars simultaneously.




// #include <stdbool.h>
// #include <stdio.h>
// #include <math.h>

// bool CanRepair(int ranks[], int ranksSize, int cars, long long mid) {
//     long long totalSize = 0;
//     for (int i = 0; i < ranksSize; i++) {
//         totalSize += (long long)(sqrt((double)mid / ranks[i]));
//         if (totalSize >= cars) {
//             return true;
//         }
//     }
//     return totalSize >= cars;
// }

// long long repairCars(int* ranks, int ranksSize, int cars) {
//     long long low = 0;
//     int maxt = 0;
//     for (int i = 0; i < ranksSize; i++) {
//         if (ranks[i] > maxt) {
//             maxt = ranks[i];
//         }
//     }
    
//     // Set high as the worst-case time: when the mechanic with the highest rank repairs all cars.
//     long long high = (long long)maxt * cars * (long long)cars;
//     long long mint = 0;
    
//     while (low <= high) {
//         // Compute mid safely to avoid integer overflow.
//         long long mid = low + (high - low) / 2;
//         if (CanRepair(ranks, ranksSize, cars, mid)) {
//             mint = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }
//     return mint;
// }