// Given the head of a singly linked list, reverse it in-place.

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
void PushFront(Node<T> **head, T data)
{
    Node<T> *newNode = new Node<T>(data);
    newNode->next = *head;
    *head = newNode;
}

// Only use primary data structures like int char float double etc.
template <class T>
void PrintList(Node<T> *head)
{
    while (head)
    {
        cout << head->data << ' ';
        head = head->next;
    }
    cout << '\n';
}

template <class T>
void ReverseListInplace(Node<T> **head)
{
    Node<T> *curr = *head;
    Node<T> *prev = NULL;
    Node<T> *next = NULL;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *head = prev;
}

int main()
{
    Node<int> * head = NULL;
    PushFront(&head, 1);
    PushFront(&head, 2);
    PushFront(&head, 3);
    PushFront(&head, 4);
    PushFront(&head, 5);
    PrintList(head);
    ReverseListInplace(&head);
    PrintList(head);
    ReverseListInplace(&head);
    PrintList(head);
    return 0;
}