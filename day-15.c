// #2375. Construct Smallest Number From DI String

// You are given a 0-indexed string pattern of length n consisting of the characters 'I' meaning increasing and 'D' meaning decreasing.

// A 0-indexed string num of length n + 1 is created using the following conditions:

// num consists of the digits '1' to '9', where each digit is used at most once.
// If pattern[i] == 'I', then num[i] < num[i + 1].
// If pattern[i] == 'D', then num[i] > num[i + 1].
// Return the lexicographically smallest possible string num that meets the conditions.







// char* smallestNumber(char* pattern) {
//     int* stack = calloc(9, sizeof(int));
//     char* res = calloc(strlen(pattern)+2, sizeof(char));
//     int head = 0, count = 1, resHead = 0;
//     stack[head] = count;
//     head ++;
//     count ++;
//     for(int i = 0; i < strlen(pattern); i++){
//         if(pattern[i] == 'I'){
//             while(head){
//                 head --;
//                 res[resHead] = '0' + stack[head];
//                 resHead ++;
//             }
//         }
//         stack[head] = count;
//         head ++;
//         count ++;
//     }
//     while(head){
//         head --;
//         res[resHead] = '0' + stack[head];
//         resHead ++;
//     }
//     free(stack);
//     return res;
// }