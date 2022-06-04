#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string simplifyPath(string path)
    {
        int start = 0, end = path.size();
        deque<string> splittedStr;
        string pathSegment = "";
        while (start < end)
        {
            if (path[start] == '/')
            {
                if (pathSegment == "" || pathSegment == ".")
                {
                    // do nothing
                }
                else if (pathSegment == "..")
                {
                    if (!splittedStr.empty()) {
                        cout << "-> Popping " << splittedStr.back() << ",";
                        splittedStr.pop_back();
                    }  
                }
                else
                {
                    cout << "Pushing " << pathSegment << "->";
                    splittedStr.push_back(pathSegment);
                }
                pathSegment = "";
            }
            else
            {
                pathSegment += path[start];
            }
            start++;
        }
        if (pathSegment == "" || pathSegment == ".")
        {
            // do nothing
        }
        else if (pathSegment == "..")
        {
            if (!splittedStr.empty()) {
                cout << "-> Popping " << splittedStr.back() << ",";
                splittedStr.pop_back();
            }  
        }
        else
        {
            cout << "Pushing " << pathSegment << "->";
            splittedStr.push_back(pathSegment);
        }
        string simplifiedPath = "";
        while (!splittedStr.empty())
        {
            simplifiedPath = simplifiedPath + "/" + splittedStr.front();
            splittedStr.pop_front();
        }
        cout << "\n";
        return (simplifiedPath == "" ? "/" : simplifiedPath);
    }
};