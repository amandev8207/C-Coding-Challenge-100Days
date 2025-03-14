// 2226. Maximum Candies Allocated to K Children
// Medium
// Topics
// Companies
// Hint
// You are given a 0-indexed integer array candies. Each element in the array denotes a pile of candies of size candies[i]. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

// You are also given an integer k. You should allocate piles of candies to k children such that each child gets the same number of candies. Each child can be allocated candies from only one pile of candies and some piles of candies may go unused.

// Return the maximum number of candies each child can get.








// int canAllocate(int* candies, int candiesSize, long long k, int mid){
//     long long count = 0;
//     for(int i=0;i<candiesSize;i++){
//         count += candies[i]/mid;
//     }
//     return count >= k;
// }

// int maximumCandies(int* candies, int candiesSize, long long k) {
//     if(k == 0) return 0;
//     int left = 1, right =0;

//     for (int i = 0; i < candiesSize; i++) {
//         if (candies[i] > right) {
//             right = candies[i];
//         }
//     }

//     int result = 0;

//     while(left <= right){
//         int mid = (left+right)/2;
//         if(canAllocate(candies, candiesSize, k, mid)){
//             result = mid;//更新目前可以分的糖果數
//             left = mid + 1;//左界增加
//         }else{
//             right = mid - 1;//右界減少
//         }
        
//     }

//     return result;
// }