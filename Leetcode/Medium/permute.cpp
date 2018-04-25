//
// Created by HCY on 2018/4/25.
//

#include "mediumHeader.h"

//Method 1:
//回溯
void backtrack(vector<int> &nums, vector<vector<int>> &res, vector<int> path, vector<bool> flags);

vector<vector<int> > permute(vector<int> &num) {
    vector<vector<int>> res;   // result
    vector<bool> flags(num.size(), false);    // bool, whether num[i] is choosed
    vector<int> path;     // num have been choosed
    backtrack(num, res, path, flags);   //backtrack
    return res;
}

void backtrack(vector<int> &num, vector<vector<int>> &res, vector<int> path, vector<bool> flags) {
    if (num.size() == path.size()) {
        res.push_back(path);
    } else {
        for (int i = 0; i < num.size(); i++) {
            if (flags[i] == true)
                continue;
            else {
                path.push_back(num[i]);
                flags[i] = true;
                backtrack(num, res, path, flags);
                flags[i] = false;
                path.pop_back();
            }
        }
    }
}

//Method 2:
//1.add nums to res;
//2.generate the next permutation of nums using nextPermutation(), and add it to res;
//3.repeat 2 until the next permutation of nums returns to the original configuration.
//bool nextPermutation(vector<int>& nums) {
//    int k = -1;
//    for (int i = nums.size() - 2; i >= 0; i--) {
//        if (nums[i] < nums[i + 1]) {
//            k = i;
//            break;
//        }
//    }
//    if (k == -1) {
//        reverse(nums.begin(), nums.end());
//        return false;
//    }
//    int l = -1;
//    for (int i = nums.size() - 1; i > k; i--) {
//        if (nums[i] > nums[k]) {
//            l = i;
//            break;
//        }
//    }
//    swap(nums[k], nums[l]);
//    reverse(nums.begin() + k + 1, nums.end());
//    return true;
//}
//vector<vector<int>> permute(vector<int>& nums) {
//    vector<vector<int> > res;
//    sort(nums.begin(), nums.end());
//    res.push_back(nums);
//    while (nextPermutation(nums))
//        res.push_back(nums);
//    return res;
//}