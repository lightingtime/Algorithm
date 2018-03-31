//
// Created by HCY on 2018/3/31.
//

#include <vector>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int maxArea(vector<int>& height) {
    //注意从两端向中间逼近，每次移动指针，容器的底变窄，就需要找到一个增加容器高的点，而容器是根据容器较短的边来决定
    //容器的容积，所以移动容器较短的一边。
    int area = 0;
    int i=0;
    int j = height.size()-1;
    while (i < j) {
        area = max(area,min(height[i],height[j])*(j-i));
        height[i]>height[j] ? j--: i++ ;
    }
    return area;
}
//NOTE: O(n^2) 超时
//int area=0;
//for (int i = 0; i <height.size()-1; i++) {
//for (int j = 1; j <=height.size()-1; j++) {
//area = max(area,(j-i) * min(height[i],height[j]));
//}
//}
//return area;