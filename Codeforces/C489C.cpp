#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin>>m>>s;

    if (s == 0) {
        if (m == 1) {
            cout<<"0 0";
        } else {
            cout<<"-1 -1";
        }
        return 0;
    }

    if (9*m < s) {
        cout<<"-1 -1";
        return 0;
    } else {
        string min = "", max = "";
        for(int i = 0; i < m; i++) {
            min += "0";
        }
        max = min;
        int index = 0, s1 = s, counter = 9;
        while(index < m && s1 > 0) {
            if(s1 >= counter) {
                max[index] = char('0' + counter);
                s1 -= counter;
                index++;
            } else {
                counter --;
            }
        }

        index = m-1; s1 = s-1; counter = 9;
        while(index >= 0 && s1 > 0) {
            if(s1 >= counter) {
                min[index] = char('0' + counter);
                s1 -= counter;
                index--;
            } else {
                counter --;
            }
        }

        if(min[0] == '0') {
            min[0] = '1';
        } else {
            index = m-1;
            while(min[index] == '9') {
                index--;
            }
            min[index] = char(min[index] + 1);
        }
        cout<<min<<" "<<max<<"\n";
    }
}