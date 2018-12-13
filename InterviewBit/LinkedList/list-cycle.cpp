#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode * detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    ListNode *p = head;
    ListNode *q = head;
    bool cycle = false;
    while (p && p->next && q)
    {
        p = p->next->next;
        q = q->next;
        if (p == q)
        {
            cycle = true;
            break;
        }
    }

    if (!cycle)
    {
        return NULL;
    }
    else
    {
        p = head;
        while (p != q)
        {
            p = p->next;
            q = q->next;
        }
        return p;
    }
    return NULL;
}

int main() {
    return 0;
}