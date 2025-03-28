// 2503. Maximum Number of Points From Grid Queries
// Hard
// Topics
// Companies
// Hint
// You are given an m x n integer matrix grid and an array queries of size k.

// Find an array answer of size k such that for each integer queries[i] you start in the top left cell of the matrix and repeat the following process:

// If queries[i] is strictly greater than the value of the current cell that you are in, then you get one point if it is your first time visiting this cell, and you can move to any adjacent cell in all 4 directions: up, down, left, and right.
// Otherwise, you do not get any points, and you end this process.
// After the process, answer[i] is the maximum number of points you can get. Note that for each query you are allowed to visit the same cell multiple times.

// Return the resulting array answer.





// /****** minimum priority queue implementation ******/
// // priority queue unit data type
// typedef struct pqu {
//     int val;
//     int row;
//     int col;
//   } pqu;
  
//   /**
//    * swap 2 pqu pointers' data
//    */
//   void pq_swap(pqu *a, pqu *b) {
//     pqu tmp = *a;
//     *a = *b;
//     *b = tmp;
//   }
  
//   /**
//    * make current unit and its child unit a min root heap
//    * @list - number list (1-indexed)
//    * @len - list length
//    * @iCurr - index of current unit
//    */
//   void pq_min_heapify(pqu *list, int len, int iCurr) {
//     int iMin = iCurr;
//     int iLC = iCurr * 2; // left child
//     int iRC = iLC + 1;
//     // find min unit's index in following heap
//     if (iLC <= len && list[iLC].val < list[iMin].val)
//       iMin = iLC;
//     if (iRC <= len && list[iRC].val < list[iMin].val)
//       iMin = iRC;
//     // if iCurr unit isn't min, swap it with its min child
//     if (iCurr != iMin) {
//       pq_swap(&list[iCurr], &list[iMin]);
//       // swap operation may destroy structure of child's heap,
//       // so recursion on new child is needed
//       pq_min_heapify(list, len, iMin);
//     }
//   }
  
//   // priority queue type
//   typedef struct pq {
//     pqu *list; // unit list
//     int len;   // current list length
//     int cap;   // list capacity
//   } pq;
  
//   /**
//    * create an 1-indexed priority queue (any order)
//    */
//   pq *pq_new() {
//     pq *ins = malloc(sizeof(pq));
//     *ins = (pq){(pqu *)malloc(32 * sizeof(pqu)), 0, 32};
//     return ins;
//   }
  
//   /**
//    * add a new unit to min priority queue
//    * @ins - priority queue(1-indexed)
//    * @u - unit
//    */
//   void pq_min_add(pq *ins, pqu u) {
//     ins->len++;
//     if (ins->len == ins->cap) {
//       ins->cap *= 2;
//       ins->list = realloc(ins->list, ins->cap * sizeof(pqu));
//     }
//     ins->list[ins->len] = u;
//     // maintain min heap
//     int i = ins->len; // new unit's index
//     int iF = i / 2;   // new unit's father unit's index
//     while (iF > 0 && ins->list[iF].val > ins->list[i].val) {
//       pq_swap(&ins->list[iF], &ins->list[i]);
//       i /= 2;
//       iF = i / 2;
//     }
//   }
  
//   /**
//    * pop root unit from min priority queue
//    * @ins - min priority queue(1-indexed)
//    */
//   pqu pq_min_pop(pq *ins) {
//     pqu root = ins->list[1];
//     ins->list[1] = ins->list[ins->len];
//     ins->len--;
//     pq_min_heapify(ins->list, ins->len, 1);
//     return root;
//   }
  
//   /**
//    * get root unit's value from priority queue
//    * @ins - priority queue(1-indexed, any order)
//    */
//   pqu pq_getRoot(pq *ins) { return ins->list[1]; }
  
//   /**
//    * free priority queue instance from space
//    * @ins - priority queue
//    */
//   void pq_free(pq *ins) {
//     free(ins->list);
//     free(ins);
//   }
//   /****** implementation ends ******/
  
//   int cmpAsc(const void *a, const void *b) {
//     return (*(int **)a)[1] - (*(int **)b)[1];
//   }
  
//   int *maxPoints(int **grid, int gridSize, int *gridColSize, int *queries,
//                  int queriesSize, int *returnSize) {
//     const int M = gridSize, N = *gridColSize, Q = queriesSize;
  
//     /* sort queries with index combined */
//     int **queryIdList = malloc(Q * sizeof(int *));
//     for (int i = 0; i < Q; i++) {
//       queryIdList[i] = malloc(2 * sizeof(int));
//       queryIdList[i][0] = i;          // index
//       queryIdList[i][1] = queries[i]; // query val
//     }
//     qsort(queryIdList, Q, sizeof(int *), cmpAsc); // ascending order
  
//     /* search */
//     // helper data structures
//     int cnt = 0; // cnt of valid points
//     int *rs = malloc(Q * sizeof(int));
//     pq *boundry = pq_new(); // store boundry units in a min priority queue
//     bool searched[M][N];    // searched array
//     // initialize helpers
//     pq_min_add(boundry, (pqu){grid[0][0], 0, 0});
//     for (int i = 0; i < M; i++)
//       for (int j = 0; j < N; j++)
//         searched[i][j] = false;
//     searched[0][0] = true;
  
//     for (int i = 0; i < Q; i++) {
//       int query = queryIdList[i][1]; // current query val
//       // if root's val is smaller than current query, search continues
//       while (boundry->len > 0 && pq_getRoot(boundry).val < query) {
//         cnt++;
//         int row = pq_getRoot(boundry).row, col = pq_getRoot(boundry).col;
//         pq_min_pop(boundry); // pop root from boundry list
  
//         if (row > 0 && searched[row - 1][col] == 0) { // up
//           pq_min_add(boundry, (pqu){grid[row - 1][col], row - 1, col});
//           searched[row - 1][col] = true;
//         }
//         if (row < M - 1 && searched[row + 1][col] == 0) { // down
//           pq_min_add(boundry, (pqu){grid[row + 1][col], row + 1, col});
//           searched[row + 1][col] = true;
//         }
//         if (col > 0 && searched[row][col - 1] == 0) { // left
//           pq_min_add(boundry, (pqu){grid[row][col - 1], row, col - 1});
//           searched[row][col - 1] = true;
//         }
//         if (col < N - 1 && searched[row][col + 1] == 0) { // right
//           pq_min_add(boundry, (pqu){grid[row][col + 1], row, col + 1});
//           searched[row][col + 1] = true;
//         }
//       }
//       rs[queryIdList[i][0]] = cnt; // put cnt to query's original index
//     }
  
//     /* free helpers and return */
//     for (int i = 0; i < Q; i++)
//       free(queryIdList[i]);
//     free(queryIdList);
//     pq_free(boundry);
  
//     *returnSize = Q;
//     return rs;
//   }