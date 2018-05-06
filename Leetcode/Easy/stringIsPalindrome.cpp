//
// Created by HCY on 2018/5/6.
//

#include "easyHeader.h"

bool stringIsPalindrome(string s) {
    string palindrome;
    for (int i = 0; i < s.length(); ++i) {
        if (((s[i]<='z')&&(s[i]>='a'))||((s[i]>='0')&&(s[i]<='9'))) {
            palindrome.push_back(s[i]);
        }else if((s[i]<='Z')&&(s[i]>='A')){
            palindrome.push_back(s[i]+32);
        }
    }
    string tem_palindrome=palindrome;
    reverse(palindrome.begin(), palindrome.end());
    if (tem_palindrome == palindrome) {
        return true;
    }
    return false;
} 

