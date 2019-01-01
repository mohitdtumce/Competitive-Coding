#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<long long> cost(12);
    cost[0] = 0;
    cost[1] = a;
    cost[2] = min(b, 2 * cost[1]);
    cost[3] = min(c, min(cost[2] + cost[1], 3 * cost[1]));
    for (int i = 4; i <= 11; i++)
    {
        cost[i] = (min(cost[i - 1] + cost[1], min(cost[i - 1] + cost[2], cost[i - 3] + cost[3])));
    }

    long long minCost;
    switch (n % 4)
    {
    case 0:
        minCost = 0;
        break;
    case 1:
        minCost = min(cost[3], min(cost[7], cost[11]));
        break;
    case 2:
        minCost = min(cost[2], min(cost[6], cost[10]));
        break;
    case 3:
        minCost = min(cost[1], min(cost[5], cost[9]));
        break;
    }
    cout << minCost;
    return 0;
}