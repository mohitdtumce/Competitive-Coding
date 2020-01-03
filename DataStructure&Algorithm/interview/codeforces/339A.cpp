#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
#include<vector>
using namespace std;

int main(void){
    string test;
    cin>>test;
    vector<char> vec;

    for(int i=0; i<test.length();i+=2){
        vec.push_back(test[i]);
    }

    sort(vec.begin(),vec.end());

    for(int i=0; i<vec.size();i++){
        cout<<vec[i];

        if(i != (vec.size()-1) ){
            cout<<"+";
        }
    }
    return 0;
}