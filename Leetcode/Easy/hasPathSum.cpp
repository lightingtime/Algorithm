//
// Created by HCY on 2018/5/14.
//

#include "easyHeader.h"

bool hasPathSum(TreeNode* root, int sum) {
    if (!root) {
        return false;
    }
    if (root->val==sum && root->left == NULL && root->right == NULL) {
        return true;
    }
    return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
}

