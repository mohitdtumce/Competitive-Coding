#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode * deleteDuplicates(ListNode *head) {
        ListNode *origin = head;
            while (head != NULL) {
                    while(head->next != NULL && head->val == head->next->val) {
                            head->next = head->next->next;
                    }
                    head = head->next;
            }
            return origin;
}

int main() {
    return 0;
}