//============================================================================
// Name        : ACM.cpp
// Author      : kepler-moment
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
* 1.set two points p and q;
* 2.every time,p go two steps and q go one step;
* 3.if there is a cycle, p will meet q.
*/
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *p,*q;
        p = q = head;
        while(p && p->next)
        {
            q = q->next;
            p = p->next->next;
            if(q == p)
                return true;
        }
        return false;
    }
};
