//
// Created by HCY on 2018/4/17.
//

#include "easyHeader.h"

//Method 1:
//利用暴力穷举，递归树
//Time complexity : O(2^n) Size of recursion tree will be 2^n
//Space complexity : O(n). The depth of the recursion tree can go upto n.
//int climbStairs(int n) {
//    climb_Stairs(0, n);
//}
//int climb_Stairs(int i, int n) {
//    if (i > n) {
//        return 0;
//    }
//    if (i == n) {
//        return 1;
//    }
//    return climb_Stairs(i + 1, n) + climb_Stairs(i + 2, n);
//}
//Method 2:
//记忆递归，通过利用 memo array来记录前一步骤的计算来降低计算量
//Time complexity : O(n). Size of recursion tree can go upto n.
//Space complexity : O(n). The depth of recursion tree can go upto n.
//int climbStairs(int n){
//    int memo[n+1];
//    return climb_Stairs(0,n,memo);
//}
//
//int climb_Stairs(int i, int n, int memo[]){
//    if (i>n) {
//        return 0;
//    }
//    if (i == n) {
//        return 1;
//    }
//    if (memo[i] >0) {
//        return memo[i];
//    }
//    memo[i] = climb_Stairs(i+1,n,memo)+climb_Stairs(i+2,n,memo);
//    return memo[i];
//}
//Method 3:
//动态规划
// the total number of ways to reach i^{th}
// is equal to sum of ways of reaching (i-1)^{th}
// step and ways of reaching (i-2)^{th}  step.
int climbStairs(int n){
    if (n == 1) {
        return 1;
    }
    int dp[n+1] ={0};
    dp[1]=1;
    dp[2]=2;
    for (int i = 3; i <= n; ++i) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}