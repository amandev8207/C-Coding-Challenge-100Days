// 3108. Minimum Cost Walk in Weighted Graph
// Solved
// Hard
// Topics
// Companies
// Hint
// There is an undirected weighted graph with n vertices labeled from 0 to n - 1.

// You are given the integer n and an array edges, where edges[i] = [ui, vi, wi] indicates that there is an edge between vertices ui and vi with a weight of wi.

// A walk on a graph is a sequence of vertices and edges. The walk starts and ends with a vertex, and each edge connects the vertex that comes before it and the vertex that comes after it. It's important to note that a walk may visit the same edge or vertex more than once.

// The cost of a walk starting at node u and ending at node v is defined as the bitwise AND of the weights of the edges traversed during the walk. In other words, if the sequence of edge weights encountered during the walk is w0, w1, w2, ..., wk, then the cost is calculated as w0 & w1 & w2 & ... & wk, where & denotes the bitwise AND operator.

// You are also given a 2D array query, where query[i] = [si, ti]. For each query, you need to find the minimum cost of the walk starting at vertex si and ending at vertex ti. If there exists no such walk, the answer is -1.

// Return the array answer, where answer[i] denotes the minimum cost of a walk for query i.




// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_NODES 100005
// #define INF ((1<<30)-1)

// typedef struct {
//     int parent;
//     int rank;
//     int min_weight;
// } DSU;

// DSU ds[MAX_NODES];

// int find(int x) {
//     if (ds[x].parent != x) {
//         ds[x].parent = find(ds[x].parent);
//     }
//     return ds[x].parent;
// }

// void unite(int x, int y, int wt) {
//     if (x == y) {
//         ds[x].min_weight &= wt;
//         return;
//     }
    
//     if (ds[x].rank < ds[y].rank) {
//         ds[x].parent = y;
//         ds[y].min_weight &= (wt & ds[x].min_weight);
//     } else if (ds[x].rank > ds[y].rank) {
//         ds[y].parent = x;
//         ds[x].min_weight &= (wt & ds[y].min_weight);
//     } else {
//         ds[y].parent = x;
//         ds[x].rank++;
//         ds[x].min_weight &= (wt & ds[y].min_weight);
//     }
// }

// int* minimumCost(int n, int** edges, int edgesSize, int* edgesColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {
//     *returnSize = queriesSize;
//     int* result = (int*)malloc(queriesSize * sizeof(int));
    
//     for (int i = 0; i < n; i++) {
//         ds[i].parent = i;
//         ds[i].rank = 1;
//         ds[i].min_weight = INF;
//     }
    
//     for (int i = 0; i < edgesSize; i++) {
//         int src = edges[i][0];
//         int dest = edges[i][1];
//         int wt = edges[i][2];
        
//         int x = find(src);
//         int y = find(dest);
        
//         unite(x, y, wt);
//     }
    
//     for (int i = 0; i < queriesSize; i++) {
//         int src = queries[i][0];
//         int dest = queries[i][1];
        
//         if (src == dest) {
//             result[i] = 0;
//             continue;
//         }
        
//         int x = find(src);
//         int y = find(dest);
        
//         if (x != y) {
//             result[i] = -1;
//         } else {
//             result[i] = ds[x].min_weight;
//         }
//     }
    
//     return result;
// }
