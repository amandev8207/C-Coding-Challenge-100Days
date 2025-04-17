// 2537. Count the Number of Good Subarrays
// Medium
// Topics
// Companies
// Hint
// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A subarray arr is good if there are at least k pairs of indices (i, j) such that i < j and arr[i] == arr[j].

// A subarray is a contiguous non-empty sequence of elements within an array.




// typedef struct{
//     int key;//nums[i]
//     int count;//次數
//     UT_hash_handle hh;//uthash 所需的 handle
// }HashEntry;

// long long countGood(int* nums, int numsSize, int k) {
//     /*
//     arr nums, int k, good sub arr:至少k個pairs(i,j), i<j, arr[i] == arr[j]
//     回傳good sub arr數量
//     */
    
//     //寫一個sliding window，裡面的sub arr的good sub arr至少有k個
//     /*
//         pseudo code
//         寫一個sliding window，裡面的sub arr的good sub arr至少有k個
//         1. 先判斷頻率表的map:map<nums[i], 次數> 
//         2. 滑動的條件是該sub arr的good sub arr:至少k個
//         3. 應該是先滑動右邊，到底以後滑左邊
//     */
//     int left = 0;
//     long long result = 0;
//     long long totalPairs = 0;
//     HashEntry *map = NULL;
//     for(int right=0;right<numsSize;right++){ //nums = [3,1,4,3,2,2,4], k = 2
//         int num = nums[right];
//         HashEntry *entry;
        
//         HASH_FIND_INT(map,&num,entry); // HASH_FIND_INT(表頭, &key, 結果變數指標);
//             if(entry == NULL){
//                 entry = malloc(sizeof(HashEntry));
//                 entry -> key = num;
//                 entry -> count = 0;
//                 HASH_ADD_INT(map,key,entry);//把 entry 加進 hash 表，用它的 key 欄位當作hash val。
//             }
        
//         totalPairs += entry -> count;
//         entry-> count++;
        
//         while(totalPairs >= k){//右移情況
//             result += (numsSize - right);
//             int l_num = nums[left];
//             HashEntry *l_entry;
//             HASH_FIND_INT(map,&l_num,l_entry);
//             if(l_entry){
//                 l_entry -> count--;
//                 totalPairs -= l_entry->count;
//                 if(l_entry->count == 0){
//                     HASH_DEL(map,l_entry);
//                     free(l_entry);
//                 }
//             }
//             left++;
//         }
//     }
//     return result;
// }