//
// Created by HCY on 2018/4/20.
//

#include "easyHeader.h"
//Method 1;
//Stupid method:
//void merge(vector<int>& nums1,int m,vector<int>& nums2,int n) {
//    vector<int> nums;
//    int i=0,j=0;
//    while (i!=m && j!=n) {
//        if (nums1[i]<=nums2[j]) {
//            nums.push_back(nums1[i]);
//            i++;
//        } else {
//            nums.push_back(nums2[j]);
//            j++;
//        }
//    }
//    while (i != m) {
//        nums.push_back(nums1[i]);
//        i++;
//    }
//    while (j != n) {
//        nums.push_back(nums2[j]);
//        j++;
//    }
//    swap(nums,nums1);
//}
//Methed 2:
//反向思考，从大到校排
//点睛之处
// i>0&&nums1[i] 确保当Nums1[i]到头后只得到nums2[j]
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i=m-1,j=n-1,tar=n+m-1;
    while (j != 0) {
        nums1[tar--] = i>=0 && nums1[i]>nums2[j] ? nums1[i--] : nums2[j];
    }
}