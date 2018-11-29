#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string seq;
    cin >> seq;
    int lastOccurrence[26] = {};
    int firstOccurrence[26] = {};
    bool closed[26] = {};
    for (int i = 0; i < n; i++)
    {
        lastOccurrence[seq[i] - 'A'] = i;
    }
    for (int i = n-1; i >= 0; i--)
    {
        firstOccurrence[seq[i] - 'A'] = i;
    }

    int count = 0;
    bool res = false;
    for (int i = 0; i < n; i++)
    {
        if (i == firstOccurrence[seq[i] - 'A']) {
            count++;
            closed[i] = true;
            if (count > k) {
                res = true;
                break;
            }
        }
        if (i == lastOccurrence[seq[i] - 'A']) {
            closed[seq[i] - 'A'] = false;
            count--;
            
        }
    }

    if (res)
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    return 0;
}