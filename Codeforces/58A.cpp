#include <iostream>
#include <string>
using namespace std;

int main()
{
    string test;
    cin>>test;
    string array ="hello";
    int j=0;
    for(unsigned int i=0;i<test.length();i++){
        if(test[i]==array[j]){
            j++;
        }
    }
    if(j==5){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}