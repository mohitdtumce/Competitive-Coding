#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *cutInHalf(ListNode *head)
{
    ListNode *slow = head, *fast = head;
    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *middle = slow->next;
    slow->next = NULL;
    return middle;
}

ListNode *reverse(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *curr = head, *next = NULL, *prev = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode *alternativeMerge(ListNode *a, ListNode *b)
{
    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;
    else
    {
        ListNode *p, *q;
        while (a != NULL && b != NULL)
        {
            p = a->next;
            q = b->next;
            a->next = b;
            a = p;
            b->next = a;
            b = q;
        }
    }
}

ListNode *reorderLL(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // cut in half
    ListNode *second = cutInHalf(head);
    second = reverse(second);
    // alternate merge (*)
    return alternativeMerge(head, second);
}

int main()
{
}