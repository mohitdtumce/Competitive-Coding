#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin>>n;
    string name;
    vector<string> chats(n);
    for (long i = 0; i <= n; i++) {
        cin>>chats[i];
    }
    
    unordered_map<string, bool> visited;
    queue<string> Q;
    for (int i = n-1; i >= 0; i--) {
        if (!visited[chats[i]]) {
            Q.push(chats[i]);
            visited[chats[i]] = true;
        }
    }

    while (!Q.empty()) {
        cout<<Q.front()<<"\n";
        Q.pop();
    }
    return 0;
}