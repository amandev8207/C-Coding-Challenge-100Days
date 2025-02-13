// #3066. Minimum Operations to Exceed Threshold Value II

// You are given a 0-indexed integer array nums, and an integer k.

// In one operation, you will:

// Take the two smallest integers x and y in nums.
// Remove x and y from nums.
// Add min(x, y) * 2 + max(x, y) anywhere in the array.
// Note that you can only apply the described operation if nums contains at least two elements.

// Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.



// void push(long long int *heap, long long int new, int top)
// {
//   heap[top] = new;
//   int now = top;
//   long long int temp;
//   int next = (top - 1) / 2;
//   while (top)
//   {
//     if (heap[now] < heap[next])
//     {
//       temp = heap[next];
//       heap[next] = heap[now];
//       heap[now] = temp;
//       now = next;
//       next = (now - 1) / 2;
//     }
//     else
//       return;
//   }
// }

// // top is the popped index
// long long int pop(long long int *heap, int top)
// {
//   long long int ret = heap[0];
//   heap[0] = heap[top];
//   int now = 0;
//   int next;
//   long long int temp;
//   int left = 1;
//   int right = 2;

//   while (left < top)
//   {
//     next = top == right ? left : ((heap[left] < heap[right]) ? left : right);
//     if (heap[next] < heap[now])
//     {
//       temp = heap[next];
//       heap[next] = heap[now];
//       heap[now] = temp;
//       now = next;
//       left = (now) * 2 + 1;
//       right = (now) * 2 + 2;
//     }
//     else
//       return ret;
//   }
//   return ret;
// }

// int minOperations(int *nums, int numsSize, int k)
// {
//   long long int *heap = (long long int *)calloc(numsSize, sizeof(long long int));
//   int top = 0, ans = 0;
//   long long int smallest1st, smallest2st;
//   for (int i = 0; i < numsSize; i++)
//   {
//     push(heap, nums[i], top++);
//   }
//   while (heap[0] < k)
//   {
//     smallest1st = pop(heap, --top);
//     smallest2st = pop(heap, --top);
//     push(heap, smallest1st * 2 + smallest2st, top++);
//     ans++;
//   }
//   return ans;
// }