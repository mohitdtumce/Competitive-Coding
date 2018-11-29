#include <bits/stdc++.h>
using namespace std;

int converter(char ch) {
    switch(ch) {
        case '>': return 8;
        case '<': return 9;
        case '+': return 10;
        case '-': return 11;
        case '.': return 12;
        case ',': return 13;
        case '[': return 14;
        case ']': return 15;
    }
    return 0;
}
#define modulo 1000003
int main() {
    string str;
    cin>>str;
    long long sum = 0;
    for (int i = 0; i < str.size(); i++) {
        sum = (((sum * 16) % modulo) + converter(str[i])) % modulo;
    }
    cout<<sum;
    return 0;
}