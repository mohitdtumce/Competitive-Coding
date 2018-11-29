#include <iostream>
#include<string>
using namespace std;

int main()
{
    string test = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char shift;
    cin>>shift;
    string input;
    cin>>input;
    if(shift == 'L'){
        for(unsigned int i=0;i< input.length();i++){
            for(unsigned int j=0;j < test.length(); j++){

                if(input[i] == test[j]){
                    cout<<test[j+1];
                }
            }
        }
    }
    if(shift == 'R'){
        for(unsigned int i=0;i< input.length();i++){
            for(unsigned int j=0;j < test.length(); j++){
                if(input[i] == test[j]){
                    cout<<test[j-1];
                }
            }
        }
    }
}