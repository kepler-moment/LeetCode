//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head)
    {
        if(!head)
            return NULL;
        RandomListNode *p = head;
        while(p)
        {
            RandomListNode *newnode = new RandomListNode(p->label);
            newnode->next = p->next;
            p->next = newnode;
            p = p->next->next;
        }
        p = head;
        while(p)
        {
            if(p->random)
                p->next->random = p->random->next;
            p = p->next->next;
        }
        RandomListNode *q,*newhead;
        p = head;
        q = newhead = p->next;
        while(p)
        {
            p->next = p->next->next;
            if(q->next)
                q->next = q->next->next;
            p = p->next;
            q = q->next;
        }
        return newhead;
    }
};
