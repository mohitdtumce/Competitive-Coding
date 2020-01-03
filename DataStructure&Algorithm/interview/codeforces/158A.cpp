#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vec;
    int temp;
    for(int i=0;i<n;i++){

        cin>>temp;
        vec.push_back(temp);
    }
    std::sort(vec.begin(),vec.end());
    temp = vec.at(n-k);
    int count=0;
    for(int i=0;i<n;i++){
        if(temp <= vec.at(i) && vec.at(i)>0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}