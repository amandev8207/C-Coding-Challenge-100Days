// 838. Push Dominoes
// Medium
// Topics
// Companies
// There are n dominoes in a line, and we place each domino vertically upright. In the beginning, we simultaneously push some of the dominoes either to the left or to the right.

// After each second, each domino that is falling to the left pushes the adjacent domino on the left. Similarly, the dominoes falling to the right push their adjacent dominoes standing on the right.

// When a vertical domino has dominoes falling on it from both sides, it stays still due to the balance of the forces.

// For the purposes of this question, we will consider that a falling domino expends no additional force to a falling or already fallen domino.

// You are given a string dominoes representing the initial state where:

// dominoes[i] = 'L', if the ith domino has been pushed to the left,
// dominoes[i] = 'R', if the ith domino has been pushed to the right, and
// dominoes[i] = '.', if the ith domino has not been pushed.
// Return a string representing the final state.





// char * pushDominoes(char * dominoes){
//     int len = strlen(dominoes);
//     int* dp = (int*)calloc(len, sizeof(int));    
//     int currVal = 0;
//     /* process R */
//     for(int i = 0; i < len; i++){
//         if(dominoes[i]=='.' && currVal){
//             --currVal;
//         }
//         else if(dominoes[i]=='R'){
//             currVal = 1e5;
//         }
//         else{
//             currVal = 0;
//         }
//         dp[i] = currVal;
//     }
//     /* process L */
//     currVal = 0;
//     for(int i = len - 1; i >= 0; i--){
//         if(dominoes[i]=='.' && currVal){
//             ++currVal;
//         }
//         else if(dominoes[i]=='L'){
//             currVal = -1e5;
//         }
//         else{
//             currVal = 0;
//         }
//         dp[i] += currVal;
//     }
//     for(int i = 0; i < len; i++){
//         if(dp[i]>0) dominoes[i] = 'R';
//         else if(dp[i]<0) dominoes[i] = 'L';
//         else dominoes[i] = '.';
//     }
//     return dominoes;
// }