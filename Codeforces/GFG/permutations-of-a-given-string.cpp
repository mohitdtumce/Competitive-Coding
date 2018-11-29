#include <bits/stdc++.h>
using namespace std;

void printpermutation(string & str, int start, int end, priority_queue<string, vector<string>, greater<string> > & pq) {
    if (start == end) {
        pq.push(str);
        return;
    }

    for(int i = start; i <= end; i++) {
        swap(str[start], str[i]);
        printpermutation(str, start + 1, end, pq);
        swap(str[start], str[i]);
    }
}
int main() {
    int t;
    string str;
    cin>>t;
    while (t != 0) {
        cin>>str;
        priority_queue<string, vector<string>, greater<string> > pq;
        printpermutation(str, 0, str.size()-1, pq);
        while (!pq.empty()) {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<"\n";
        t -= 1;
    }
    return 0;
}