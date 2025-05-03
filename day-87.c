// 1007. Minimum Domino Rotations For Equal Row
// Medium
// Topics
// Companies
// In a row of dominoes, tops[i] and bottoms[i] represent the top and bottom halves of the ith domino. (A domino is a tile with two numbers from 1 to 6 - one on each half of the tile.)

// We may rotate the ith domino, so that tops[i] and bottoms[i] swap values.

// Return the minimum number of rotations so that all the values in tops are the same, or all the values in bottoms are the same.

// If it cannot be done, return -1.





// #define min(a,b) (a < b ? a : b)
// #define max(a,b) (a > b ? a : b)

// int minDominoRotations(int* tops, int topsSize, int* bottoms, int bottomsSize) {
//     int val1TopCount = 1;
//     int val1BottomCount = 0;
//     int val2TopCount = 0;
//     int val2BottomCount = 1;

//     int i;
//     int skip1 = 0;
//     int skip2 = 0;
//     for(i = 1; i < topsSize; i++) {
//         if(!(tops[i] == tops[0]) && !(bottoms[i] == tops[0])) {
//             skip1 = 1;
//         }
//         if(!skip1) {
//             val1TopCount += tops[i] == tops[0];
//             val1BottomCount += bottoms[i] == tops[0];
//         }
//         if(!(tops[i] == bottoms[0]) && !(bottoms[i] == bottoms[0])) {
//             skip2 = 1;
//         }
//         if(!skip2) {
//             val2TopCount += tops[i] == bottoms[0];
//             val2BottomCount += bottoms[i] == bottoms[0];
//         }
//         if(skip1 && skip2) {
//             return -1;
//         } 
//     }

//     return min(topsSize - max(val1TopCount, val1BottomCount), topsSize - max(val2TopCount, val2BottomCount));
// }