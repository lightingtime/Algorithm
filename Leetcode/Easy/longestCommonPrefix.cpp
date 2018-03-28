//
// Created by hcy19 on 2018/3/28.
//
#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    if (strs.size() == 0) return "";
    string perfix = strs[0];
    for (int i = 0; i < strs.size(); i++) {
        while (strs[i].find(perfix) != 0) { //find() 返回符合搜索条件的字符串区间内的第一个字符的索引 因为此题是前串，所以一定从第一个开始
            perfix = perfix.substr(0, perfix.length() - 1); //substr() 返回一个新建的初始化为string对象的子串的拷贝string对象
            if (perfix.empty()){
                return "";
            }
        }
    }
    return perfix;
}

