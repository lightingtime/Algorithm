//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int searchInsert(vector<int>& nums, int target) {
    int k;
    for (int i = 0; i < nums.size(); ++i)
        if (target<=nums[i]) return i;
        else k++;
    if (k == nums.size())
        return nums.size();
}
//
//vector<int> nums;
//nums.push_back(1);
//nums.push_back(3);
//nums.push_back(5);
//nums.push_back(6);
//cout<<searchInsert(nums,5)<<endl;
//cout<<searchInsert(nums,2)<<endl;
//cout<<searchInsert(nums,7)<<endl;
//cout<<searchInsert(nums,0)<<endl;

