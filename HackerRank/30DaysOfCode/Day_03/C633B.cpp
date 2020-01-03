#include <bits/stdc++.h>
using namespace std;

int countZeros(long n)
{
    int res = 0;
    long pow5 = 5;
    while (n / pow5)
    {
        res += n / pow5;
        pow5 *= 5;
    }
    return res;
}

int main()
{
    int m;
    cin >> m;
    long itr = 1, res = 0;
    vector<int> vec;
    while (1)
    {
        int count = countZeros(itr);
        if (count > m)
        {
            break;
        }
        else if (count == m)
        {
            res += 1;
            vec.push_back(itr);
        }
        itr++;
    }
    cout << res << "\n";
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
        cout << *itr << " ";
    return 0;
}