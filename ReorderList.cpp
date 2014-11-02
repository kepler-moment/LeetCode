//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
* assume List 1->2->3->4->5->6->7->NULL
* 1.calucate numOfNodes = 7;
* 2.divide the list into two lists,the fist list A is 1th node to [(numOfNodes + 1) / 2]th node, the rest the second list B. In this sample, A = 1->2->3->4->NULL, B = 5->6->7->NULL
* 3.reverse B in place so that it will become B = 7->6->5->NULL
* 4.merge A and B
* 5.time complexity is O(n)
*/
class Solution {
public:
    void reorderList(ListNode *head) 
    {
        if(!head || !head->next)
            return;
        int numOfNodes = 0;
        ListNode *p = head,*q;
        while(p)
        {
            numOfNodes++;
            p = p->next;
        }
        p = q = head;
        for(int i = 1;i <= (numOfNodes + 1) / 2;i++)
        {
            p = q;
            q = q->next;
        }
        while(q->next)
        {
            ListNode *tmp = q->next;
            q->next = tmp->next;
            tmp->next = p->next;
            p->next = tmp;
        }
        q = p->next;
        p->next = NULL;
        p = head;
        while(q)
        {
            ListNode *tmp = q->next;
            q->next = p->next;
            p ->next = q;
            q = tmp;
            p = p->next->next;
        }
    }
};