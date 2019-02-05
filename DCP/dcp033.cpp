/*
Compute the running median of a sequence of numbers. 
That is, given a stream of numbers, print out the median of the list so far on each new element.

Recall that the median of an even-numbered list is the average of the two middle numbers.

For example, given the sequence [2, 1, 5, 7, 2, 0, 5], your algorithm should print out:

2
1.5
2
3.5
2
2
2
*/

#include <bits/stdc++.h>
using namespace std;

void medianRunningStream(const vector<int> &vec)
{
    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    float em = vec[0];
    maxheap.push(vec[0]);
    cout << em << " ";
    int temp;
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] <= em)
        {
            maxheap.push(vec[i]);
            if (maxheap.size() > minheap.size() + 1)
            {
                minheap.push(maxheap.top());
                maxheap.pop();
            }
        }
        else
        {
            minheap.push(vec[i]);
            if (minheap.size() > maxheap.size() + 1)
            {
                maxheap.push(minheap.top());
                minheap.pop();
            }
        }

        if (maxheap.size() == minheap.size())
        {
            em = (1.0 * maxheap.top() + 1.0 * minheap.top()) / 2.0;
        }
        else if (maxheap.size() > minheap.size())
        {
            em = maxheap.top();
        }
        else
        {
            em = minheap.top();
        }
        cout << em << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> vec = {2, 1, 5, 7, 2, 0, 5};
    medianRunningStream(vec);
}
