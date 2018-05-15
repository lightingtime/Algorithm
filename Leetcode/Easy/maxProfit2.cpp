//
// Created by HCY on 2018/5/15.


//
#include "easyHeader.h"

//Brute Force
//Method 1:
//int calculate(vector<int>& prices, int s) {
//    if (s>=prices.size()) {
//        return 0;
//    }
//    int max=0;
//    for (int start = s; start < prices.size(); ++start) {
//        int maxprofit=0;
//        for (int i = start+1; i < prices.size(); ++i) {
//            if (prices[start] < prices[i]) {
//                int profit = calculate(prices, i + 1) + prices[i] - prices[start];
//                if (profit > maxprofit) {
//                    maxprofit = profit;
//                }
//            }
//            if (maxprofit > max) {
//                max = maxprofit;
//            }
//        }
//    }
//    return max;
//}
//
//int maxProfit2(vector<int>& prices) {
//    return calculate(prices,0);
//}

//Method 2:
//find every peak and valley
//sum them
//int maxProfit2(vector<int> &prices){
//    int i=0;
//    int valley = prices[0];
//    int peak = prices[0];
//    int maxprofit  = 0;
//    while (i < prices.size()-1) {
//        while (i< prices.size()-1 && prices[i]>=prices[i+1]) i++;
//        valley = prices[i];
//        while (i<prices.size()-1 && prices[i]<=prices[i+1]) i++;
//        peak = prices[i];
//        maxprofit += peak - valley;
//    }
//    return maxprofit;
//}

//Method 3:
//优化方法2
int maxProfit2(vector<int>& prices){
    int maxprofit = 0;
    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i]> prices [i-1]) {
            maxprofit += prices[i] - prices[i-1];
        }
    }
    return maxprofit;
}