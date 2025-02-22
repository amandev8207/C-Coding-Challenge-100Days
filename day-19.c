// #1028. Recover a Tree From Preorder Traversal

// We run a preorder depth-first search (DFS) on the root of a binary tree.

// At each node in this traversal, we output D dashes (where D is the depth of this node), then we output the value of this node.  If the depth of a node is D, the depth of its immediate child is D + 1.  The depth of the root node is 0.

// If a node has only one child, that child is guaranteed to be the left child.

// Given the output traversal of this traversal, recover the tree and return its root.




// struct TreeNode *recoverFromPreorder(char *traversal) {
//     // data prepare:
//     // "1-2--3--4-5--6--7" -> vals={1,2,3,4,5,6,7}, depths={0,1,2,2,1,2,2}, len=7
//     int vals[1000] = {0}, depths[1000] = {0}, len = 0;
//     for (int i = 0; i < strlen(traversal);) {
//       while (traversal[i] == '-') {
//         depths[len]++;
//         i++;
//       }
//       while (traversal[i] >= '0' && traversal[i] <= '9') {
//         vals[len] = vals[len] * 10 + traversal[i] - '0';
//         i++;
//       }
//       len++;
//     }
//     // recover tree structure
//     struct TreeNode *nodeList = calloc(len, sizeof(struct TreeNode));
//     for (int i = 0; i < len; i++) {
//       // recover val
//       nodeList[i].val = vals[i];
//       // find nodeList[i]'s father and connect them
//       for (int j = i; j >= 0; j--) {
//         if (depths[j] < depths[i]) {
//           if (nodeList[j].left == NULL)
//             nodeList[j].left = &nodeList[i];
//           else
//             nodeList[j].right = &nodeList[i];
//           break;
//         }
//       }
//     }
//     return nodeList;
//   }