// #1910. Remove All Occurrences of a Substring

// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.



// char stack[1000];
// int top=-1 ;
// void push(char s){
//     if(top>=999){
//         return ;
//     }
//     top++ ;
//     stack[top] = s;
// }
// void pop(){
//     if(top == -1){
//         return ;
//     }
//     top-- ; 
// }
// bool check(char *part, int part_len){
//     int j=top ;
//     bool check =true ;
//     for(int i=part_len-1 ; i>=0; i--){
//         if(stack[j] != part[i]){
//             check = false ;
//             break ;
//         }
//         j-- ;
//     }
//     return check ;
// }
// char* removeOccurrences(char* s, char* part) {
//     top=-1 ;
//     int part_len= strlen(part);
//     int str_len = strlen(s) ;
//     for(int i=0 ; i < str_len ; i++){
//         push(s[i]); 
//         if(top+1 >= part_len && check(part,part_len)){           //top+1 always because the stack is the 0 index based 
//             for(int j=0 ; j<part_len ; j++){
//                 pop() ;
//             }
//         }
//     }
//     char *ans ;
//     ans =  (char *)malloc(sizeof(char )*(top+2)) ;
//     for(int i=0 ; i<top+1 ; i++) {             //remember the loop run till top + 1 and the top + 2 for thr void char
//         ans[i] = stack[i] ;
//     }
//     ans[top+1] = '\0' ;
//     return ans ;
    
// }