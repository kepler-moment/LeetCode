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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
    	ListNode* result = NULL;
    	ListNode *t1,*t2,*p;
    	int carry = 0;
    	t1 = l1,t2 = l2,p = result;
    	while(t1 && t2)
    	{
    		int tmp = t1->val + t2->val + carry;
    		if(!result)
    		{
    			result = (ListNode*)malloc(sizeof(ListNode));
    			p = result;
    			result->val = tmp % 10;
    			result->next = NULL;
    		}
    		else
    		{
    			ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    			q->val = tmp % 10;
    			p->next = q;
    			p = p->next;
    		}
    		carry = tmp / 10;
    		t1 = t1->next,t2 = t2->next;
    	}
    	while(t1)
    	{
    		int tmp = t1->val + carry;
    		if(!result)
    		{
    			result = (ListNode*)malloc(sizeof(ListNode));
    			p = result;
    			result->val = tmp % 10;
    			result->next = NULL;
    		}
    		else
    		{
    			ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    			q->val = tmp % 10;
    			q->next = NULL;
    			p->next = q;
    			p = p->next;
    		}
    		carry = tmp / 10;
    		t1 = t1->next;
    	}
    	while(t2)
    	{
    		int tmp = t2->val + carry;
    		if(!result)
    		{
    			result = (ListNode*)malloc(sizeof(ListNode));
    			p = result;
    			result->val = tmp % 10;
    		}
    		else
    		{
    			ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    			q->val = tmp % 10;
    			q->next = NULL;
    			p->next = q;
    			p = p->next;
    		}
    		carry = tmp / 10;
    		t2 = t2->next;
    	}
    	if(carry)
    	{
    		ListNode* q = (ListNode*)malloc(sizeof(ListNode));
    		q->val = carry;
    		q->next = NULL;
    		p->next = q;
    	}
    	return result;
    }
};