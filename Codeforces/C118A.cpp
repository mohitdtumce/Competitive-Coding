#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

int main(){
    string test;
    cin>>test;
    for(int i=0;i<test.length();i++){

        if(test[i]== 'A' || test[i]== 'O' || test[i]== 'Y' || test[i]== 'E' || test[i]== 'U' || test[i]== 'I' ||test[i]== 'a' || test[i]== 'o' || test[i]== 'y' || test[i]== 'e' || test[i]== 'u' || test[i]== 'i')
        {
            continue;
        }else{
            if(isupper(test[i])){
                test[i] =tolower(test[i]);
                cout<<"."<<test[i];
            }else{
                cout<<"."<<test[i];
            }
        }
    }
    return 0;
}