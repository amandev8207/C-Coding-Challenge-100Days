// 2843. Count Symmetric Integers
// Easy
// Topics
// Companies
// Hint
// You are given two positive integers low and high.

// An integer x consisting of 2 * n digits is symmetric if the sum of the first n digits of x is equal to the sum of the last n digits of x. Numbers with an odd number of digits are never symmetric.

// Return the number of symmetric integers in the range [low, high].







// int countSymmetricIntegers(int low, int high) {
   
//     int count = 0;
//     for(int i=low;i<=high;i++){
//         if(i<100 && (i%11 ==0)){
//             count++;
//         }
//         if(i>=1000 && i<10000){ 
//             int left = i/1000 + (i%1000)/100;
//             int right = (i%100)/10+i%10;
//             if(left == right) count++;
//         }
//     }
//     return count;
// }