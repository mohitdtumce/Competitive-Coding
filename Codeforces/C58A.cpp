#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    string hello = "hello";
    int i = 0, j = 0;
    while (i < str.size() && j < 5) {
        if(str[i] == hello[j]) {
            j++;
        }
        i++;
    }
    if(j == 5)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}