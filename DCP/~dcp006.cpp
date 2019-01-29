/*
An XOR linked list is a more memory efficient doubly linked list. 
Instead of each node holding next and prev fields, it holds a field named both, 
which is an XOR of the next node and the previous node. 

Implement an XOR linked list; 
it has an add(element) which adds the element to the end, 
and a get(index) which returns the node at index.

If using a language that has no pointers (such as Python), 
you can assume you have access to get_pointer and dereference_pointer functions 
that converts between nodes and memory addresses.
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
  public:
    int data;
    Node *next;

    Node()
    {
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *xorNextPrev(Node *prev, Node *next)
{
    return (Node *)((uintptr_t)(next) ^ (uintptr_t)(prev));
}

class XORLinkedList
{
    Node *head, *last;
  public:
    XORLinkedList()
    {
        this->head = this->last = NULL;
    }

    void add(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            last = head;
            return;
        } else {
            last->next = xorNextPrev(last, newNode);
            last = last->next;
        }
    }

    void display() {
        Node * curr = head;
        while (curr != NULL) {

        }
    }
};

int main()
{

    return 0;
}


// Incomplete