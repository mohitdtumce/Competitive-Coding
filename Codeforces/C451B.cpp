#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long temp;
    vector<long> vec;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        vec.push_back(temp);
    }

    bool res = true;
    int start = 0, end = 0, count = 0, numberOfInversions = 0;
    for (int i = 0; i < n-1; i++) {
        if(vec[i] > vec[i+1]){
            count++;
        } else {
            if(count != 0) {
                numberOfInversions++;
                end = i;
                start = i - count;
                count = 0;
                // cout<<numberOfInversions<<" "<<start<<" "<<end<<"\n";
                if (end < n - 1 && vec[end + 1] < vec[start]) {
                    res = false;
                    break;
                }

                if(start > 0 && vec[start - 1] > vec[end]){
                    res = false;
                    break;
                }
            }
        }
    }
    if(count != 0) {
        numberOfInversions++;
        end = n - 1;
        start = n - 1 - count;
        count = 0;
        // cout<<numberOfInversions<<" "<<start<<" "<<end<<"\n";
        if (end < n - 1 && vec[end + 1] < vec[start]) {
            res = false;
        }

        if(start > 0 && vec[start - 1] > vec[end]){
            res = false;
        }
    }

    if(numberOfInversions > 1) {
        res = false;
    }
    if(res) {
        cout<<"yes\n";
        cout<<start+1<<" "<<end+1;
    } else {
        cout<<"no";
    }
    return 0;
}