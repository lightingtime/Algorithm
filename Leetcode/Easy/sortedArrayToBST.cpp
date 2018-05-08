//
// Created by HCY on 2018/5/7.
//

#include "easyHeader.h"

TreeNode* sortedArrayToBST(vector<int>& nums) {
    TreeNode* root;
    if (nums.size() == 0) {
        return NULL;
    }
    if (nums.size() == 1) {
        return new TreeNode(nums[0]);
    }
    int n = nums.size()/2;
    root = new TreeNode(nums[n]);
    vector<int> nums1,nums2;
    nums1.assign(nums.begin(),nums.begin()+n);
    nums2.assign(nums.begin() + n + 1, nums.end());
    root->left = sortedArrayToBST(nums1);
    root->right = sortedArrayToBST(nums2);
    return root;
} 

