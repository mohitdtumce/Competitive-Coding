#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    string temp;
    set<string> poland, enemy;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        poland.insert(temp);
    }

    for (int j = 0; j < m; j++) {
        cin>>temp;
        enemy.insert(temp);
    }

    if (poland.size() > enemy.size())
        cout<<"YES";
    else if (poland.size() < enemy.size())
        cout<<"NO";
    else {
        vector<string> intersection(poland.size());
        vector<string>::iterator itr, jtr;
        itr = set_intersection(poland.begin(), poland.end(), 
            enemy.begin(), enemy.end(), intersection.begin());
        int c = 0;
        for (jtr = intersection.begin(); jtr != itr; jtr++) {
            c++;
        }
        if (c % 2 == 1) 
            cout<<"YES";
        else 
            cout<<"NO";
    }
    
    return 0;
}