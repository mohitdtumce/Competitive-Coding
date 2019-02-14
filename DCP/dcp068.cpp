/*
On our special chessboard, two bishops attack each other if they share the same diagonal. 
This includes bishops that have another bishop located between them, 
i.e. bishops can attack through pieces.

You are given N bishops, represented as (row, column) tuples on a M by M chessboard. 
Write a function to count the number of pairs of bishops that attack each other. 
The ordering of the pair doesn't matter: (1, 2) is considered the same as (2, 1).

For example, given M = 5 and the list of bishops:

(0, 0)
(1, 2)
(2, 2)
(4, 0)
The board would look like this:

[b 0 0 0 0]
[0 0 b 0 0]
[0 0 b 0 0]
[0 0 0 0 0]
[b 0 0 0 0]
You should return 2, since bishops 1 and 3 attack each other, as well as bishops 3 and 4.
*/

#include <bits/stdc++.h>
using namespace std;

int countBishopAttackPair(const vector<vector<bool>> &Board)
{
    int M = Board.size();
    unordered_map<int, int> L2RDiagonal, R2LDiagonal;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (Board[i][j])
            {
                L2RDiagonal[i + j]++;
                R2LDiagonal[i + M - j]++;
            }
        }
    }
    int res = 0;
    for (auto itr = L2RDiagonal.begin(); itr != L2RDiagonal.end(); itr++)
    {
        res += ((itr->second) * (itr->second - 1)) / 2;
    }

    for (auto itr = R2LDiagonal.begin(); itr != R2LDiagonal.end(); itr++)
    {
        res += ((itr->second) * (itr->second - 1)) / 2;
    }

    return res;
}
int main()
{
    vector<vector<bool>> Board = {{1, 0, 0, 0, 0},
                                  {0, 0, 1, 0, 0},
                                  {0, 0, 1, 0, 0},
                                  {0, 0, 0, 0, 0},
                                  {1, 0, 0, 0, 1}};
    cout << countBishopAttackPair(Board);
    return 0;
}