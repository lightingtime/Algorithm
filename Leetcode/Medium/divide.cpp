//
// Created by HCY on 2018/4/8.
//

#include "mediumHeader.h"

int divide(int dividend, int divisor) {
    //1.divisor = 0
    //2.dividend = INT_MIN and divisor = -1 (because abs(INT_MIN) = INT_MAX + 1).
    if (!divisor || (dividend == INT_MIN && divisor == -1)) {
        return INT_MAX;
    }
    int sign =((dividend<0)^(divisor<0))?-1:1; // ^异或运算符
    long long dvd = labs(dividend);
    long long dvs = labs(divisor);
    int res = 0;
    while (dvd >= dvs) {
        long long temp = dvs,multiple =1;
        while (dvd >=(temp <<1)) {
            temp<<=1;
            multiple <<=1;
        }
        dvd -= temp;
        res += multiple;
    }
    return  sign == 1? res : -res;
} 

