#include<iostream>
using namespace std;

void checker(long n){
  while(n){
      if(n%10 != 1 && n%100 != 14 && n%1000 != 144){
          cout<<"NO";
          return;
        }else if(n%1000 == 144){
          n=n/1000;
        }else if(n%100 == 14){
          n=n/100;
        }else if(n%10 == 1){
          n=n/10;
        }
    }
  cout<<"YES";

}

int main(){
  long n;
  cin>>n;
  checker(n);
  return 0;
}