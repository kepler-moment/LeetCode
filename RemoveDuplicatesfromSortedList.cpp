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
        ListNode* p = head;
        while(p)
        {
        	ListNode* q = p->next;
        	while(q)
        	{
        		if(q->val != p->val)
        			break;
        		p->next = q->next;
        		delete q;
        		q = p->next;
        	}
        	p = q;
        }
        return head;
    }
};
