//
// Created by HCY on 2018/4/12.
//

#include <algorithm>
#include "easyHeader.h"

vector<int> plusOne(vector<int>& digits) {
    int flag=1;
    for (int i = digits.size()-1; i >=0; --i) {
        if (digits[i]+flag>=10) {
            digits[i]=digits[i]+flag-10;
            flag=1;
        } else {
            digits[i]+=flag;
            flag = 0;
        }
    }
    if (flag==1) {
        digits.insert(digits.begin(),1);
    }
    return digits;
} 

