/*
cons(a, b) constructs a pair,
and car(pair) and cdr(pair) returns the first and last element of that pair. 

For example, car(cons(3, 4)) returns 3, and cdr(cons(3, 4)) returns 4.

Given this implementation of cons:

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair
Implement car and cdr.
*/

#include <bits/stdc++.h>
using namespace std;

template <class T1, class T2>
class cons
{
    T1 first;
    T2 second;
  public:
    cons(T1 first, T2 second)
    {
        this->first = first;
        this->second = second;
    }
    
    T1 car() {
        return this->first;
    }

    T2 cdr() {
        return this->second;
    }
};

int main()
{

    return 0;
}