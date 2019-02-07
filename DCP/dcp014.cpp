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
    // default random engine:
    // This is a random number engine class that generates pseudo-random numbers.
    default_random_engine generator;

    // Uniform real distribution:
    // Random number distribution that produces floating-point valuesaccording to a
    // uniform distribution,which is described by the following probability density function
    //      p(x|a, b) = (1/(b - a)), a <= x < b
    
    // This distribution (also know as rectangular distribution) produces random numbers
    // in a range [a,b) where all intervals of the same length within it are equally probable.

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

    return 4 * (double(incircle) / SAMPLE_SIZE);
}

int main()
{
    cout << estimatePI();
}