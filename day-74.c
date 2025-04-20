// 781. Rabbits in Forest
// Medium
// Topics
// Companies
// There is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array answers where answers[i] is the answer of the ith rabbit.

// Given the array answers, return the minimum number of rabbits that could be in the forest.








// #define CONSTRAINT 1001

// int numRabbits(int* answers, int answersSize) {
//     int result=0, map[CONSTRAINT]={0};

//     for(int i=0; i<answersSize; i++) {
//         if(answers[i]<1){ result++; continue; }

//         if(map[answers[i]]>0&&map[answers[i]]<=answers[i])
//         { map[answers[i]]++; continue; }

//         result+=(answers[i]+1); map[answers[i]]=1; 
//     }

//     return result;
// }