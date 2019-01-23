#include <bits/stdc++.h>
using namespace std;

pair<int, int> calculateVertex(pair<int, int> a, pair<int, int> b, pair<int, int> c)
{
    return make_pair((a.first + c.first - b.first), (a.second + c.second - b.second));
}

int main() {
    pair<int, int> a, b, c, d;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;
    cin>>c.first>>c.second;
    cout<<"3\n";
    d = calculateVertex(a, b, c);
    cout<<d.first<<" "<<d.second<<"\n";
    d = calculateVertex(b, a, c);
    cout<<d.first<<" "<<d.second<<"\n";
    d = calculateVertex(a, c, b);
    cout<<d.first<<" "<<d.second;
}