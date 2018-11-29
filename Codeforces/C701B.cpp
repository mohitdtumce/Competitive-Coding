#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, row, col;
    cin>>n>>m;
    long unattacked = n*n;
    unordered_set<int> rowsAttacked, colsAttacked;
    for (int i = 0; i < m; i++) {
        cin>>row>>col;
        rowsAttacked.insert(row);
        colsAttacked.insert(col);
        unattacked -= n*(long(rowsAttacked.size() + colsAttacked.size()));
        unattacked += (rowsAttacked.size() * colsAttacked.size());  
        cout<<unattacked<<" ";
    }
}