#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
    int carry = 0;
    ListNode dummy(0);
    ListNode * curr = &dummy;
    int da, db;
    while (a || b) {
        da = (a != NULL)?a->val:0;
        db = (b != NULL)?b->val:0;
        curr->next = new ListNode((da + db + carry)%10);
        carry = (da+db+carry)/10;
        curr = curr->next;
        if (a)
            a = a->next;
        if (b)
            b = b->next;
    }
    
    if (carry)
        curr->next = new ListNode(carry);
    return dummy.next;
}

int main() {
    return 0;
}