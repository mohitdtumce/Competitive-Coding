#include <bits/stdc++.h>
using namespace std;

int findMinFlicks(string & sherlock, string & moriarty, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
        count += (sherlock[i] > moriarty[i])?1:0;
    return count;
}

int findMaxFlicks(string & sherlock, string & moriarty, int n) {
    int starts = 0, startm = 0, count = 0;
    while (starts < n && startm < n) {
        if (sherlock[starts] < moriarty[startm]) {
            count++;
            starts++;
            startm++;
        } else if (sherlock[starts] >= moriarty[startm]) {
            startm++;
        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    string sherlock, moriarty;
    cin>>sherlock>>moriarty;
    sort(sherlock.begin(), sherlock.end());
    sort(moriarty.begin(), moriarty.end());
    cout<<findMinFlicks(sherlock, moriarty, n)<<"\n";
    cout<<findMaxFlicks(sherlock, moriarty, n)<<"\n";
    return 0;
}