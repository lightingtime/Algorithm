//
// Created by hcy19 on 2018/3/28.
//

#include "easyHeader.h"

int reverse(int x){
    if (x == INT_MIN) {
        return 0;
    }
    if (x < 0) {
        return -reverse(-x);
    }

    int j = 0;
    while (x != 0) {
        if (j > INT_MAX / 10 || 10 * j > INT_MAX - x % 10) {
            return 0;
        }
        j = j *10+x%10;
        x = x/10;
    }
    return j;
}
/*
int x = 123;
int y = -123;
cout<<reverse(x)<<endl;
cout<<reverse(y)<<endl;
cout<<reverse(1534236469)<<endl;*/

