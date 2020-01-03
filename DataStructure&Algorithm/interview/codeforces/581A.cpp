#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<std::min(a,b)<<" "<<(std::max(a,b)- std::min(a,b))/2<<"\n";

}