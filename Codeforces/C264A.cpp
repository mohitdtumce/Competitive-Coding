#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<int> S;
    queue<int> Q;
    for (int i = 1; i <= str.size(); i++)
    {
        if (str[i - 1] == 'l')
            S.push(i);
        else
            Q.push(i);
    }
    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    return 0;
}