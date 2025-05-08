// 3342. Find Minimum Time to Reach Last Room II
// Medium
// Topics
// Companies
// Hint
// There is a dungeon with n x m rooms arranged as a grid.

// You are given a 2D array moveTime of size n x m, where moveTime[i][j] represents the minimum time in seconds when you can start moving to that room. You start from the room (0, 0) at time t = 0 and can move to an adjacent room. Moving between adjacent rooms takes one second for one move and two seconds for the next, alternating between the two.

// Return the minimum time to reach the room (n - 1, m - 1).

// Two rooms are adjacent if they share a common wall, either horizontally or vertically.




// #define MAX 800
// #define DIRS 4

// int DIR[4][2] = { {0,1}, {1,0}, {0,-1}, {-1,0} };

// typedef struct
// {
//     int dist;
//     int x;
//     int y;
// } Node;

// typedef struct
// {
//     Node data[MAX * MAX];
//     int size;
// } MinHeap;

// void swap(Node* a, Node* b)
// {
//     Node tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// void heapifyUp(MinHeap* heap, int idx)
// {
//     while (idx > 0)
//     {
//         int parent = (idx - 1) / 2;
//         if (heap->data[parent].dist <= heap->data[idx].dist)
//             break;
//         swap(&heap->data[parent], &heap->data[idx]);
//         idx = parent;
//     }
// }

// void heapifyDown(MinHeap* heap, int idx)
// {
//     while (2 * idx + 1 < heap->size)
//     {
//         int left = 2 * idx + 1;
//         int right = 2 * idx + 2;
//         int smallest = idx;

//         if (heap->data[left].dist < heap->data[smallest].dist)
//             smallest = left;
//         if (right < heap->size && heap->data[right].dist < heap->data[smallest].dist)
//             smallest = right;

//         if (smallest == idx)
//             break;

//         swap(&heap->data[idx], &heap->data[smallest]);
//         idx = smallest;
//     }
// }

// void push(MinHeap* heap, int dist, int x, int y)
// {
//     Node node = { dist, x, y };
//     heap->data[heap->size++] = node;
//     heapifyUp(heap, heap->size - 1);
// }

// Node pop(MinHeap* heap)
// {
//     Node top = heap->data[0];
//     heap->data[0] = heap->data[--heap->size];
//     heapifyDown(heap, 0);
//     return top;
// }

// int minTimeToReach(int** moveTime, int moveTimeSize, int* moveTimeColSize)
// {
//     int m = moveTimeSize;
//     int n = moveTimeColSize[0];
//     int dist[m][n];
//     MinHeap hashbrown = { .size = 0 };

//     for (int i = 0; i < m; ++i)
//         for (int j = 0; j < n; ++j)
//             dist[i][j] = INT_MAX;

//     dist[0][0] = 0;
//     push(&hashbrown, 0, 0, 0);

//     while (hashbrown.size > 0)
//     {
//         Node node = pop(&hashbrown);
//         int d = node.dist;
//         int i = node.x;
//         int j = node.y;

//         if (i == m - 1 && j == n - 1)
//             return d;

//         if (d > dist[i][j])
//             continue;

//         for (int k = 0; k < DIRS; ++k)
//         {
//             int x = i + DIR[k][0];
//             int y = j + DIR[k][1];

//             if (x < 0 || x >= m || y < 0 || y >= n)
//                 continue;

//             int newDist = (d > moveTime[x][y] ? d : moveTime[x][y]) + ((i + j) % 2 + 1);

//             if (newDist < dist[x][y])
//             {
//                 dist[x][y] = newDist;
//                 push(&hashbrown, newDist, x, y);
//             }
//         }
//     }

//     return -1;
// }