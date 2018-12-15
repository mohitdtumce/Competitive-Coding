#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverse(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *curr = head;
    ListNode *prev = NULL;
    ListNode *next = NULL;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode *mergeAlternate(ListNode *a, ListNode *b, bool flag)
{
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    ListNode *res = NULL;
    if (flag)
    {
        res = a;
        res->next = mergeAlternate(a->next, b, !flag);
    }
    else
    {
        res = b;
        res->next = mergeAlternate(a, b->next, !flag);
    }
    return res;
}

ListNode * reorderList(ListNode *head)
{
    if (!head || !head->next)
        return head;
    ListNode *fast = head;
    ListNode *slow = head;
    ListNode *slowPrev = NULL;
    while (slow && fast)
    {
        fast = fast->next;
        if (fast)
        {
            fast = fast->next;
            slowPrev = slow;
            slow = slow->next;
        }
    }
    slowPrev->next = NULL;
    return mergeAlternate(head, slow);
}

int main()
{
    return 0;
}