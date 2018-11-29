#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, q;
    cin>>n>>k>>q;
    vector<int> s(n), e(n);
    for (int i = 0; i < n; i++) {
        cin>>s[i]>>e[i];
    }
    sort(s.begin(), s.end());
    sort(e.begin(), e.end());
    vector<long long> counter(200001, 0);
    int st, et, a, b, count;
    for (int t = 1; t < 200001; t++) {
        a = (upper_bound(s.begin(), s.end(), t) - s.begin());
        b = (lower_bound(e.begin(), e.end(), t) - e.begin());
        counter[t] += (a - b);
    }

    vector<pair<int, int> > Q(n);
    for (int i = 0; i < q; i++) {
        cin>>Q[i].first>>Q[i].second;
        count = 0;
        for (int j = st; j <= et; j++)
            if (counter[j] >= k)
                count++;
        cout<<count<<"\n";
    }

    for (int i = 0; i < q; i++) {
        cin>>Q[i].first>>Q[i].second;
        count = 0;
        for (int j = st; j <= et; j++)
            if (counter[j] >= k)
                count++;
        cout<<count<<"\n";
    }
    return 0;
}
