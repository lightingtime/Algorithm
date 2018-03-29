//
// Created by hcy19 on 2018/3/29.
//
#include <cstring>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string s){
    if (s.length() == 0)return 0;
    int a[128]={0};
    int k= 0;
    int n=0;
    for (int i = 0; i < s.length(); ++i) {
        if(a[s[i]] ==0) {
            a[s[i]]++;
            k++;
        } else {
            i-=k;
            n = n < k ? k: n;
            k=0;
            memset(a,0, sizeof(a));
        }
    }
    n = n < k ? k: n;
    return n;
}
