#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head, int k) {
    if (k <= 1)
        return head;
    if (head == NULL || head->next == NULL)
        return head;
    ListNode * curr = head;
    ListNode * next = NULL;
    ListNode * prev = NULL;
    int count = 0;
    while (count < k && curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    if (next) {
        head->next = reverseList(next, k);
    }
    return prev;
}

int main() {
    return 0;
}