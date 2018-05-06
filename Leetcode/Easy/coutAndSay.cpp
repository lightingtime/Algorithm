//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

string countAndSay(int n) {
    if (n == 0) { return ""; }
    string x = "", y = "1";
    for (int i = 2; i <= n; i++) {
        x = y;
        y = "";
        int j = 0, num = 1;
        char c = x[j];
        while (j < x.length() - 1) {
            j++;
            if (c == x[j]) {
                num++;
            } else {
                y.append(to_string(num) + c);
                c = x[j];
                num = 1;
            }
        }
        y.append(to_string(num) + c);
    }
    return y;
}
