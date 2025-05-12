// 2094. Finding 3-Digit Even Numbers
// Easy
// Topics
// Companies
// Hint
// You are given an integer array digits, where each element is a digit. The array may contain duplicates.

// You need to find all the unique integers that follow the given requirements:

// The integer consists of the concatenation of three elements from digits in any arbitrary order.
// The integer does not have leading zeros.
// The integer is even.
// For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

// Return a sorted array of the unique integers





// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */

//  //modifying the array
// void modify(int* array,int arraySize, int idx){
//     for(int i = idx ; i < arraySize ; i++){
//         array[i] = array[i+1]; 
//     }
// }

// //function to check the number is present in digits Array
// bool isPresent(int* inp,int inpSize,int val){
//     int arr[4];
//     memset(arr,0,sizeof(arr)/sizeof(arr[0]));
//     int i = 0;
//     while(val!=0){
//         arr[i] = val%10;
//         val = val/10;
//         i++;
//     }

//     //creating temporary array which is suitable for array modification
//     int tempArray[inpSize];
//     for(int i = 0 ; i  < inpSize ; i++){
//         tempArray[i] = inp[i];
//     }

//     //comparing the number and digits
//     int cnt = 0;
//     for(int i = 0 ; i < 3 ; i++){
//         for(int j = 0; j < inpSize; j++){
//             if(arr[i] == tempArray[j]){
//                 cnt++;
//                 inpSize--;
//                 modify(&tempArray[0],inpSize,j);
//                 break;
//             }
//         }
//     } 


//     if(cnt == 3){
//         return true;
//     }
//     return false;

// }
// int* findEvenNumbers(int* digits, int digitsSize, int* returnSize) {
//     int* res = (int*)malloc(sizeof(int) * 1000);
//     int ret = 0,ind=0;
//     for(int i = 100 ; i < 1000 ; i++){
//         if(i%2 == 1){
//             continue;
//         }
//         int temp = isPresent(&digits[0],digitsSize,i);
//         if(temp == true){
//             res[ind] = i;
//             ind++;
//         }
//     }
//     *returnSize = ind;
//     return res;
    
// }