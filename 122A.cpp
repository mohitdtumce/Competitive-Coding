#include <iostream>
using namespace std;

int anss[] = {
    4,7,44,47,74,77,444,744,447,747,474,774,477,777
};

int main()
{
    int num;
    cin>>num;
    for(int i = 0;i<14;i++){
        if(num % anss[i] == 0){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}