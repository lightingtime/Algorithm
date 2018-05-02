//
// Created by HCY on 2018/5/2.
//

#include "easyHeader.h"

int height(TreeNode *pNode);

int maxDepth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    else {
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
}


