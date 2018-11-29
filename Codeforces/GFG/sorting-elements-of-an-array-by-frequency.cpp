#include <bits/stdc++.h>
using namespace std;

struct element {
    int el;
    int fq;
};

bool comp(element a, element b) {
    if (a.fq > b.fq)
        return true;
    else if (a.fq == b.fq)
        return a.el < b.el;
    else 
        return false;
}

bool comp1(element a, element b) {
    return a.el < b.el;
}

int main()
{
    int t, n;
    cin>>t;
    while(t != 0) {
        cin>>n;
        struct element E[n];
        for (int i = 0; i < n; i++){
            cin>>E[i].el;
            E[i].fq = 1;
        }
        
        sort(E, E + n, comp1);
        for (int i = 1; i < n; i++) {
            if (E[i].el == E[i-1].el) {
                E[i].fq = E[i-1].fq + 1;
                E[i-1].fq = -1;
            }
        }
        sort(E, E+n, comp);

        for (int i = 0; i < n && E[i].fq != -1; i++) {
            for (int j = 0; j < E[i].fq; j++) {
                cout<<E[i].el<<" ";
            }
        }
        cout<<"\n";
        t -= 1;
    }
	return 0;
}