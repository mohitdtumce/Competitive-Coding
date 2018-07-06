#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, r, g, b;
    cin>>t>>r>>g>>b;
    int visited[t] = {};
    int count1 = 0, count2 = 0, count3 = 0;
    bool red = false, green = false, blue = false;
    for(int i = 0; i < t; i++)
    {
        if(count1 == r)
        {
            red = !red;
            count1 = 0;
        }
        if(count2 == g)
        {
            green = !green;
            count2 = 0;
        }
        if(count3 == b)
        {
            blue = !blue;
            count3 = 0;
        }
        if(red)
            visited[i] += 1; 
        if(green)
            visited[i] += 2; 
        if(blue)
            visited[i] += 4; 
        count1++, count2++, count3++;
    }
    int Red = 0, Green = 0, Blue = 0, Yellow = 0, Cyan = 0, Magenta = 0, White = 0, Black = 0;
    for(int i = 0; i < t; i++)
    {
        if(visited[i] == 0)
            Black++;
        else if(visited[i] == 1)
            Red++;
        else if(visited[i] == 2)
            Green++;
        else if(visited[i] == 3)
            Yellow++;
        else if(visited[i] == 4)
            Blue++;
        else if(visited[i] == 5)
            Magenta++;
        else if(visited[i] == 6)
            Cyan++;
        else if(visited[i] == 7)
            White++;
    }
    cout<<Red<<" "<<Green<<" "<<Blue<<" "<<Yellow<<" "<<Cyan<<" "<<Magenta<<" "<<White<<" "<<Black;
}