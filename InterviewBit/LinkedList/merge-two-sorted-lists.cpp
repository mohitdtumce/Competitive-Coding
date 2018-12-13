#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode * mergeTwoLists(ListNode *a, ListNode *b)
{
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    ListNode *res = NULL;
    if (a->val <= b->val)
    {
        res = a;
        res->next = mergeTwoLists(a->next, b);
    }
    else
    {
        res = b;
        res->next = mergeTwoLists(a, b->next);
    }
    return res;
}

int main()
{
    return 0;
}