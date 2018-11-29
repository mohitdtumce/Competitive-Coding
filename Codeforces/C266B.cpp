// Problem: Queue at the school
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, t;
    cin>>n>>t;
    string Queue;
    cin>>Queue;
    for(int i = 0; i < t; i++) {
        int j = 0;
        while(j < n-1) {
            if(Queue[j] == (char)'B' && Queue[j+1] == (char)'G') {
                swap(Queue[j], Queue[j+1]);
                j += 2;
            } else {
                j += 1;
            }
        }
    }
    cout<<Queue;
    return 0;
}
