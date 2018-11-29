#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int count[3] = {};
    for (int i = 0; i < str.size(); i+=2) {
        switch(str[i]) {
            case '1': count[0]++; break;
            case '2': count[1]++; break;
            case '3': count[2]++; break;
        }
    }
    int index = 0, i = 0;
    while (i < str.size()) {
        if(count[index] == 0) {
            index++;
        } else{
            switch (index) {
                case 0: str[i] = '1'; break;
                case 1: str[i] = '2'; break;
                case 2: str[i] = '3'; break;
            }
            i += 2;
            count[index]--;
        }
    }
    cout<<str;
}