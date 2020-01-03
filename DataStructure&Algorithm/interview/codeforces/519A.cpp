#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count1=0,count2=0;
    for(int i=0;i<8;i++){
        cin>>str;
        for(int i=0;i<8;i++){
          switch(str[i]){
            case 'q':count1+=9;break;
            case 'r':count1+=5;break;
            case 'b':count1+=3;break;
            case 'n':count1+=3;break;
            case 'p':count1+=1;break;
            case 'Q':count2+=9;break;
            case 'R':count2+=5;break;
            case 'B':count2+=3;break;
            case 'N':count2+=3;break;
            case 'P':count2+=1;break;
            default: break;
            }
        }
    }
    if(count1==count2){
        cout<<"Draw";
      }else if(count1>count2){
        cout<<"Black";
      }else if(count1<count2){
        cout<<"White";
      }
}