//
// Created by HCY on 2018/5/3.
//

#include "easyHeader.h"
//Method 1:
//DFS
//void dfs(TreeNode* Node, int level);
//vector<vector<int>> v;
//vector <vector<int>> levelOrderBottom(TreeNode *root) {
//    dfs(root,0);
//    reverse(v.begin(), v.end());
//    return v;
//}
//
//void dfs(TreeNode* root, int level) {
//    if(!root) return;
//    if(level == v.size()) v.push_back({});
//    v[level].push_back(root->val);
//    dfs(root->left,level + 1);
//    dfs(root->right,level + 1);
//}

//Method 2:
//USE A QUEUE
//vector<vector<int>> levelOrderBottom(TreeNode* root) {
//    vector<vector<int>> result;
//    if (root) {
//        queue<TreeNode *> q;
//        q.push(root);
//        while(!q.empty()) {
//            vector<int> line;
//            int n = q.size();
//            for (int i = 0; i < n; ++ i) {
//                TreeNode *tmp = q.front();
//                q.pop();
//                line.push_back(tmp->val);
//                if (tmp->left) {
//                    q.push(tmp->left);
//                }
//                if (tmp->right) {
//                    q.push(tmp->right);
//                }
//            }
//            result.push_back(line);
//        }
//    }
//    reverse(result.begin(), result.end());
//    return result;
//}
//


