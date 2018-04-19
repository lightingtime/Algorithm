//
// Created by HCY on 2018/4/16.
//

#include "easyHeader.h"

int mySqrt(int x) {
    double ans= x;
    double delta = 0.0001;
    while (fabs(ans * ans - x)>delta) {
        ans=(ans+x/ans)/2;
    }
    return ans;
} 

