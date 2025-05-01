// 2071. Maximum Number of Tasks You Can Assign
// Hard
// Topics
// Companies
// Hint
// You have n tasks and m workers. Each task has a strength requirement stored in a 0-indexed integer array tasks, with the ith task requiring tasks[i] strength to complete. The strength of each worker is stored in a 0-indexed integer array workers, with the jth worker having workers[j] strength. Each worker can only be assigned to a single task and must have a strength greater than or equal to the task's strength requirement (i.e., workers[j] >= tasks[i]).

// Additionally, you have pills magical pills that will increase a worker's strength by strength. You can decide which workers receive the magical pills, however, you may only give each worker at most one magical pill.

// Given the 0-indexed integer arrays tasks and workers and the integers pills and strength, return the maximum number of tasks that can be completed.





// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// int compareAsc(const void *a, const void *b) {
//     return (*(int *)a - *(int *)b);
// }

// int compareDesc(const void *a, const void *b) {
//     return (*(int *)b - *(int *)a);
// }

// // Deque simulation using array
// typedef struct {
//     int *data;
//     int front;
//     int back;
// } Deque;

// void initDeque(Deque *dq, int size) {
//     dq->data = (int *)malloc(size * sizeof(int));
//     dq->front = 0;
//     dq->back = 0;
// }

// void pushBack(Deque *dq, int val) {
//     dq->data[dq->back++] = val;
// }

// int popFront(Deque *dq) {
//     return dq->data[dq->front++];
// }

// int popBack(Deque *dq) {
//     return dq->data[--dq->back];
// }

// bool isEmpty(Deque *dq) {
//     return dq->front == dq->back;
// }

// void resetDeque(Deque *dq) {
//     dq->front = 0;
//     dq->back = 0;
// }

// void freeDeque(Deque *dq) {
//     free(dq->data);
// }

// bool cannot_complete(int *tasks, int *workers, int numTasks, int pills, int strength) {
//     Deque dq;
//     initDeque(&dq, numTasks);

//     int cnt = 0;
//     for (int i = numTasks - 1; i >= 0; i--) {
//         while (cnt < numTasks && tasks[cnt] <= workers[i] + strength) {
//             pushBack(&dq, tasks[cnt]);
//             cnt++;
//         }

//         if (isEmpty(&dq)) {
//             freeDeque(&dq);
//             return true;
//         }

//         if (workers[i] >= dq.data[dq.front]) {
//             popFront(&dq);
//         } else if (pills > 0) {
//             popBack(&dq);
//             pills--;
//         } else {
//             freeDeque(&dq);
//             return true;
//         }
//     }

//     freeDeque(&dq);
//     return false;
// }

// int maxTaskAssign(int* tasks, int tasksSize, int* workers, int workersSize, int pills, int strength) {
//     qsort(tasks, tasksSize, sizeof(int), compareAsc);
//     qsort(workers, workersSize, sizeof(int), compareDesc);

//     int left = 0;
//     int right = tasksSize < workersSize ? tasksSize : workersSize;

//     while (left < right) {
//         int mid = (left + right + 1) / 2;
//         if (!cannot_complete(tasks, workers, mid, pills, strength)) {
//             left = mid;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return left;
// }