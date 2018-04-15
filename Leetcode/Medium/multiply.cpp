//
// Created by HCY on 2018/4/15.
//


#include "mediumHeader.h"
//Method 1:
//把num2 的每一位去和num1想乘，乘的结果再相加起来
//string mult(string num,char c);
//
//string sadd(string a, string b);
//
//string multiply(string num1, string num2) {
//    if (num1.length() ==0 || num2.length()==0 || "0"==num1||"0"==num2) {
//        return "0";
//    }
//    if (num1.length()<num2.length()) {
//        return multiply(num2,num1);
//    } else{
//        string ans="0";
//        for (int i = num2.length()-1; i >=0 ; --i){
//            string temp=mult(num1,num2[i]);
//            string zero;
//            for (int j = i; j <num2.length()-1; ++j) {
//                zero+='0';
//            }
//            ans=sadd(ans,temp+zero);
//        }
//        return ans;
//    }
//
//}
//
//string mult(string num1,char c) {
//    string ans="0";
//    if (c=='0') {
//        return "0";
//    }
//    for (int i = num1.length()-1; i >=0 ; --i) {
//        int next=(c-'0')*(num1[i]-'0');
//        string zero;
//        for (int j = i; j <num1.length()-1; ++j) {
//            zero+='0';
//        }
//        ans = sadd(ans,to_string(next)+zero);
//    }
//    return ans;
//}
//
//string sadd(string astr, string bstr) {
//    if ("0"==bstr) {
//        return astr;
//    } else if ("0"==astr) {
//        return bstr;
//    }
//    int a=astr.length()-1,b=bstr.length()-1,c=0;
//    char d='0';
//    string ans;
//    while (a>=0||b>=0||c) {
//        c+= a>=0 ? astr[a--] -'0':0;
//        c+= b>=0 ? bstr[b--] -'0':0;
//        ans += (c%10+'0');
//        c /=10;
//    }
//    reverse(ans.begin(),ans.end());
//    return ans;
//}

//Method 2:
//思想与方法一相同，不过借助数组来存储对应位相乘的结果，之后再考虑进位问题
//我们预先分配结果并在那里累积部分结果。需要注意一种特殊情况是进位要求我们在for循环之外写入求和字符串。
string multiply(string num1, string num2) {
    // init with 0 (number 0, not char '0')
    string sum(num1.size() + num2.size(), 0);

    for (int i = num1.size() - 1; 0 <= i; --i) {
        int carry = 0;
        for (int j = num2.size() - 1; 0 <= j; --j) {
            // don't subtract '0' when get sum[]
            int tmp = (sum[i + j + 1]) + (num1[i] - '0') * (num2[j] - '0') + carry;
            carry = tmp / 10;
            // tmp - carry * 10 is more fast than tmp % 10
            // ( Subtract and Multiply is fast than DivRem )
            // and also don't add '0' when set sum[]
            sum[i + j + 1] = tmp - carry * 10;
        }
        sum[i] += carry;
    }

    // find number 0('\0'), not '0'
    size_t startpos = sum.find_first_not_of('\0');
    if (string::npos != startpos) {
        // add '0' before output
        for(int i = startpos;i<sum.size();i++)
            sum[i]+='0';
        return sum.substr(startpos);
    }
    return "0";
}