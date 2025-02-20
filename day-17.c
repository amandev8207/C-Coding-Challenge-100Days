// #1980. Find Unique Binary String

// Given an array of strings nums containing n unique binary strings each of length n, return a binary string of length n that does not appear in nums. If there are multiple answers, you may return any of them.



// char* findDifferentBinaryString(char** nums, int numsSize) {
//     //nums是目前的binary數列, numSize是binary數字長度
//     //先列出所有選擇，再扣除已經有的
//     int maxNum=1<<numsSize;//用shift的方式代表2^numsSize
//     //char** allNum = (char**)malloc(maxNum*sizeof(char*));
//     char* allNum[maxNum];
//     int temp, tempNum, sum;

//     char str[numsSize+1];// 轉換後的字串

//     for(int i=maxNum-1;i>=0;i--){ //列出所有可能
//         sum = 0;
//         int j=0;
//         tempNum=i;

        
//         for(int k=numsSize-1;k>=0;k--){
//             str[k]=temp = (tempNum%2) +'0';
//             tempNum /=2;//往右移
//         }
//         str[numsSize]='\0';

//         //sprintf(str, "%0*d", numsSize,sum);//把sum轉乘字串
//         allNum[i]=(char*)malloc((numsSize+1)*sizeof(char));
//         strcpy(allNum[i],str);
        
//     }
    
//     //扣除已經存在的二元碼
//     int found;
//     for(int i=0;i<maxNum;i++){
//         found =0;
//         for(int j=0;j<numsSize;j++){
//             if(strcmp(allNum[i],nums[j])==0){ //比較兩個字串。等於零代表相符
//                 found = 1;
//                 break;
//             }
//         }
//         if(found==0){ //!found
//             return allNum[i];
//         }
//     }

//     return NULL;


// }