//
// Created by hcy19 on 2018/3/28.
//

#include <math.h>
#include <clocale>
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) :val(x),next(NULL){}
};

ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
    ListNode node(0);
    ListNode *p1 = l1,*p2=l2,*parent;
    parent = &node;
    int more = 0;
    while (p1 || p2 || more) {
        int d1 = p1?p1->val:0;
        int d2 = p2?p2->val:0;
        if (p1) p1 = p1->next;
        if (p2) p2 = p2->next;
        more += d1+d2;
        ListNode *node = new ListNode(more % 10);
        parent->next = node;
        parent = node;
        more /=10;
    }
    return node.next;
}

