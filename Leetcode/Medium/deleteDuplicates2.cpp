//
// Created by HCY on 2018/4/19.
//

#include "mediumHeader.h"
//Method 1:
//递归
//如果本身为空，返回0
//如果本身的下一个为空，返回本身
//出现重复的值直接跳到不重复的点再递归
//ListNode* deleteDuplicates2(ListNode* head) {
//    if (!head) {
//        return 0;
//    }
//    if (!head->next) {
//        return head;
//    }
//    int val = head->val;
//    ListNode* p =head->next;
//    if (p->val!=val) {
//        head->next=deleteDuplicates2(p); // 重要的一步！！！
//        return head;
//    } else{
//        while (p&&p->val==val) p=p->next;
//        return deleteDuplicates2(p);
//    }
//}
//Method 2:
//利用多指针来删除重复节点
//重点是这些指针是头节点的前一个节点
//也就是p.next = head
//而不是p=head;
ListNode* deleteDuplicates(ListNode* head) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* cur = dummy;
    int duplicate;
    while (cur->next && cur->next->next) {
        if (cur->next->val == cur->next->next->val) {
            duplicate = cur->next->val;
            while (cur->next && cur->next->val == duplicate) { // 删除重复节点
                cur->next = cur->next->next;
            }
        }
        else {
            cur = cur->next;
        }
    }
    return dummy->next;
}