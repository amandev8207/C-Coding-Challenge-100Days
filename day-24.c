// #1092. Shortest Common Supersequence  cpp

// Given two strings str1 and str2, return the shortest string that has both str1 and str2 as subsequences. If there are multiple valid strings, return any of them.

// A string s is a subsequence of string t if deleting some number of characters from t (possibly 0) results in the string s.





// class Solution {
//     public:
//         string shortestCommonSupersequence(string str1, string str2) {
            
//         int x=str1.size();
//         int y=str2.size();
        
//         int t[x+1][y+1];
//         for(int i=0;i<x+1;i++){
//             for(int j=0;j<y+1;j++){
//                 if(i==0||j==0) 
//                     t[i][j]=0;
                
//                 else if(str1[i-1]==str2[j-1])
//                 t[i][j]=1+t[i-1][j-1];
                
//                 else 
//                 t[i][j]=max(t[i-1][j],t[i][j-1]);
//             }
//         }
        
//         int i=x;
//         int j=y;
            
//         string s="";
//         while(i>0 && j>0){
//             if(str1[i-1]==str2[j-1]){
//                 s.push_back(str1[i-1]);
//                 i--;
//                 j--;
//             }
//             else{
//                 if(t[i][j-1] > t[i-1][j]){
//                     s.push_back(str2[j-1]);
//                     j--;
//                 }
//                 else{
//                     s.push_back(str1[i-1]);
//                     i--;
//                 }
//             }
//         }
            
//         while(i>0){
//             s.push_back(str1[i-1]);
//             i--;
//         }
//         while(j>0){
//             s.push_back(str2[j-1]);
//             j--;
//         }
//         reverse(s.begin(),s.end());
//         return s;
//     }
//     };