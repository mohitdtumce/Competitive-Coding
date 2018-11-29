#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, d1, d2, d3;
    cin>>n>>m;
    vector<int> vec(n+1, 0);
    for (int i = 0; i < m; i++) {
        cin>>d1>>d2>>d3;
        if(vec[d1] == 0 && vec[d2] == 0 && vec[d3] == 0) {
            vec[d1] = 1;
            vec[d2] = 2;
            vec[d3] = 3;
        } else if (vec[d1] != 0) {
            switch (vec[d1]) {
                case 1: vec[d2] = 2; vec[d3] = 3; break;
                case 2: vec[d2] = 3; vec[d3] = 1; break;
                case 3: vec[d2] = 1; vec[d3] = 2; break;
            }
        } else if (vec[d2] != 0) {
            switch (vec[d2]) {
                case 1: vec[d1] = 2; vec[d3] = 3; break;
                case 2: vec[d1] = 3; vec[d3] = 1; break;
                case 3: vec[d1] = 1; vec[d3] = 2; break;
            }
        } else if (vec[d3] != 0) {
            switch (vec[d3]) {
                case 1: vec[d2] = 2; vec[d1] = 3; break;
                case 2: vec[d2] = 3; vec[d1] = 1; break;
                case 3: vec[d2] = 1; vec[d1] = 2; break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout<<vec[i]<<" ";
}