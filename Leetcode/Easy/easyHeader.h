//
// Created by hcy19 on 2018/3/28.
//

using namespace std;

#ifndef ALGORITHM_EASYHEADER_H
#define ALGORITHM_EASYHEADER_H

#include <vector>
#include <string>
#include <clocale>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

int reverse(int x);//1
bool isPalindrome(int x);//2
int romanToInt(string s);//3
string longestCommonPrefix(vector<string> &strs);//4
int removeDuplicates(vector<int> &nums);
int strStr(string haystack, string needle);
int searchInsert(vector<int> &nums, int target);
string countAndSay(int n);
void printa();
int lengthofLastWord(string s);
vector<int> plusOne(vector<int> &digits);
string addBinary(string a, string b);
bool isSameTree(TreeNode* p,TreeNode* q);
#endif //ALGORITHM_EASYHEADER_H
