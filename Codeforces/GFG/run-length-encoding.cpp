#include <bits/stdc++.h>
using namespace std;

string runLengthEncoding(string str) {
    int i = 0, start, end, p;
    string temp;
    while (i < str.size() - 1) {
        start = i;
        end = i+1;
        while (end < str.size() && str[end] == str[start]) {
            end++;
        }
        if (end - start == 1) {
            str.insert(start + 1, "1");
            i++;
        } else {
            temp = to_string(end - start);
            str.replace(str.begin() + start + 1, str.begin()+end, temp);
            i += (1 + temp.size());
        }
    }
    return str;
}
int main() {
    int t;
    string str;
    cin>>t;
    while (t--) {
        cin>>str;
        cout<<runLengthEncoding(str)<<"\n";
    }
    return 0;
}