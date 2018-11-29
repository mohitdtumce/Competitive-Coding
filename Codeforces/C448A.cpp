#include <iostream>

using namespace std;

int main()
{
    int sc=0,sm=0,temp;
    for(int i=0;i<3;i++){
        cin>>temp;
        sc+=temp;
    }
    for(int i=0;i<3;i++){
        cin>>temp;
        sm+=temp;
    }
    int rc=0,rm=0;
    rc = sc/5;
    if(sc%5 != 0){
        rc += 1;
    }
    rm = sm/10;
    if(sm%10 != 0){
        rm += 1;
    }
    int n;
    cin>>n;
    if(n>=(rc+rm)){

        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}