//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int removeDuplicates(vector<int> &nums) {
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            nums.erase(nums.begin() + i);
            i--;//注意这里的i--，因为erase函数导致删除之后的数据前移，所以要重新从i进行判断
        }
    }
    return nums.size();
}
//[1,1,2]
//[1,1]
//[1,1,1]
//[1,2,2]
