// 1261. Find Elements in a Contaminated Binary Tree
// Medium
// Topics
// Companies
// Hint
// Given a binary tree with the following rules:

// root.val == 0
// For any treeNode:
// If treeNode.val has a value x and treeNode.left != null, then treeNode.left.val == 2 * x + 1
// If treeNode.val has a value x and treeNode.right != null, then treeNode.right.val == 2 * x + 2
// Now the binary tree is contaminated, which means all treeNode.val have been changed to -1.

// Implement the FindElements class:

// FindElements(TreeNode* root) Initializes the object with a contaminated binary tree and recovers it.
// bool find(int target) Returns true if the target value exists in the recovered binary tree.


// typedef struct
// {
//   struct TreeNode *root;
// } FindElements;

// struct TreeNode *recover(struct TreeNode *node, int value)
// {
//   if (!node)
//     return NULL;
//   struct TreeNode *ret = (struct TreeNode *)calloc(1, sizeof(struct TreeNode));
//   ret->val = value;
//   ret->left = recover(node->left, value * 2 + 1);
//   ret->right = recover(node->right, value * 2 + 2);
//   return ret;
// }

// FindElements *findElementsCreate(struct TreeNode *root)
// {
//   FindElements *obj = (FindElements *)calloc(1, sizeof(FindElements));
//   obj->root = recover(root, 0);
//   return obj;
// }

// bool traverse(struct TreeNode **node, int target)
// {
//   if (target == 0)
//   {
//     return true;
//   }
//   struct TreeNode *next = (*node);

//   if (next->val * 2 + 1 != target && next->val * 2 + 2 != target)
//   {
//     if (traverse(node, (target - 1) / 2))
//     {
//       next = (*node); // Node changed
//       if (next->val * 2 + 1 == target && !next->left)
//       {
//         return false;
//       }
//       else if (next->val * 2 + 2 == target && !next->right)
//       {
//         return false;
//       }
//       else
//       {
//         (*node) =
//             (next->val * 2 + 1 == target) ? next->left : next->right;
//         return true;
//       }
//     }
//     else
//     {
//       return false;
//     }
//   }
//   else
//   {
//     if (next->val * 2 + 1 == target && !next->left)
//     {
//       return false;
//     }
//     else if (next->val * 2 + 2 == target && !next->right)
//     {
//       return false;
//     }
//     else
//     {
//       (*node) = (next->val * 2 + 1 == target) ? next->left : next->right;
//       return true;
//     }
//   }
// }

// bool findElementsFind(FindElements *obj, int target)
// {
//   bool ans = false;
//   struct TreeNode *node = obj->root;
//   return traverse(&node, target);
// }

// void freeNode(struct TreeNode *node)
// {
//   if (!node)
//     return;
//   freeNode(node->left);
//   freeNode(node->right);
//   free(node);
// }

// void findElementsFree(FindElements *obj)
// {
//   freeNode(obj->root);
//   free(obj);
//   return;
// }