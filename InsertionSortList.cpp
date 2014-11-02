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
    ListNode *insertionSortList(ListNode *head) 
    {
        if(!head || !head->next)
            return head;
        ListNode *next = head->next,*pre_next = head;
        while(next)
        {
            if(pre_next->val <= next->val)
            {
                pre_next = next;
                next = next->next;
                continue;
            }
            if(next->val <= head->val)
            {
                pre_next->next = next->next;
                next->next = head;
                head = next;
                next = pre_next->next;
                continue;
            }
            ListNode *p,*pre_p;
            p = head->next,pre_p = head;
            while(p != next && p->val <= next->val)
            {
                pre_p = pre_p->next;
                p = p->next;
            }
            if(p != next)
            {
                pre_next->next = next->next;
                pre_p->next = next;
                next->next = p;
                next = pre_next->next;
                continue;
            }
            
        }
        return head;
    }
};
