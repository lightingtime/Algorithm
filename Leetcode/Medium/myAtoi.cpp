//
// Created by hcy19 on 2018/3/30.
//

#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <cstring>

using namespace std;

int myAtoi(string str) {
    int ret = 0, sign = 1, i = str.find_first_not_of(' '), base = INT_MAX / 10;
    if (str[i] == '+' || str[i] == '-') sign = str[i++] == '+' ?: -1;
    while (isdigit(str[i])) {
        if (ret > base || (ret == base && str[i] - '0' > 7)) // 判断边界值，最大值/10 再比较
            return sign > 0 ? INT_MAX : INT_MIN;
        ret = 10 * ret + (str[i++] - '0');
    }
    return sign * ret;
}
//cout<<INT_MAX<<endl;
//cout<<INT_MIN<<endl;
//    cout << myAtoi("1") << endl;
//    cout << myAtoi("+1") << endl;
//    cout << myAtoi("-+1") << endl;
//    cout << myAtoi("2147483648") << endl;
//    cout << myAtoi("-2147483648") << endl;
//    cout << myAtoi("-2147483647") << endl;
//    cout << myAtoi("q452324523456254621") << endl;
//    cout<<myAtoi("   - 321")<<endl;
//    cout<<myAtoi(" b11228552307")<<endl;
//    cout<<myAtoi("   10522545459")<<endl;
//    cout<<myAtoi("   -1123u1243134")<<endl;
//    cout<<myAtoi("     -11919730356x")<<endl;