#include <bits/stdc++.h>
using namespace std;

char complementary(char a) {
    switch (a){
        case '1': return '8';
        case '8': return '1';
        case '2': return '7';
        case '7': return '2';
        case '3': return '6';
        case '6': return '3';
        case '4': return '5';
        case '5': return '4';  
        case '9': return '0';     
    }
}
int main() {
    string str;
    cin>>str;
    long long countx = 1, county = 0;
    long long sum = 0;
    for (int i = 1; i < str.size(); i++) {
        if(complementary(str[i]) == str[i-1]) {
            if (county < countx) 
                county++;
            else 
                countx++;
        } else {
            sum += 
            countx = 1;
            county = 0;
        }
    }
    return 0;
}