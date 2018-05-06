//
// Created by HCY on 2018/4/21.
//

#include "easyHeader.h"

bool isSameTree(TreeNode* p,TreeNode *q) {
    if(!p && !q)    return true;
    if(!p || !q)    return false;
    //直接把左子树的结果 && 右子树的结果
    return (p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));

} 

