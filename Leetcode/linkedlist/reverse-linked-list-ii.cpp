#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverse(ListNode *head, int count)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *curr = head, *next = NULL, *prev = NULL;
        while (curr != NULL && count > 0)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count--;
        }
        head->next = curr;
        return prev;
    }

    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (head == NULL || head->next == NULL || left >= right || left <= 0)
            return head;
        ListNode dummy(-1, head);
        ListNode *qtr = &dummy, *ptr = head;
        int diff = right - left + 1;
        while (ptr != NULL && left > 1)
        {
            left--;
            qtr = ptr;
            ptr = ptr->next;
        }
        qtr->next = reverse(ptr, diff);
        return dummy.next;
    }
};