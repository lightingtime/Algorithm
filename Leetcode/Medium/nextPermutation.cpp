//
// Created by HCY on 2018/4/9.
//

#include "mediumHeader.h"

void nextPermutation(vector<int>& nums) {
    int n =0;
    for (int i = nums.size()-2; i >=0 ; --i) {
        if (nums[i + 1] > nums[i]) {
            for (int j = nums.size()-1; j >i ; --j) {
                if (nums[j] > nums[i]) {
                    n=j;
                    break;
                }
            }
            //swap(nums[i], nums[n]);
            int temp = nums[n];
            nums[n]=nums[i];
            nums[i]=temp;
            reverse(nums.begin() + i + 1, nums.end());
            return;
        }
    }
    reverse(nums.begin(), nums.end());
} 

