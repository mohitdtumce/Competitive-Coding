// Given k sorted singly linked lists,
// write a function to merge all the lists into one sorted singly linked list.

#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void PushFront(Node **head, T data)
{
    Node *newNode = new Node(data);
    newNode->next = *head;
    *head = newNode;
}

Node *Merge(Node *a, Node *b)
{
    if (a == NULL)
        return b;
    else if (b == NULL)
        return a;

    Node *res = NULL;
    if (a->data < b->data)
    {
        res = a;
        res->next = Merge(a->next, b);
    }
    else
    {
        res = b;
        res->next = Merge(a, b->next);
    }

    return res;
}

Node *MergeSortedLists(vector<Node *> lists)
{
    Node *res = NULL;
    for (int i = 0; i < lists.size(); i++)
    {
        res = Merge(res, lists[i]);
    }

    return res;
}

int main()
{
    return 0;
}