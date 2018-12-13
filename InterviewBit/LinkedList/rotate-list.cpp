#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

int count(ListNode * head) {
    ListNode * p = head;
    int cnt = 0;
    while(p) {
        p = p->next;
        cnt++;
    }
    return cnt;
}

ListNode* rotateRight(ListNode* head, int k) {
    if (k == 0)
        return head;
    if (head == NULL || head->next == NULL)
        return head;
    int cnt = count(head);
    k %= cnt;
    ListNode * p = head;
    ListNode * q = head;
    while (k--) {
        if (!p)
            return head;
        p = p->next;
    }
    
    while (p->next != NULL) {
        q = q->next;
        p = p->next;
    }
    p->next = head;
    head = q->next;
    q->next = NULL;
    return head;
}

int main() {
    return 0;
}