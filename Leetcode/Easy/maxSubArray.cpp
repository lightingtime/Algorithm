//
// Created by HCY on 2018/4/10.
//

#include "easyHeader.h"

int maxSubArray(vector<int> &nums) {
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums.at(0);
    int sum=0,ans=nums.at(0);
    for (int i = 0; i < nums.size(); ++i) {
        sum = max(nums[i],sum+nums[i]);
        ans = max(ans,sum);
    }
    return ans;
} 

