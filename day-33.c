// #3208. Alternating Groups II

// There is a circle of red and blue tiles. You are given an array of integers colors and an integer k. The color of tile i is represented by colors[i]:

// colors[i] == 0 means that tile i is red.
// colors[i] == 1 means that tile i is blue.
// An alternating group is every k contiguous tiles in the circle with alternating colors (each tile in the group except the first and last one has a different color from its left and right tiles).

// Return the number of alternating groups.

// Note that since colors represents a circle, the first and the last tiles are considered to be next to each other









// #define max(a, b) ((a) > (b) ? (a) : (b))

// int numberOfAlternatingGroups(int *colors, int colorsSize, int k)
// {
//   int lastIndex = colorsSize + k - 2, index = 1, curSeqLen = 1;
//   int preColor = colors[0], curIndex, ans = 0;

//   while (index <= lastIndex)
//   {
//     curIndex = index % colorsSize;
//     if (colors[curIndex] != preColor)
//     {
//       curSeqLen++;
//     }
//     else
//     {
//       ans += max(curSeqLen - k + 1, 0);
//       curSeqLen = 1;
//     }
//     preColor = colors[curIndex];
//     index++;
//   }
//   ans += max(curSeqLen - k + 1, 0);
//   return ans;
// }