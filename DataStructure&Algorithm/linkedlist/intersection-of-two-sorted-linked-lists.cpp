
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

ListNode * findIntersection(ListNode * a, ListNode * b) {
    if (a == NULL || b == NULL)
        return NULL;

    ListNode dummy;
    ListNode *result = &dummy;
    ListNode *ptr = a, *qtr = b;
    while(ptr != NULL && qtr != NULL) {
        if (ptr->val == qtr->val) {
            result->next = new ListNode(ptr->val);
            result = result->next;
            ptr = ptr->next;
            qtr = qtr->next;
        } else if (ptr->val < qtr->val) {
            ptr = ptr->next;
        } else {
            qtr = qtr->next;
        }
    }
    return dummy.next;
}

int main()
{
}