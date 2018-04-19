//
// Created by hcy19 on 2018/3/30.
//

#ifndef ALGORITHM_MEDIUMHEADER_H
#define ALGORITHM_MEDIUMHEADER_H
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};
int lengthOfLongestSubstring(string s);
int myAtoi(string str);
int maxArea(vector<int> &height);
int threeSumClosest(vector<int>& nums, int target);
vector<string> generateParenthesis(int n);
ListNode* swapPairs(ListNode* head);
string multiply(string num1,string num2);
ListNode* deleteDuplicatates2(ListNode* head);
#endif //ALGORITHM_MEDIUMHEADER_H
