//
// Created by hcy19 on 2018/3/28.
//
#include <iostream>
#include <vector>
using namespace std;

bool isValid(string s) {
    vector<int>nums;
    int flag = 0;
    if (s.length() % 2 != 0) return false;
    for (char i : s) {
        if (i == '(') {
            //a[i] = 1;
            nums.push_back(1);
            flag = 1;
        } else if (i == '{') {
            //a[i] = 2;
            nums.push_back(2);
            flag = 2;
        } else if (i == '[') {
            //a[i] == 3;
            nums.push_back(3);
            flag = 3;
        } else if (flag == 1 && i == ')') {
            //a[--i] = 0;
            nums.pop_back();
            flag = nums.back();
            //i++;
        } else if (flag == 2 && i == '}') {
            //a[--i] = 0;
            nums.pop_back();
            flag = nums.back();
            //i++;
        } else if (flag == 3 && i == ']') {
            //a[--i] = 0;
            nums.pop_back();
            flag = nums.back();
            //i++;
        }
    }
    for (int num : nums) {
        while (num != 0) {
            return false;
        }
    }
    return true;
}
