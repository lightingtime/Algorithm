#include "Leetcode/Easy/easyHeader.h"
#include "Leetcode/Medium/mediumHeader.h"
int main() {
    ListNode *p = new ListNode(1);
    ListNode *p1 = new ListNode(2);
    ListNode *p2= new ListNode(3);
    p->next = p1;
    p1->next = p2;
    swapPairs(p);
    while (p!=NULL) {
        std::cout <<p->val<<endl;
        p = p->next;
    }
    return 0;
}