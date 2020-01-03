#include <iostream>

using namespace std;

int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    int a[n],b[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
        b[j]=0;
    }
    if(s==t){
        cout<<"0";
        return 0;
    }
    int i;
    for(i=0;i<n;i++){
        if(s!=t && b[s-1]==0){
            b[s-1]=0;
            s=a[s-1];
        }else{
            if(s==t){
               cout<<i;
               return 0;
            }else if(b[s-1]==-1){
                cout<<"-1";
                return 0;
            }
        }
    }
    cout<<"-1";
    return 0;
}