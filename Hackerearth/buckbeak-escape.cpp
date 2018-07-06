#include <bits/stdc++.h>
using namespace std;

int crossProduct(pair <int,int> a,pair <int,int> b,pair <int,int> c)
{
    int x, y, p, q;
    x = b.first - a.first;
    y = b.second - a.second;
    p = c.first - a.first;
    q = c.second - a.second;
    int cp = (x*q- y*p);
    return cp;
}

int main()
{
    int n, m, bx, by, tempx, tempy;
    cin>>n>>m>>bx>>by;
    pair<int, int> Buck;
    Buck.first = bx;
    Buck.second = by;
    vector<pair<int, int>> P;
    for (int i = 0; i < n; i++)
    {
        cin>>tempx>>tempy;
        P.push_back(make_pair(tempx, tempy));
    }
    vector<pair<int, int>> C;
    for (int i = 0; i <= m; i++)
    {
        cin>>tempx>>tempy;
        C.push_back(make_pair(tempx, tempy));
    }
    vector<int> attacks;
    int vision = P[0].first;
    int c;
    for (int i = 0; i < m; i++)
    {
        if ((C[i].first>vision)^(C[i+1].first>vision))
        {
            c = 0;
            for(int j = 0; j < n; j++)
                if (crossProduct(C[i], C[i+1], P[j]) > 0)
                    c++;
            if (C[i+1].first > vision)
                c = n - c;
            attacks.push_back(c);
        }
    }
    int res = n, g = 0;
    for(int b = 1; b < (1<<n); b++)
    {
        g = 0;
        vector<int> gp(n+1);
        gp[0] = 0;
        for (int i = 0; i < n; i++)
        {
            if (b & (1 << i))
                g++;
            gp[i+1] = g;
        }
        stack<int> S;
        for (int i = 0; i< attacks.size(); i++)
        {
            g = gp[attacks[i]];
            if(!S.empty() && g == S.top())
                S.pop();
            else
                S.push(g);
        }
        if (S.empty())
            res = min(res,n - __builtin_popcount(b));
    }
    cout<<res<<"\n";
}