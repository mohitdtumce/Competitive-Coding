#include <bits/stdc++.h>
using namespace std;

int rotation(vector<string> &vec, string &str)
{
    size_t found;
    int sum = 0;
    string conc;
    for (auto itr = vec.begin(); itr != vec.end(); itr++)
    {
        conc = (*itr) + (*itr);
        found = conc.find(str);
        if (found == string::npos)
        {
            return -1;
        }
        else
        {
            sum += int(found);
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<string> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    string temp;
    int res = 2500, curr;
    for (int i = 0; i < vec.size(); i++)
    {
        temp = vec[i];
        curr = rotation(vec, temp);
        if (curr == -1)
        {
            cout << "-1";
            return 0;
        }
        res = min(res, curr);
    }
    cout << res;
    return 0;
}