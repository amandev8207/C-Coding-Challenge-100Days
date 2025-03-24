// 3169. Count Days Without Meetings
// Medium
// Topics
// Companies
// Hint
// You are given a positive integer days representing the total number of days an employee is available for work (starting from day 1). You are also given a 2D array meetings of size n where, meetings[i] = [start_i, end_i] represents the starting and ending days of meeting i (inclusive).

// Return the count of days when the employee is available for work but no meetings are scheduled.

// Note: The meetings may overlap.



// int cmp(const void* a, const void* b) {
//     return (*(*(int**)b + 1) - *(*(int**)a + 1));
// }

// int countDays(int days, int** meetings, int meetingsSize, int* meetingsColSize) {
//     qsort(meetings, meetingsSize, sizeof(int *), cmp);
//     int p_end = meetings[0][1], p_start = meetings[0][0];

//     for(int i = 1; i < meetingsSize; i++) {
//         if(meetings[i][1] < p_start) {
//             days -= (p_end + 1 - p_start);

//             p_start = meetings[i][0];
//             p_end = meetings[i][1];
//             continue;
//         }

//         if(p_start > meetings[i][0]) p_start = meetings[i][0];
//     }

//     days -= (p_end + 1 - p_start);

//     return days;
// }