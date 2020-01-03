#include<iostream>
using namespace std;
#include <set>

int main(){
    std::set<int> mohit;
    int xlevel, ylevel, temp, level;

    cin>>level;
    cin>>xlevel;
    for(int i=0;i < xlevel;i++){
        cin>>temp;
        mohit.insert(temp);
    }
    cin>>ylevel;
    for(int i=0;i < ylevel;i++){
        cin>>temp;
        mohit.insert(temp);
    }

    if(mohit.size() < level){

        cout<<"Oh, my keyboard!";
    }else if(mohit.size()== level){
        cout<<"I become the guy.";
    }

}