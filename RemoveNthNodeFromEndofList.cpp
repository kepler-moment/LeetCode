//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * p is the (n - 1)th node, q is head
 * traverse p and q together, when p points to the last node, q will be the nth node from the end
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *p,*q,*r;
        q = r = p = head;
        while(n > 1)
        {
        	p = p->next;
        	n--;
        }
        while(p->next)
        {
        	r = q;
        	q = q->next;
        	p = p->next;
        }
        if(q == head)
        	head = head->next;
        else
        	r->next = q->next;
        delete q;
        return head;
    }
};
