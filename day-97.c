// 3335. Total Characters in String After Transformations I
// Medium
// Topics
// Companies
// Hint
// You are given a string s and an integer t, representing the number of transformations to perform. In one transformation, every character in s is replaced according to the following rules:

// If the character is 'z', replace it with the string "ab".
// Otherwise, replace it with the next character in the alphabet. For example, 'a' is replaced with 'b', 'b' is replaced with 'c', and so on.
// Return the length of the resulting string after exactly t transformations.

// Since the answer may be very large, return it modulo 109 + 7.





// #define CHAR_SIZE       26

// #define MODULO_VALUE    1000000007

// int lengthAfterTransformations(char* s, int t) {
//     int anCount[CHAR_SIZE];
//     memset(anCount, 0, CHAR_SIZE*sizeof(int));

//     while(*s) anCount[-'a'+*(s++)]++;

//     int* pnCountEnd = -1 + CHAR_SIZE + anCount;
//     while(CHAR_SIZE <= t)
//     {
//         // get current count of 'z'
//         int nCount = *pnCountEnd;
//         int* pnCount = pnCountEnd;
//         while(anCount < pnCount)
//         {
//             int* pnNext = pnCount--;
//             *pnNext += *pnCount;
//             *pnNext %= MODULO_VALUE;
//         }

//         // add count into 'a'
//         *pnCount += nCount;
//         *pnCount %= MODULO_VALUE;

//         // add count into 'b'
//         pnCount++;
//         *pnCount += nCount;
//         *pnCount %= MODULO_VALUE;

//         t -= CHAR_SIZE;
//     }

//     if(t--)
//     {
//         *anCount += *pnCountEnd;
//         *anCount %= MODULO_VALUE;

//         int* pnCount = pnCountEnd;
//         while(t--)
//         {
//             int* pnNext = pnCount--;
//             *pnNext += *pnCount;
//             *pnNext %= MODULO_VALUE;            
//         }
//     }

//     int nRet = 0;
//     while(anCount <= pnCountEnd)
//     {
//         nRet += *(pnCountEnd--);
//         nRet %= MODULO_VALUE;
//     }

//     return nRet;
// }