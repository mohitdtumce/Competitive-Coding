#include <bits/stdc++.h>
using namespace std;

vector<int> equal(vector<int> &vec)
{
    int N = vec.size();
    map<int, pair<int, int>> Hash;
    vector<int> Ans;

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {

            int Sum = vec[i] + vec[j];

            if (Hash.find(Sum) == Hash.end())
            {
                Hash[Sum] = make_pair(i, j);
                continue;
            }

            pair<int, int> p1 = Hash[Sum];
            if (p1.first != i && p1.first != j && p1.second != i && p1.second != j)
            {
                vector<int> ans;
                ans.push_back(p1.first);
                ans.push_back(p1.second);
                ans.push_back(i);
                ans.push_back(j);

                if (Ans.size() == 0)
                    Ans = ans;
                else
                {
                    bool shouldReplace = false;
                    for (int i1 = 0; i1 < Ans.size(); i1++)
                    {
                        if (Ans[i1] < ans[i1])
                            break;
                        if (Ans[i1] > ans[i1])
                        {
                            shouldReplace = true;
                            break;
                        }
                    }
                    if (shouldReplace)
                        Ans = ans;
                }
            }
        }
    }

    return Ans;
}

int main()
{
    return 0;
}