#include <bits/stdc++.h>
using namespace std;

//  Definition for singly-linked list.
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
    int countNodes(ListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    void printList(ListNode *head)
    {
        while (head != NULL)
        {
            cout << head->val << "->";
            head = head->next;
        }
    }
    ListNode *reverseKGroup(ListNode *head, const int &k, int count)
    {
        if (count < k)
        {
            return head;
        }

        int counter = 0;
        ListNode *prev = NULL, *curr = head, *next = NULL;
        while (counter < k && next != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            counter++;
        }
        if (next != NULL)
        {
            head->next = reverseKGroup(next, k, count - k);
        }
        return prev;
    }

public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL || k <= 1)
        {
            return head;
        }
        int count = countNodes(head);
        k = k % count;
        return reverseKGroup(head, k, count);
    }
};