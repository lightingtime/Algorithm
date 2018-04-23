//
// Created by HCY on 2018/4/23.
//

#include "mediumHeader.h"

vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> bad{-1, -1};
    if (nums.size() == 0) {
        return bad;
    }
    int left = 0, right = nums.size() - 1;
    int mid = (left + right) / 2;
    while (left <= right) {
        if (target==nums[mid]) {
            left = mid;
            right = mid;
            while (left-1>=0&&target==nums[left-1]) {
                left--;
            }
            while (right+1<=nums.size()-1&&target==nums[right+1]) {
                right++;
            }
            bad.clear();
            bad.push_back(left);
            bad.push_back(right);
            break;
        } else{
            if (target < nums[mid]) {
                right=mid-1;
                mid=(left+right)/2;
                continue;
            } else if (target > nums[mid]) {
                left=mid+1;
                mid=(left+right)/2;
                continue;
            }
        }
    }
    return bad;
} 

