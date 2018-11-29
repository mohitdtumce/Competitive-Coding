#include <bits/stdc++.h>
using namespace std;


int main() {
    int t, n, k, stream;
    cin>>t;
    while(t != 0) {
        cin>>k>>n;
        priority_queue<int, vector<int>, greater<int> > pq;
        for (int i = 1; i <= k; i++){
            cin>>stream;
            pq.push(stream);
            if (i < k) {
                cout<<"-1 ";
            } else {
                cout<<pq.top()<<" ";
            }
        }
        for (int i = k+1; i <= n; i++) {
            cin>>stream;
            if (pq.top() < stream) {
                pq.pop();
                pq.push(stream);
            }
            cout<<pq.top()<<" ";
        }
        cout<<"\n";
        t -= 1;
    }
	return 0;
}