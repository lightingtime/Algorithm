//
// Created by HCY on 2018/4/19.
//

#include "easyHeader.h"

ListNode* deleteDuplicates(ListNode* head) {
    ListNode *p  = head;
    while (p != NULL) {
        if (p->next!=NULL && p->next->val == p->val) {
            p->next = p->next->next;
        } else{
            p = p->next;
        }
    }
    return head;
} 

