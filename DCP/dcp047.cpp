/*
Given a array of numbers representing the stock prices of a company in chronological order, 
write a function that calculates the maximum profit you could have made from buying and selling 
that stock once. You must buy before you can sell it.

For example, given [9, 11, 8, 5, 7, 10], you should return 5, 
since you could buy the stock at 5 dollars and sell it at 10 dollars.
*/

#include <bits/stdc++.h>
using namespace std;

int calculateMaximumProfit(const vector<int> &vec)
{
    int maxProfit = 0;
    int min = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if (vec[i] < min)
            min = vec[i];
        else
        {
            maxProfit = max(maxProfit, vec[i] - min);
        }
    }

    return maxProfit;
}
int main()
{
    vector<int> price = {9, 11, 8, 5, 7, 10};
    cout << calculateMaximumProfit(price);
    return 0;
}