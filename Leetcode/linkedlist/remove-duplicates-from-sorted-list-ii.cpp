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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode dummy(0, head->next);
        ListNode *ptr = &dummy, *qtr = &dummy;

        while (ptr != NULL && ptr->next != NULL)
        {
            qtr = ptr;
            int counter = 0;
            while (qtr != NULL && qtr->next != NULL && ptr->next->val == qtr->next->val) {
                qtr = qtr->next;
                counter++;
            }       
            if (counter > 1)
                ptr->next = qtr->next;
            else
                ptr = ptr->next;
        }
        return dummy.next;
    }
};