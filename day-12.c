// #2698. Find the Punishment Number of an Integer

// Given a positive integer n, return the punishment number of n.

// The punishment number of n is defined as the sum of the squares of all integers i such that:

// 1 <= i <= n
// The decimal representation of i * i can be partitioned into contiguous substrings such that the sum of the integer values of these substrings equals i.



// int isEqualPartition(int sum, int n, int z) {
//     if((sum+n)==z){ return 1; }

//     for(int i=1; n/i>0; i*=10)
//     { if(isEqualPartition(sum+(n/i), n%i, z)){ return 1; }}

//     return 0;
// }

// int punishmentNumber(int n) {
//     int result=0;

//     for(int i=1; i<=n; i++)
//     { if(isEqualPartition(0, i*i, i)){ result+=i*i; }}

//     return result;
// }