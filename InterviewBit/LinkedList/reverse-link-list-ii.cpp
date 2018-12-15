#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverseLinkedList(ListNode *head, int size)
{
    if (size <= 1)
        return head;
    ListNode *cur = head, *nextNode = head->next, *tmp;

    for (int i = 0; i < (size - 1); i++)
    {
        tmp = nextNode->next;
        nextNode->next = cur;
        cur = nextNode;
        nextNode = tmp;
    }

    head->next = nextNode;
    return cur;
}

ListNode *reverseBetween(ListNode *head, int m, int n)
{
    ListNode *dummyHead = new ListNode(0);
    dummyHead->next = head;

    ListNode *prev = dummyHead;
    ListNode *cur = head;
    int index = 1;
    while (index < m)
    {
        prev = cur;
        cur = cur->next;
        index++;
    }
    ListNode *endSubList = reverseLinkedList(cur, n - m + 1);
    prev->next = endSubList;

    return dummyHead->next;
}

int main()
{
    return 0;
}