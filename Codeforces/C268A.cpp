#include<iostream>
using namespace std;
int main(){
    int team_count;
    cin>>team_count;
    int home_color[team_count];
    int guest_color[team_count];
    for(int j=0;j<team_count;j++){
       cin>>home_color[j];
       cin>>guest_color[j];
    }
    int count =0;
    for(int i = 0;i<team_count;i++){
        for(int j = 0;j<team_count;j++){
            if(home_color[i] == guest_color[j] && i != j){
                count++;
            }
        }
    }
    cout<<count<<"\n";

    return 0;
}