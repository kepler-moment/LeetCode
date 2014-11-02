//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//find the k-th node counting from the end
class Solution {
public:
    ListNode *rotateRight(ListNode *head, int k) 
    {
        if(!head || !k)
            return head;
        ListNode *end = head;
        for(int i = 1;i < k;i++)
        {
            if(!end->next)
                end = head;
            else
                end = end->next;
        }
        ListNode *p,*pre_p;
        p = pre_p = head;
        while(end->next)
        {
            pre_p = p;
            p = p->next;
            end = end->next;
        }
        if(p != pre_p)
        {
            end->next = head;
            pre_p ->next = NULL;
            head = p;
        }
        return head;
    }
};
