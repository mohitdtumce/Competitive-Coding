#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> maze(n);
    for (int i = 0; i < n; i++)
        cin >> maze[i];
    string seq;
    cin >> seq;
    int sx, sy, ex, ey;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j] == 'S')
            {
                sx = i;
                sy = j;
            }
            else if (maze[i][j] == 'E')
            {
                ex = i;
                ey = j;
            }
        }
    }
    vector<pair<int, int>> direction = {make_pair(-1, 0), make_pair(0, -1),
                                        make_pair(0, +1), make_pair(+1, 0)};
    map<char, pair<int, int>> mymap;
    int count = 0;
    do
    {
        mymap['0'] = direction[0];
        mymap['1'] = direction[1];
        mymap['2'] = direction[2];
        mymap['3'] = direction[3];

        int cx = sx, cy = sy, i = 0;
        while (i < seq.size())
        {
            cx += mymap[seq[i]].first;
            cy += mymap[seq[i]].second;

            if (cx >= n || cy >= m || cx < 0 || cy < 0 || maze[cx][cy] == '#')
            {
                break;
            }

            if (cx == ex && cy == ey)
            {
                count++;
                break;
            }
            i++;
        }
    } while (next_permutation(direction.begin(), direction.end()));
    cout << count;
    return 0;
}