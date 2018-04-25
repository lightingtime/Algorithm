//
// Created by HCY on 2018/4/24.
//

#include "mediumHeader.h"

//Method 1:
//回溯思想
//一个temp来进行查找结果，如果在candidates里的元素和不足target，就接着传入这个值，再进入一次递归
//如果不满足，就弹出这个元素
//算法重点在于 i = index
//控制了下一次开始的起点，顺序进行查找可能元素
//第一层递归使得每个元素都有可能被检查，即n 个 ai的结果
//void backtracking(vector<vector<int>> res, vector<int> temp, vector<int> &candidates, int target, int index) {
//    if (target < 0) {
//        return;
//    }
//    if (target == 0) {
//        res.push_back(temp);
//        return;
//    }
//    for (int i = index; i < candidates.size(); ++i) {
//        temp.push_back(candidates[i]);
//        backtracking(res, temp, candidates, target - candidates[i], i);
//        temp.pop_back();//弹出末尾元素
//    }
//}
//vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//    sort(candidates.begin(),candidates.end());
//    vector<vector<int>> res;
//    vector<int> temp;
//    backtracking(res, temp, candidates, target, 0);
//
//}

//Method 2:
//Dynamic Programming
vector<vector<int>> combinationSum(vector<int>& candidates, int target){
    sort(candidates.begin(), candidates.end());
    vector<vector<vector<int>>> combinations(target+1,vector<vector<int>>());
    combinations[0].push_back(vector<int>());
    for (int c : candidates) {
        for (int i = c; i <= target; i++) {
            for (vector<int> v : combinations[i - c]) {
                v.push_back(c);
                combinations[i].push_back(v);
            }
        }
    }
    return combinations[target];
}

