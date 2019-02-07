/*
You run an e-commerce website and want to record the last N order ids in a log. 
Implement a data structure to accomplish this, with the following API:

1. record(order_id): adds the order_id to the log
2. get_last(i): gets the ith last element from the log. 
    i is guaranteed to be smaller than or equal to N.

You should be as efficient with time and space as possible.
*/

#include <bits/stdc++.h>
using namespace std;

#define UnknownOrderId -1
#define UnknownOrderName ""

class Order
{
    int orderId;
    string orderName;

  public:
    Order(int orderId = UnknownOrderId, string orderName = UnknownOrderName)
    {
        this->orderId = orderId;
        this->orderName = orderName;
    }
};

// Circular Queue
class Logger
{
    int size;
    Order *Q;
    int front, rear;

  public:
    Logger(int size)
    {
        this->size = size;
        this->Q = new Order[this->size];
        this->front = this->rear = 0;
    }

    void record(Order order)
    {
        this->Q[this->rear % this->size] = order;
        this->rear = ((this->rear + 1) % this->size);
    }

    void remove()
    {
        this->front = ((this->front + 1) % this->size);
    }
    Order get_order(int i)
    {
        if (this->front <= this->rear)
        {
        }
        else
        {
        }
    }
};

int main()
{
}