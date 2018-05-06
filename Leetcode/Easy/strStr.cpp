//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int strStr(string haystack, string needle) {
    int k = 0;
    if (haystack.empty() && needle.empty())
        return 0;
    else if (haystack.empty() && !needle.empty())
        return -1;
    else {
        int n;
        for (int i = 0; i < haystack.length(); ++i) {
            n = i;
            for (int j = 0; j < needle.length(); ++j) {
                if (needle[j] == haystack[n]) {
                    k++;
                    n++;
                } else {
                    k = 0;
                    break;
                }
            }
            if (k == needle.length())
                return i;
        }
    }
    return -1;
}