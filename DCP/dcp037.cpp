/*
The power set of a set is the set of all its subsets. 
Write a function that, given a set, generates its power set.

For example, given the set {1, 2, 3}, 
it should return {{}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}}.

You may also use a list or array to represent a set.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generatePowerset(const vector<int> &vec)
{
    // Size of vector whose power set is required
    const int Size = 4;
    string pattern = "";
    vector<vector<int>> res;
    for (int i = 0; i < (1 << Size); i++)
    {
        pattern = bitset<Size>(i).to_string();
        vector<int> temp;
        for (int j = 0; j < pattern.size(); j++)
        {
            if (pattern[j] == '1')
            {
                temp.push_back(vec[j]);
            }
        }
        res.push_back(temp);
    }
    return res;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<vector<int>> powerSet = generatePowerset(vec);
    for (int i = 0; i < powerSet.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < powerSet[i].size(); j++)
        {
            cout << powerSet[i][j] << ", ";
        }
        cout << "}\n";
    }
    return 0;
}