#include<bits/stdc++.h>
using namespace std;
#define ascii 256
string FindSubstring (string A, string B) {
    int len1 = A.length();
    int len2 = B.length();
    if (len1 < len2)
    {
        return "-1";
    }
    int hash_B[ascii] = {0};
    int hash_A[ascii] = {0};
    for (int i = 0; i < len2; i++)
        hash_B[B[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0;
    for (int j = 0; j < len1 ; j++)
    {
        hash_A[A[j]]++;
        if (hash_B[A[j]] != 0 &&
            hash_A[A[j]] <= hash_B[A[j]] )
            count++;
        if (count == len2)
        {
            while ( hash_A[A[start]] > hash_B[A[start]] || hash_B[A[start]] == 0)
            {
                if (hash_A[A[start]] > hash_B[A[start]])
                    hash_A[A[start]]--;
                start++;
            }
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    if (start_index == -1)
    {
        return "-1";
    }
    return A.substr(start_index, min_len);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        string A;
        cin>>A;
        string B;
        cin>>B;

        string out_;
        out_ = FindSubstring(A, B);
        cout << out_;
        cout << "\n";
    }
}