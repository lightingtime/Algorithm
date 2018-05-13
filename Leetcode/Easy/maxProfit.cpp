//
// Created by HCY on 2018/5/13.
//

#include "easyHeader.h"

//Method 1:
//暴力穷举
//超时
//int maxProfit(vector<int>& prices) {
//    int size = prices.size();
//    int max=0;
//    if(size<=1)
//        return 0;
//    int a[size][size];
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            a[i][j]=0;
//        }
//    }
//    for (int i = 0; i < size-1; ++i)
//        for (int j = i+1; j < size; ++j) {
//            a[i][j] = -prices[i]+prices[j];
//            if (a[i][j] > max) {
//                max = a[i][j];
//            }
//        }
//    return max;
//}

//Method 2:
//从前到后先找出一个最小值，然后
//后面的数比它小，替换，继续
//否则用这个最小值进行价格判断
int maxProfit(vector<int>& prices) {
    int minprice = INT_MAX;
    int maxprofit=0;
    for (int i = 0; i < prices.size(); ++i) {
        if (prices[i] < minprice) {
            minprice = prices[i];
        } else if (prices[i] - minprice > maxprofit) {
            maxprofit = prices[i]-minprice;
        }
    }
    return maxprofit;
}
