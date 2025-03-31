// #2551. Put Marbles in Bags

// You have k bags. You are given a 0-indexed integer array weights where weights[i] is the weight of the ith marble. You are also given the integer k.

// Divide the marbles into the k bags according to the following rules:

// No bag is empty.
// If the ith marble and jth marble are in a bag, then all marbles with an index between the ith and jth indices should also be in that same bag.
// If a bag consists of all the marbles with an index from i to j inclusively, then the cost of the bag is weights[i] + weights[j].
// The score after distributing the marbles is the sum of the costs of all the k bags.

// Return the difference between the maximum and minimum scores among marble distributions.



// int cmp(const void *a, const void *b)
// {
//   return *(int *)a - *(int *)b;
// }

// long long putMarbles(int *weights, int weightsSize, int k)
// {
//   if (k == 1)
//     return 0;

//   int n = weightsSize - 1;
//   int *cuts = (int *)malloc(n * sizeof(int));

//   for (int i = 0; i < n; i++)
//   {
//     cuts[i] = weights[i] + weights[i + 1];
//   }
//   qsort(cuts, n, sizeof(int), cmp);

//   long long maxScore = 0;
//   long long minScore = 0;

//   for (int i = n - (k - 1); i < n; i++)
//   {
//     maxScore += cuts[i];
//   }

//   for (int i = 0; i < k - 1; i++)
//   {
//     minScore += cuts[i];
//   }

//   return maxScore - minScore;
// }