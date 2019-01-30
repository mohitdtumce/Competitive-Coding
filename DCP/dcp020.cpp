/*
Given two singly linked lists that intersect at some point, 
find the intersecting node. The lists are non-cyclical.

For example, given A = 3 -> 7 -> 8 -> 10 and B = 99 -> 1 -> 8 -> 10, 
return the node with value 8.

In this example, assume nodes with the same value are the exact same node objects.

Do this in O(M + N) time (where M and N are the lengths of the lists) and constant space.
*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
  public:
    T data;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <class T>
int countNodes(Node<T> *head)
{
    Node<T> *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

template <class T>
Node<T> *findIntersectionHelper(Node<T> *a, Node<T> *b, int d)
{
    for (int i = 0; i < d; i++)
        a = a->next;

    while (a && b && a != b)
    {
        a = a->next;
        b = b->next;
    }

    return a;
}

template <class T>
Node<T> *findIntersection(Node<T> *a, Node<T> *b)
{
    if (a == NULL || b == NULL)
        return NULL;

    int len1 = countNodes(a);
    int len2 = countNodes(b);

    if (len1 >= len2)
    {
        return findIntersectionHelper(a, b, len1 - len2);
    }
    else
    {
        return findIntersectionHelper(a, b, len2 - len1);
    }
}

int main()
{
    return 0;
}