//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int removeElement(vector<int> &nums, int val){
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == val) {
            nums.erase(nums.begin()+i);
            i--;
        }
    }
    return nums.size();
}

