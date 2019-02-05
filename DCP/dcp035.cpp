/*
Given an array of strictly the characters 'R', 'G', and 'B', 
segregate the values of the array so that all the Rs come first, 
the Gs come second, and the Bs come last. 

You can only swap elements of the array.

Do this in linear time and in-place.

For example, given the array ['G', 'B', 'R', 'R', 'B', 'R', 'G'], 
it should become ['R', 'R', 'R', 'G', 'G', 'B', 'B'].
*/

#include <bits/stdc++.h>
using namespace std;

void dutchFlagProblem(vector<char> &vec)
{
    int start = 0, mid = 0, end = vec.size() - 1;
    while (mid <= end)
    {
        switch (vec[mid])
        {
        case 'R':
            swap(vec[start], vec[mid]);
            start++;
            mid++;
            break;
        case 'G':
            mid++;
            break;
        case 'B':
            swap(vec[mid], vec[end]);
            end--;
            break;
        default:
            break;
        }
    }
}

void display(const vector<char> &vec)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << "\n";
}

int main()
{
    vector<char> vec = {'G', 'B', 'R', 'R', 'B', 'R', 'G'};
    dutchFlagProblem(vec);
    display(vec);   
}