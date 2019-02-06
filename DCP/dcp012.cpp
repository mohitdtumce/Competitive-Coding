/*
There exists a staircase with N steps, and you can climb up either 1 or 2 steps at a time. 
Given N, write a function that returns the number of unique ways you can climb the staircase. 
The order of the steps matters.

For example, if N is 4, then there are 5 unique ways:

1, 1, 1, 1
2, 1, 1
1, 2, 1
1, 1, 2
2, 2
What if, instead of being able to climb 1 or 2 steps at a time, 
you could climb any number from a set of positive integers X? 

For example, if X = {1, 3, 5}, you could climb 1, 3, or 5 steps at a time.
*/

#include <bits/stdc++.h>
using namespace std;

int staircaseProblem(int N)
{
    if (N == 1 || N == 2)
        return 1;
    else
    {
        int a = 1, b = 1, c;
        for (int n = 3; n <= N+1; n++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

int main()
{
    cout<<staircaseProblem(4);
}