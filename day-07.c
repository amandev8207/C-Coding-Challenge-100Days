// #3174. Clear Digits

// You are given a string s.

// Your task is to remove all digits by doing this operation repeatedly:

// Delete the first digit and the closest non-digit character to its left.
// Return the resulting string after removing all digits.



// char* clearDigits(char* s) {
//     int len = strlen(s), top = -1;
//     char* stack = (char*)malloc(len + 1);
//     for (int i = 0; i < len; i++) {
//         if (isdigit(s[i])) {
//             if (top >= 0) top--;
//         } else {
//             stack[++top] = s[i];
//         }
//     }
//     stack[++top] = '\0';
//     return stack;
// }               