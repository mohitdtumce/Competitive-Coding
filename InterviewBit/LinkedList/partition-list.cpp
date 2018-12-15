#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* partition(ListNode* head, int x) {
    ListNode * dummy = new ListNode(0);
    dummy->next = head;
    
    ListNode * newList = new ListNode(0);
    ListNode * ptr = newList;
    ListNode * curr = dummy;
    ListNode * temp = NULL;
    while (curr->next) {
        if (curr->next->val >= k) {
            temp = curr->next;
            curr->next = temp->next;
            temp->next = NULL;
            ptr->next = temp;
            ptr = ptr->next;
        } else {
            curr = curr->next;   
        }
    }
    curr->next = newList->next;
    return dummy->next;
}

int main() {
    return 0;
}