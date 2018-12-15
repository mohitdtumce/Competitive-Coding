#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool helper(ListNode ** left, ListNode * right) {
    if (right == NULL)
        return true;
    else {
        if (!helper(left, right->next)) {
            return false;
        } else {
            bool l = false;
            if ((*left)->val == (right->val))
                l = true;
            (*left) = (*left)->next;
            return l;
        }
    }
}
int lPalin(ListNode* head) {
    return helper(&head, head);
}

int main() {
    return 0;
}