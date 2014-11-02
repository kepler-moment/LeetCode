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
    ListNode *deleteDuplicates(ListNode *head) 
    {
        ListNode *p,*pre_p;
        ListNode *newhead = new ListNode(0);
        newhead->next = head;
        pre_p = newhead,p = head;
        while(p && p->next)
        {
            if(p->next && p->next->val == p->val)
            {
                while(p->next && p->next->val == p->val)
                {
                    ListNode *tmp = p->next->next;
                    delete p->next;
                    p->next = tmp;
                }
                pre_p->next = p->next;
                delete p;
                p = pre_p->next;
                continue;
            }
            pre_p = p;
            p = p->next;
            
        }
        head = newhead->next;
        delete newhead;
        return head;
    }
};
