//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//implentation
class Solution {
public:
    ListNode *reverseBetween(ListNode *head, int m, int n) 
    {
        ListNode *newhead = new ListNode(0);
        newhead->next = head;
        
        ListNode *p,*pre_p,*tmphead;
        tmphead = pre_p = p = newhead;
        for(int i = 0;i <= m;i++)
        {
            tmphead = pre_p;
            pre_p = p;
            p = p->next;
        }
        
        for(int i = 0;i < n - m;i++)
        {
            pre_p->next = p->next;
            p->next = tmphead->next;
            tmphead->next = p;
            p = pre_p->next;
        }
        
        head = newhead->next;
        delete newhead;
        return head;
    }
};
