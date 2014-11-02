//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//implementation
class Solution {
public:
    ListNode *swapPairs(ListNode *head) 
    {
        if(!head || !head->next)
            return head;
        ListNode* newhead = new ListNode(0);
        newhead->next = head;
        ListNode *pre_pre_p,*pre_p,*p;
        pre_pre_p = newhead,pre_p = head,p = head->next;
        while(1)
        {
            pre_p->next = p->next;
            p->next = pre_p;
            pre_pre_p->next = p;
            if(!pre_p->next || !pre_p->next->next)
                break;
            pre_pre_p = pre_pre_p->next->next;
            pre_p = pre_p->next;
            p = pre_p->next;
        }
        head = newhead->next;
        delete newhead;
        return head;
    }
};
