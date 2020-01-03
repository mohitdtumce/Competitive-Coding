#include<iostream>
using namespace std;

int main(){
    int min,max,p,q,i,test;
    int num;
    cin>>num;
    cin>>test;
    min = max = test;
    p = q = 1;
    for(i=2; i<=num ;i++){
        cin>> test;
        if(test <= min){
            min = test;
            p = i;
        }
        if(test > max){
            max = test;
            q = i;
        }
    }

    if(q < p){
     cout<<((num-p)+(q-1))<<"\n";
    }else if( p < q){
      cout<<((num-p)+(q-1)-1)<<"\n";
    }

}