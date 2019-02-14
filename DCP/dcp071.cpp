/*
Using a function rand7() that returns an integer from 1 to 7 (inclusive) with uniform probability, 
implement a function rand5() that returns an integer from 1 to 5 (inclusive).
*/

#include <bits/stdc++.h>
using namespace std;

int rand7()
{
    return ((rand() % 7) + 1);
}

int rand5()
{
    int res;
    while (1)
    {
        res = rand7();
        if (res <= 5)
            return res;
    };
}

int main()
{
    return 0;
}