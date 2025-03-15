// 2560. House Robber IV
// Medium
// Topics
// Companies
// Hint
// There are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

// The capability of the robber is the maximum amount of money he steals from one house of all the houses he robbed.

// You are given an integer array nums representing how much money is stashed in each house. More formally, the ith house from the left has nums[i] dollars.


// You are also given an integer k, representing the minimum number of houses the robber will steal from. It is always possible to steal at least k houses.

// Return the minimum capability of the robber out of all the possible ways to steal at least k houses.





// int minCapability(int *nums, int numsSize, int k) {
//     int l = INT_MAX, r = 1, m;
//     for (int i = 0; i < numsSize; i++) {
//       if (nums[i] > r)
//         r = nums[i];
//       if (nums[i] < l)
//         l = nums[i];
//     }
//     while (l < r) {
//       m = (l + r) / 2;
//       int cnt = 0;
//       for (int i = 0; i < numsSize;) {
//         if (nums[i] <= m) {
//           cnt++;
//           i += 2;
//         } else {
//           i++;
//         }
//       }
//       if (cnt >= k)
//         r = m;
//       else
//         l = m + 1;
//     }
//     return l;
//   }