#include <iostream>
#include<string>
using namespace std;

class combo{
private:
    string s1;
    string s2;
    //int data;
public:
    void init(){
        cin>>s1;
        cin>>s2;
        //data = s1.length()>=s2.length()?s1.length():s2.length();
    }
    string getfirst(){
        return s1;
    }

    string val(){
        if(s1.length() <= s2.length()){
            return s1;
        }else{
            return s2;
        }
    }

};

int main()
{
    //cout << "Hello World!" << endl;
    int n,m;
    cin>>n>>m;
    combo var[m];
    for(int i=0;i<m;i++){
        var[i].init();
    }
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            if(s == var[j].getfirst()){
                s = var[j].val();
                cout<<s;
                if(j != (m)){
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}
