//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int romanToInt(string s) {
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I' && (s[i + 1] == 'X' || s[i + 1] == 'V')) {
            j -= 1;
            continue;
        } else if (s[i] == 'I' && (s[i + 1] != 'X' || s[i + 1] != 'V')) {
            j += 1;
            continue;
        } else if (s[i] == 'V') {
            j += 5;
            continue;
        } else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
            j -= 10;
            continue;
        } else if (s[i] == 'X' && (s[i + 1] != 'L' || s[i + 1] != 'C')) {
            j += 10;
            continue;
        } else if (s[i] == 'L') {
            j += 50;
            continue;
        } else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
            j -= 100;
            continue;
        } else if (s[i] == 'C' && (s[i + 1] != 'D' || s[i + 1] != 'M')) {
            j += 100;
            continue;
        } else if (s[i] == 'D') {
            j += 500;
            continue;
        } else if (s[i] == 'M') {
            j += 1000;
            continue;
        }
    }
    return j;
}
//cout << romanToInt("I") << endl;
//cout << romanToInt("III") << endl;
//cout << romanToInt("IV") << endl;
//cout << romanToInt("VIII") << endl;
//cout << romanToInt("IX") << endl;
//cout << romanToInt("X") << endl;
//cout << romanToInt("XI") << endl;
//cout << romanToInt("XIII") << endl;
//cout << romanToInt("XIV") << endl;
//cout << romanToInt("XL") << endl;
//cout << romanToInt("XIX") << endl;
//cout << romanToInt("L") << endl;
//cout << romanToInt("LX") << endl;
//cout << romanToInt("C") << endl;
//cout << romanToInt("CC") << endl;
//cout << romanToInt("M") << endl;
//cout << romanToInt("MC") << endl;
//cout << romanToInt("MMMCMXCIX") << endl;