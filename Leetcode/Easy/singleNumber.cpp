//
// Created by HCY on 2018/5/12.
//

#include "easyHeader.h"
//Method 1:
//不使用额外内存空间
//位运算
//a^a =0
//a^0=a
//A^B^A=(A^A)^B=B
int singleNumber(vector<int>& nums) {
    int res = 0;
    for (auto& x:nums) {
        res ^= x;
    }
    return res;
} 

