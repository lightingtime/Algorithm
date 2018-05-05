//
// Created by HCY on 2018/5/5.
//

#include "easyHeader.h"
//Method 1:
//利用一快一慢两个指针来遍历
//慢速指针每次移动一步，而快速指针每次移动两步。
//如果列表中没有循环，fast指针将最终到达末尾，在这种情况下，我们可以返回false。
bool hasCycle(ListNode *head) {
    if (!head || !head->next) {
        return false;
    }
    ListNode *p = head;
    ListNode *tem = head->next;
    while (tem != p) {
        if (tem == NULL || tem->next == NULL) {
            return false;
        }
        p = p->next;
        p = tem->next->next;
    }
    return true;
}

//Method 2:
//利用MAP
//bool hasCycle(ListNode *head) {
//    map<ListNode*,int> h_map;
//
//    ListNode* curr = head;
//
//    while(curr){
//        h_map[curr]++;
//
//        if(h_map[curr] > 1)
//            return true;
//        curr = curr->next;
//    }
//
//    return false;
//}

