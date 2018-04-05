//
// Created by HCY on 2018/4/5.
//

#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* removeNthFromEnd(ListNode* head,int n) {
    //双循环
//    int m=0;
//    ListNode *p = new ListNode(0);
//    p->next = head;
//    ListNode *first = head;
//    while (first != NULL) {
//        m++;
//        first = first->next;
//    }
//    m-=n;
//    first = p;
//    while (m>0) {
//        m--;
//        first = first->next;
//    }
//    first->next=first->next->next;
//    return p->next;
    //优化成单循环，使用两个指针，第一个指针指向第N个后，第二个指针和第一个指针同步向后移动
    //直到第一个指针指向最后一个节点，在这个过程中始终保持两个指针的间隔为N，再通过第二个指针remove
    ListNode *p = new ListNode(0);
    p->next = head;
    ListNode *p1 =p;
    ListNode *p2 =p;
    for (int i = 1; i <= n; ++i) {//remove L-n+1
        p1=p1->next;
    }
    while (p1 != NULL) {
        p1= p1->next;
        p2=p2->next;
    }
    p2->next=p2->next->next;
    return p->next;
} 

