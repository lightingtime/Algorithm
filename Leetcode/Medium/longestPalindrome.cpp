//
// Created by hcy19 on 2018/3/29.
//
#include <string>
using namespace std;
string palindrome(string str,int l,int r){
    while (l>=0 && r<str.length() && str[l]==str[r]) {
        l--;
        r++;
    }
    return str.substr(l+1,r-l-1);
}

string longestPalindrome(string s){
    string lstr = "";
    for (int i = 0; i < s.length(); ++i) {
        for (int j = 0; j < 2; ++j) {
            string tstr =palindrome(s,i,i+j);
            if (tstr.size() >lstr.size()){
                lstr = tstr;
            }
        }
    }
    return lstr;
}
