//
// Created by HCY on 2018/4/13.
//


#include "easyHeader.h"

string addBinary(string a, string b) {
    int c = 0 , i = a.length() - 1 , j = b.length() - 1;
    string s = "";
    //利用一个整型c来控制两个字符串对应位置的值相加的结果
    //c 的值只有 0 1 2
    //这样可以一步进行新字符串每个位置值的判定 c%2+'0'就可以将数字转成字符
    //c/=2来进行进位的判断
    while (i >= 0 || j >= 0 || c == 1)
    {
        c += i >= 0 ? a[i--] - '0': 0;
        c += j >= 0 ? b[j--] - '0': 0;
        s += c%2+'0';
        c /= 2;
    }
    reverse(s.begin(),s.end());
    return s;
}
//string a="11";
//string b="1";
//cout<<addBinary(a,b)<<endl;
