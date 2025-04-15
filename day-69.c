// 2179. Count Good Triplets in an Array
// Solved
// Hard
// Topics
// Companies
// Hint
// You are given two 0-indexed arrays nums1 and nums2 of length n, both of which are permutations of [0, 1, ..., n - 1].

// A good triplet is a set of 3 distinct values which are present in increasing order by position both in nums1 and nums2. In other words, if we consider pos1v as the index of the value v in nums1 and pos2v as the index of the value v in nums2, then a good triplet will be a set (x, y, z) where 0 <= x, y, z <= n - 1, such that pos1x < pos1y < pos1z and pos2x < pos2y < pos2z.

// Return the total number of good triplets.






// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define ll long long
// #define MAXN 100005

// ll seg[4 * MAXN];
// ll v[MAXN];
// int pos[MAXN];

// void build(ll l, ll r, ll c) {
//     if (l == r) {
//         seg[c] = v[l];
//         return;
//     }
//     ll mid = (l + r) / 2;
//     build(l, mid, 2 * c);
//     build(mid + 1, r, 2 * c + 1);
//     seg[c] = seg[2 * c] + seg[2 * c + 1];
// }

// ll query(ll l, ll r, ll a, ll b, ll c) {
//     if (l > b || r < a)
//         return 0;
//     if (l >= a && r <= b)
//         return seg[c];
//     ll mid = (l + r) / 2;
//     return query(l, mid, a, b, 2 * c) + query(mid + 1, r, a, b, 2 * c + 1);
// }

// void update(ll l, ll r, ll ind, ll c) {
//     if (ind < l || ind > r)
//         return;
//     if (l == r && l == ind) {
//         seg[c] = 1;
//         return;
//     }
//     ll mid = (l + r) / 2;
//     update(l, mid, ind, 2 * c);
//     update(mid + 1, r, ind, 2 * c + 1);
//     seg[c] = seg[2 * c] + seg[2 * c + 1];
// }

// long long goodTriplets(int* nums1, int nums1Size, int* nums2, int nums2Size) {
//     int n = nums1Size;
//     memset(seg, 0, sizeof(seg));
//     memset(v, 0, sizeof(v));
//     memset(pos, 0, sizeof(pos));

//     for (int i = 0; i < n; i++) {
//         pos[nums2[i]] = i + 1;  // 1-based index
//     }

//     build(1, n, 1);
//     update(1, n, pos[nums1[0]], 1);

//     ll ans = 0;
//     for (int i = 1; i < n; i++) {
//         int r = pos[nums1[i]];
//         ll q = query(1, n, 1, r, 1);
//         ll d = i - q;
//         ll loc = (n - r) - d;
//         ans += loc * q;
//         update(1, n, r, 1);
//     }

//     return ans;
// }
