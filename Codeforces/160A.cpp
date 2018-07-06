#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int coin_count;
    cin>>coin_count;

    vector<int>vec;
    int sum = 0;
    for(int i=0;i<coin_count;i++){
        int temp;
        cin>>temp;
        sum+=temp;
        vec.push_back(temp);
    }

    int sum1=0;
    sort(vec.begin(),vec.end());
    for(int i= vec.size()-1;i>=0;i--){
       sum1 += vec[i];
       if(2*sum1 > sum){
           cout<<(vec.size()-i);
           break;
       }
    }

    return 0;
}