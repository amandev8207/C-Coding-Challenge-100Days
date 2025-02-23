// #889. Construct Binary Tree from Preorder and Postorder Traversal

// Given two integer arrays, preorder and postorder where preorder is the preorder traversal of a binary tree of distinct values and postorder is the postorder traversal of the same tree, reconstruct and return the binary tree.

// If there exist multiple answers, you can return any of them.



// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     struct TreeNode *left;
//  *     struct TreeNode *right;
//  * };
//  */

//  struct TreeNode* createTreeNode(int val){
//     struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
//     node->val = val;
//     node->left = node->right = NULL;
//     return node;
// }

// struct TreeNode* constructTree(int* preorder, int* postorder, int* preIdx, int* postIdx){
//     struct TreeNode* root = createTreeNode(preorder[(*preIdx)++]);

//     if(root->val != postorder[*postIdx]){
//         root->left = constructTree(preorder, postorder, preIdx, postIdx);
//     }
//     if(root->val != postorder[*postIdx]){
//         root->right = constructTree(preorder, postorder, preIdx, postIdx);
//     }

//     ++*postIdx;
//     return root;
// }

// struct TreeNode* constructFromPrePost(int* preorder, int preorderSize, int* postorder, int postorderSize) {
//     int preIdx = 0, postIdx = 0;

//     return constructTree(preorder, postorder, &preIdx, &postIdx);
// }