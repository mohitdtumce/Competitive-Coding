#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, t;
    cin>>n>>s>>t;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    bool visited[n] = {};
    int currPos = s;
    int counter = 0;
    while(1) {
        if(currPos == t) { break; }
        if(visited[currPos - 1] == true) { counter = -1; break; }
        visited[currPos-1] = true;
        counter++;
        currPos = arr[currPos-1];
    }
    cout<<counter;
    return 0;
}