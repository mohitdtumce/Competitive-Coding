#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long double> prob(n);
    for (int i = 0; i < n; i++)
        cin >> prob[i];
    sort(prob.begin(), prob.end(), greater<long double>());
    long double prevProb = prob[0], currProb;
    long double prevNeg = (1 - prob[0]);
    for (int i = 1; i < n; i++)
    {
        currProb = (prevProb * (1 - prob[i]) + prevNeg * prob[i]);
        if (currProb > prevProb)
        {
            prevProb = currProb;
        }
        else
        {
            break;
        }
        prevNeg *= (1 - prob[i]);
    }
    cout << setprecision(9) << fixed << max(currProb, prevProb);
    return 0;
}