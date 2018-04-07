//
// Created by HCY on 2018/4/7.
//

#include "mediumHeader.h"
//
//struct ListNode {
//    int val;
//    ListNode *next;
//
//    ListNode(int x) : val(x), next(NULL) {}
//};
//Method 1 :
//多创建一个函数来交换两个节点
//bool SwapHelper(ListNode *p)
//{
//    if (p->next and p->next->next)
//    {
//        ListNode *n1 = p->next;
//        ListNode *n2 = p->next->next;
//
//        p->next = n2;
//        n1->next = n2->next;
//        n2->next = n1;
//
//        return true;
//    }
//
//    return false;
//}
//
//ListNode *swapPairs(ListNode *head)
//{
//    if (!head)
//        return nullptr;
//
//    // Create a head Node
//    ListNode *new_head= new ListNode(-1);
//    new_head->next = head;
//
//    ListNode *p = new_head;
//
//    // While has two more node and swap succeeded
//    while (SwapHelper(p))
//        p = p->next->next;
//
//    return new_head->next;
//}

//Method 2:
//递归
//invert the first 2 and then recurse for the rest
ListNode* swapPairs(ListNode* head) {
    //base case here
    if(!head || !head->next) return head;
    //Swapping part happens here, please draw to visualize
    ListNode *temp = head->next;
    head->next = swapPairs(temp->next);
    temp->next = head;

    return temp;
}