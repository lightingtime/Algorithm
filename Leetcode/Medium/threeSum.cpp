//
// Created by HCY on 2018/4/1.
//

#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
    // 固定一个值，剩下的遍历，与target比较大小，比target小，右移，比target大，左移
    // 固定的值变，重新遍历
    // 防止出现重复值的办法 1.排序 2 对于左移和右移后的值出现相同值继续左移或右移，直到出现新的可能
    if(nums.size() <=2) return {};
    vector<vector<int>> x;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size();) {
        int left=i+1, right = nums.size() - 1;
        while (left < right) {
            if (nums[i]+nums[left]+nums[right] == 0) {
                x.push_back({nums[i],nums[left],nums[right]});
                left++;
                right--;
                while ((left < right) && nums[left] == nums[left-1]) left++;
                while ((left < right) && nums[right] == nums[right+1]) right--;
            } else if (nums[i]+nums[left]+nums[right] <0) {
                left++;
                while ((left < right) && nums[left] == nums[left-1]) left++;
            } else {
                right--;
                while ((left < right) && nums[right] == nums[right+1]) right--;
            }
        }
        i++;
        while ((i<nums.size())&& nums[i] == nums[i-1]) {
            i++;
        }
    }
    return x;
}


