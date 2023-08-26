#include <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// First solution

//class Solution {
//public:
//    int global_max = 0;
//
//    int maxDepth(TreeNode* root) {
//        MaxDepthTree(root, 1);
//        return global_max;
//    }
//
//    void MaxDepthTree(TreeNode* node, int local_max) {
//        if (node == NULL)
//            return;
//        if (global_max < local_max)
//            global_max = local_max;
//        MaxDepthTree(node->left, local_max + 1);
//        MaxDepthTree(node->right, local_max + 1);
//    }
//};

// Second solution

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL)return 0;
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
