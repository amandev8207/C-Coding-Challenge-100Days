// 3394. Check if Grid can be Cut into Sections
// Medium
// Topics
// Companies
// Hint
// You are given an integer n representing the dimensions of an n x n grid, with the origin at the bottom-left corner of the grid. You are also given a 2D array of coordinates rectangles, where rectangles[i] is in the form [startx, starty, endx, endy], representing a rectangle on the grid. Each rectangle is defined as follows:

// (startx, starty): The bottom-left corner of the rectangle.
// (endx, endy): The top-right corner of the rectangle.
// Note that the rectangles do not overlap. Your task is to determine if it is possible to make either two horizontal or two vertical cuts on the grid such that:

// Each of the three resulting sections formed by the cuts contains at least one rectangle.
// Every rectangle belongs to exactly one section.
// Return true if such cuts can be made; otherwise, return false.









// int cmp1(const void* a, const void* b) {
//     int* arr1 = *(int**)a;
//     int* arr2 = *(int**)b;

//     return arr1[0] - arr2[0];
// }

// int cmp2(const void* a, const void* b) {
//     int* arr1 = *(int**)a;
//     int* arr2 = *(int**)b;

//     return arr1[1] - arr2[1];
// }

// int helper(int** arr, int arrSize, int dir) {
//     int idx1, idx2;
//     if(dir) {
//         qsort(arr, arrSize, sizeof(int*), cmp1);
//         idx1 = 0;
//         idx2 = 2;
//     }
//     else {
//         qsort(arr, arrSize, sizeof(int*), cmp2);
//         idx1 = 1;
//         idx2 = 3;
//     }

//     int counter = 0;
//     int i = 0, start = arr[i][idx1], end = arr[i++][idx2];

//     for(; i < arrSize; i++) {
//         if(arr[i][idx1] >= end) {
//             counter++;
//             start = arr[i][idx1];
//             end = arr[i][idx2];
//         }
//         else end = end > arr[i][idx2]? end : arr[i][idx2];
//     }

//     return counter >= 2;
// }

// bool checkValidCuts(int n, int** rectangles, int rectanglesSize, int* rectanglesColSize) {
//     return helper(rectangles, rectanglesSize, 1) || helper(rectangles, rectanglesSize, 0);
// }