/*
Implement integer exponentiation. 
That is, implement the pow(x, y) function, where x and y are integers and returns x^y.

Do this faster than the naive method of repeated multiplication.

For example, pow(2, 10) should return 1024.
*/

#include <bits/stdc++.h>
using namespace std;

double helper(double x, int y)
{
    if (y == 0)
        return 1;
    else
    {
        double res = helper(x, y / 2);
        if (y & 1)
        {
            return res * res * x;
        }
        else
        {
            return res * res;
        }
    }
}

double calculatePow(double x, int y)
{
    double res = helper(x, abs(y));
    if (y > 0)
        return res;
    else
        return 1.0 / res;
}

int main()
{
    cout << calculatePow(10, 1);
    return 0;
}