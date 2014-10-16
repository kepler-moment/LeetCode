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

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
    	ListNode *head = NULL,*result = NULL;
    	ListNode *p1 = l1,*p2 = l2;
    	if(!l1)
    		return l2;
    	if(!l2)
    		return l1;
    	if(l1->val <= l2->val)
    	{
    		head = l1;
    		l1 = l1->next;
    	}
    	else
    	{
    		head = l2;
    		l2 = l2->next;
    	}
    	result = head;
    	while(l1 && l2)
    		if(l1->val <= l2->val)
    		{
    			result->next = l1;
    			l1 = l1->next;
    			result = result->next;
    		}
    		else
    		{
    			result->next = l2;
    			l2 = l2->next;
    			result = result->next;
    		}
    	if(l1)
    		result->next = l1;
    	if(l2)
    		result->next = l2;
    	return head;
    }
};