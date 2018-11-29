#include <bits/stdc++.h>
using namespace std;

void reverse(string & str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
void reverseString(string & str) {
    int start = 0, end = 0, len = str.size();
    while (end < len) {
        while (end < len && str[end] != '.') {
            end++;
        }
        if(end < len) {
            reverse(str, start, end - 1);
            end++;
            start = end;
        } else {
            reverse(str, start, end - 1);
        }
    }
    reverse(str, 0, len-1);
}
int main() {
    int t;
    string str;
    cin>>t;
    while (t != 0) {
        cin>>str;
        reverseString(str);
        cout<<str<<"\n";
        t -= 1;
    }
    return 0;
}