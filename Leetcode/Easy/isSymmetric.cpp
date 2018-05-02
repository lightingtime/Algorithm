//
// Created by HCY on 2018/5/2.
//

#include "easyHeader.h"

//Method 1:
//递归
//A tree is symmetric if the left subtree is a mirror reflection of the right subtree.
bool isMirror(TreeNode *t1, TreeNode *t2);

bool isSymmetric(TreeNode* root) {
    return isMirror(root,root);
}

bool isMirror(TreeNode *t1, TreeNode *t2) {
    if (t1 == NULL && t2 == NULL) {
        return true;
    }
    if (t1 == NULL || t2 == NULL) {
        return false;
    }
    return (t1->val==t2->val)&&isMirror(t1->left,t2->right)&&isMirror(t1->right,t2->left);
}

//Method 2:
//迭代
//利用队列来进行判断，队列中的每两个连续节点应该相等，并且它们的子树是彼此的镜像。
//最初，队列包含根和根。该算法与BFS算法工作原理相似，但有一些关键区别。
//每次提取两个节点并比较它们的值。然后，两个节点的右和左子节点以相反的顺序插入队列中。
//当队列为空，或者我们检测到树不对称(即我们从队列中拉出两个不相等的连续节点)时，执行该算法。
//bool isSymmetric(TreeNode *root) {
//    TreeNode *left, *right;
//    if (!root)
//        return true;
//
//    queue<TreeNode*> q1, q2;
//    q1.push(root->left);
//    q2.push(root->right);
//    while (!q1.empty() && !q2.empty()){
//        left = q1.front();
//        q1.pop();
//        right = q2.front();
//        q2.pop();
//        if (NULL == left && NULL == right)
//            continue;
//        if (NULL == left || NULL == right)
//            return false;
//        if (left->val != right->val)
//            return false;
//        q1.push(left->left);
//        q1.push(left->right);
//        q2.push(right->right);
//        q2.push(right->left);
//    }
//    return true;
//}
