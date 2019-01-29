/*
Implement a queue using two stacks. 
Recall that a queue is a FIFO (first-in, first-out) data structure with the following methods: 
enqueue, which inserts an element into the queue, 
and dequeue, which removes it.
*/

#include <bits/stdc++.h>
using namespace std;

// O(1) Enqueue and O(n) Dequeue
template <class T>
class Queue
{
    stack<T> S;
  public:
    void Enqueue(T data)
    {
        this->S.push(data);
    }

    T Dequeue()
    {

        if (this->S.size() == 0)
        {
            throw "Queue Empty!!";
        }

        T data;
        if (this->S.size() == 1)
        {
            data = this->S.top();
            this->S.pop();
            return data;
        }

        stack<T> temp;
        while (!this->S.empty())
        {
            temp.push(this->S.top());
            this->S.pop();
        }
        data = temp.top();
        temp.pop();
        while (!temp.empty()) {
            this->S.push(temp.top());
            temp.pop();
        }
        return data;
    }

    bool Empty() {
        return this->S.empty();
    }

    int Size() {
        return this->S.size();
    }
};

int main()
{
    Queue<int> Q;
    Q.Enqueue(12);
    Q.Enqueue(11);
    Q.Enqueue(10);
    Q.Enqueue(9);
    Q.Enqueue(8);
    Q.Enqueue(7);
    Q.Enqueue(6);
    Q.Enqueue(5);
    Q.Enqueue(4);
    Q.Enqueue(3);
    Q.Enqueue(2);
    Q.Enqueue(1);
    Q.Enqueue(0);
    while (!Q.Empty()) {
        cout<<Q.Dequeue()<<" ";
    }
    return 0;
}