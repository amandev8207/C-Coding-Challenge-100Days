// 790. Domino and Tromino Tiling
// Medium
// Topics
// Companies
// You have two types of tiles: a 2 x 1 domino shape and a tromino shape. You may rotate these shapes.


// Given an integer n, return the number of ways to tile an 2 x n board. Since the answer may be very large, return it modulo 109 + 7.

// In a tiling, every square must be covered by a tile. Two tilings are different if and only if there are two 4-directionally adjacent cells on the board such that exactly one of the tilings has both squares occupied by a tile




// #define CONSTRAINT 1001
// #define MODULO     1000000007

// /**
//  * NOTE: pattern => 0, 1, 2, 5, 11, 24, 53, 117, 258, 569, 1255, ...
//  *       formula => f(n) = f(n-1)*2 + f(n-3) | n >= 4
//  */

// int recursiveDP(int* mem, int n) {
//     if(mem[n]){ return mem[n]; }

//     int result=mem[n-1]?(mem[n-1]*2)%MODULO
//         :(recursiveDP(mem, n-1)*2)%MODULO;
//     result=mem[n-3]?(result+mem[n-3])%MODULO
//         :(result+recursiveDP(mem, n-3))%MODULO;

//     return mem[n]=result;
// }

// int numTilings(int n) {
//     int dpMem[CONSTRAINT]={0};
//     dpMem[0]=0; dpMem[1]=1;
//     dpMem[2]=2; dpMem[3]=5;

//     return recursiveDP(dpMem, n);
// }