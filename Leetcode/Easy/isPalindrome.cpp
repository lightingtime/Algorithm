//
// Created by hcy19 on 2018/3/28.
//
#include <iostream>
#include <math.h>
#include "easyHeader.h"
using namespace std;

bool isPalindrome(int x) {
    int n = 0;
    int j = 0;
    int k = 0;
    int e = 0;
    int temp = x;
    if (j > INT_MAX / 10 || 10 * j > INT_MAX - x % 10) {
        return 0;
    }
    if (x<0) return false;
    if (x == 0) return true;
    if (x % 10 == 0) return false;

    while (temp) {
        temp /= 10;
        n++;
    }
    if (n <= 1) return true;
    if (n % 2 == 0) {
        e = pow(10, n / 2);
        j = x / e;
        k = x % e;
        if (reverse(j) == k) return true;
        else return false;
    } else {
        e = pow(10, (n + 1) / 2);
        j = x / e;
        e = pow(10, (n - 1) / 2);
        k = x % e;
        if (reverse(j) == k) return true;
        else return false;
    }
}
