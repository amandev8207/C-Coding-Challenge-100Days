// 1128. Number of Equivalent Domino Pairs
// Easy
// Topics
// Companies
// Hint
// Given a list of dominoes, dominoes[i] = [a, b] is equivalent to dominoes[j] = [c, d] if and only if either (a == c and b == d), or (a == d and b == c) - that is, one domino can be rotated to be equal to another domino.

// Return the number of pairs (i, j) for which 0 <= i < j < dominoes.length, and dominoes[i] is equivalent to dominoes[j].





// #define CONSTRAINT 100

// int numEquivDominoPairs(int** dominoes, int dominoesSize, int* dominoesColSize) {
//     int result=0, map[CONSTRAINT]={0}, hash;

//     for(int i=0; i<dominoesSize; i++) {
//         hash=dominoes[i][0]>=dominoes[i][1]
//             ?dominoes[i][0]*10+dominoes[i][1]
//             :dominoes[i][1]*10+dominoes[i][0];
//         result+=map[hash]++;
//     }

//     return result;
// }