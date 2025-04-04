// 1123. Lowest Common Ancestor of Deepest Leaves
// Medium
// Topics
// Companies
// Hint
// Given the root of a binary tree, return the lowest common ancestor of its deepest leaves.

// Recall that:

// The node of a binary tree is a leaf if and only if it has no children
// The depth of the root of the tree is 0. if the depth of a node is d, the depth of each of its children is d + 1.
// The lowest common ancestor of a set S of nodes, is the node A with the largest depth such that every node in S is in the subtree with root A.






// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     struct TreeNode *left;
//  *     struct TreeNode *right;
//  * };
//  */
// typedef struct result{
//     int height;
//     struct TreeNode *node;
// }Result;
// Result* dfs(struct TreeNode* );

// struct TreeNode* lcaDeepestLeaves(struct TreeNode* root) {
//     Result *res_ptr = dfs(root);
//     if(res_ptr != NULL){
//         return res_ptr->node; 
//     }
//     return NULL;
       
// }

// Result* dfs(struct TreeNode* node){
//     if(node == NULL){
//         Result *res_obj = malloc(sizeof *res_obj);
//         if(res_obj != NULL){
//             res_obj->height = 0;
//             res_obj->node = NULL;
//             return res_obj;
//         }
//         else return NULL;
        
//     }

//     Result* left = dfs(node->left);
//     Result* right = dfs(node->right);
    
//     Result* res_obj = malloc(sizeof *res_obj);
//     if(res_obj == NULL){
//         return NULL;
//     }
//     if(left->height < right->height){
//         res_obj->height = right->height + 1;
//         res_obj->node = right->node;
//         return res_obj;
//     }
//     if(left->height > right->height){
//         res_obj->height = left->height + 1;
//         res_obj->node = left->node;
//         return res_obj;
//     }
//     res_obj->height = left->height + 1;
//     res_obj->node = node;
//     return res_obj;
// }