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


ListNode * rearrange(ListNode * head) {
    if (head == NULL || head->next == NULL) 
        return head;
    ListNode *ptr = head, *next = NULL, *prev = NULL;
    ListNode dummy;
    ListNode *even = &dummy;
    // bool isOdd = true;
    while (ptr != NULL) {
        prev = ptr;
        next = ptr->next;
        ptr->next = next->next;
        even->next = next;
        even = even->next;
        ptr = ptr->next;
    }
    prev->next = dummy.next;
    return head;    
}

int main()
{
}