/*
The area of a circle is defined as πr^2. 
Estimate π to 3 decimal places using a Monte Carlo method.

Hint: The basic equation of a circle is x2 + y2 = r2.
*/
#include <bits/stdc++.h>
using namespace std;
#define SAMPLE_SIZE 1000000

double estimatePI()
{
    default_random_engine generator;
    uniform_real_distribution<double> ud(0.0, 1.0);

    double a, b;
    int incircle = 0, outcircle = 0;
    for (int i = 0; i < SAMPLE_SIZE; i++)
    {
        a = ud(generator);
        b = ud(generator);
        if (a * a + b * b <= 1)
            incircle++;
    }

    return 4*(double(incircle) / SAMPLE_SIZE);
}

int main()
{
    cout<<estimatePI();
}