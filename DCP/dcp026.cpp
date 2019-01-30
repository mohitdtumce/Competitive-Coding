/*
Given a singly linked list and an integer k, remove the kth last element from the list. 
k is guaranteed to be smaller than the length of the list.

The list is very long, so making more than one pass is prohibitively expensive.

Do this in constant space and in one pass.
*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
  public:
    T data;
    Node<T> *next;
    Node()
    {
        this->next = NULL;
    }

    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
Node<T> *insert(Node<T> *head, int data)
{
    Node<T> *newNode = new Node<T>(data);
    newNode->next = head;
    head = newNode;
    return newNode;
}

template <class T>
Node<T> *removeKthNodeFromEnd(Node<T> *head, int k)
{
    if (k == 0 || head == NULL)
        return NULL;

    Node<T> *fast = head;
    Node<T> *slow = head;
    Node<T> *slowprev = NULL;

    for (int i = 0; i < k; i++)
    {
        if (fast)
            fast = fast->next;
    }

    while (fast)
    {
        slowprev = slow;
        slow = slow->next;
        fast = fast->next;
    }

    if (slow == head)
    {
        head = head->next;
        delete (slow);
    }
    else
    {
        slowprev->next = slow->next;
        delete (slow);
    }
    return head;
}

template <class T>
void printList(Node<T> *head)
{
    Node<T> *curr = head;
    while (curr)
    {
        cout << curr->data << ' ';
        curr = curr->next;
    }
    cout << "\n";
}

int main()
{
    Node<int> *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    printList(head);
    head = removeKthNodeFromEnd(head, 1);
    printList(head);
    return 0;
}