//
// Created by HCY on 2018/4/4.
//

#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

vector<string>  letterCombinations(string digits) {
    //了解一下swap()用法
    //双重循环得到每个数字对应的字符，并将字符添加到结果里的每一个字符后面，直到digitsd.size()
    //swap交换临时和结果vector，保证每一次添加的结果都能保留同时减少空间开销
    if (digits.empty()) {
        return {};
    }
    vector<string> result;
    result.push_back("");
    vector<string> map { " ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    for (int i = 0; i < digits.size(); ++i) {
        int num = digits[i] - '0';
        const string &candidate = map[num];
        if (candidate.empty()) continue;
        vector<string> temp;
        for (int j = 0; j < candidate.size(); ++j) {
            for (int k = 0; k < result.size(); ++k) {
                temp.push_back(result[k]+candidate[j]);
            }
        }
        result.swap(temp);
    }
    return result;
} 

