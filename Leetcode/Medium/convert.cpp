//
// Created by hcy19 on 2018/3/30.
//
#include "mediumHeader.h"

string convert(string s, int numRows) {
    if (numRows <= 1)
        return s;
    string c[numRows];
    int k = 0;
    int flag = 1;
    for (int i = 0; i < s.length(); ++i) {
        c[k] += s[i];
        if (k == 0) {
            flag = 1;
        } else if (k == numRows- 1) {
            flag = -1;
        }
        k += flag;
    }
    string str;
    for (int i = 0; i < numRows; i++) {
        str += c[i];
    }
    return str;
}
