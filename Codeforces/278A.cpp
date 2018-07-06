#include<iostream>
using namespace std;

int main(){
  int n,s,t,d=0;
  cin>>n;
  int arr[n];
  int sum=0;
  for(int i=0;i<n;i++){
   cin>>arr[i];
   sum+=arr[i];
  }
  cin>>s>>t;
  int large = s>=t?s:t;
  int small = s>=t?t:s;
  for(int i=small;i<large;i++){
      d+=arr[i-1];
    }
  if(d<(sum-d)){
     cout<<d;
  }else{
    cout<<(sum-d);
  }
  return 0;
}