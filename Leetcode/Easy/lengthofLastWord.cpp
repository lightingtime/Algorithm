//
// Created by HCY on 2018/4/11.
//

#include "easyHeader.h"
//Method 1:
void ReverseS(std::string &word)   // 适合string字符串反转函数
{                                 // 来源 C++ Primer Plus 第五章 forstr2.cpp -- reversing an array
    char temp;
    size_t i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int lengthOfLastWord(string s) {
    int n= 0;
    int flag =0;
    if (s.empty()) {
        return n;
    }
    ReverseS(s);
    flag=s.find_first_not_of(' ');
    if (flag < s.length()) {
        n++;
        while (s[flag+1]!= ' '&&flag<s.length()-1) {
            n++;
            flag++;
        }
        return n;
    }
    return n;
} 
//Method 2:
//int lengthOfLastWord(string s) {
//    int len = 0, tail = s.length() - 1;
//    while (tail >= 0 && s[tail] == ' ') tail--;
//    while (tail >= 0 && s[tail] != ' ') {
//        len++;
//        tail--;
//    }
//    return len;
//}
//cout<<lengthofLastWord("Hello World")<<endl;
//cout<<lengthofLastWord("    day ")<<endl;
//cout<<lengthofLastWord("    day")<<endl;
//cout<<lengthofLastWord("a ")<<endl;