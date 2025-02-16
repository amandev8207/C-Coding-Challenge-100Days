// #1718. Construct the Lexicographically Largest Valid Sequence

// Given an integer n, find a sequence that satisfies all of the following:

// The integer 1 occurs once in the sequence.
// Each integer between 2 and n occurs twice in the sequence.
// For every integer i between 2 and n, the distance between the two occurrences of i is exactly i.
// The distance between two numbers on the sequence, a[i] and a[j], is the absolute difference of their indices, |j - i|.

// Return the lexicographically largest sequence. It is guaranteed that under the given constraints, there is always a solution.

// A sequence a is lexicographically larger than a sequence b (of the same length) if in the first position where a and b differ, sequence a has a number greater than the corresponding number in b. For example, [0,1,9,0] is lexicographically larger than [0,1,5,6] because the first position they differ is at the third number, and 9 is greater than 5.




// bool backtrack(int *arr ,int *visited, int size ,int  n, int index , int cnt){
//     if(cnt==n)return true;
//     for(int i =n;i>=1;i--){
//         int j = i==1?index:index+i;
//         if(visited[i] || j>=size || arr[index] || arr[j])continue;
//         arr[index] = arr[j] = i;
//         visited[i] = 1;
//         int next_index = index;
//         while(next_index<size && arr[next_index]) next_index++;
//         if(backtrack(arr , visited , size , n , next_index , cnt+1))return true;
//         arr[index] = arr[j] = visited[i] = 0;
//     }
//     return false;
// }
// int* constructDistancedSequence(int n, int* returnSize) {
//     int size = n*2-1;
//     int *arr = calloc(size , sizeof(int));
//     int *vis = calloc(n+1 , sizeof(int));
//     backtrack(arr , vis , size , n , 0 , 0);
//     *returnSize = size;
//     return arr;
// }