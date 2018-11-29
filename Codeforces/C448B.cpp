#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t) {
    int sStart = 0, tStart = 0;
    while(sStart < s.size() && tStart < t.size()) {
        if(s[sStart] == t[tStart]) {
            tStart++;
        } 
        sStart++;
    }
    return (tStart == t.size());
}

int main() {
    string s, t;
    cin>>s>>t;
    
    // Part 1:
    bool sUnique = false, tUnique = false;
    int hash[26] = {};
    for(int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }
    for(int j = 0; j < t.size(); j++) {
        hash[t[j] - 'a']--;
    }
    for(int i = 0; i < 26; i++) {
        if(hash[i] > 0){
            sUnique = true;
        } else if(hash[i] < 0) {
            tUnique = true;
        }
    }

    if(tUnique == true) {
        cout<<"need tree";
    } else if(tUnique == false && sUnique == false) {
        cout<<"array";
    } else if(tUnique == false && sUnique == true) {
        if (isSubsequence(s, t)) {
            cout<<"automaton";
        } else {
            cout<<"both";
        }
    }
    return 0;
}