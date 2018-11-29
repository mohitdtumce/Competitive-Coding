#include <bits/stdc++.h>
using namespace std;

class shirt
{
  public:
    priority_queue<long, vector<int>, greater<int> > pq[3];

    void display() {
        for (int i = 0; i < 3; i++) {
            cout<<i+1<<": ";
            while (!pq[i].empty()) {
                cout<<pq[i].top()<<" ";
                pq[i].pop();
            }
            cout<<"\n";
        }
        
    }
};

int main()
{
    int n;
    cin >> n;
    vector<long> price(n);
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> price[i];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    shirt frontColor, backColor;
    for (int i = 0; i < n; i++)
    {
        frontColor.pq[a[i] - 1].push(price[i]);
        backColor.pq[b[i] - 1].push(price[i]);
    }

    int customer, color;
    long fprice, bprice;
    cin >> customer;
    fprice = frontColor.pq[customer - 1].top();
    bprice = backColor.pq[customer - 1].top();
    if (fprice <= bprice)
    {
        cout << fprice << "\n";
        frontColor.pq[customer - 1].pop();
    }
    else
    {
        cout << bprice << "\n";
        backColor.pq[customer - 1].pop();
    }

    frontColor.display();
    backColor.display();
    // for (int c = 0; c < customer; c++)
    // {
    //     cin >> color;
    //     if (!frontColor.pq[color - 1].empty() && !backColor.pq[color - 1].empty())
    //     {
    //         fprice = frontColor.pq[color - 1].top();
    //         bprice = backColor.pq[color - 1].top();
    //         if (fprice <= bprice)
    //         {
    //             cout << fprice << " ";
    //             frontColor.pq[color - 1].pop();
    //         }
    //         else
    //         {
    //             cout << bprice << " ";
    //             backColor.pq[color - 1].pop();
    //         }
    //     }
    //     else if (!frontColor.pq[color - 1].empty())
    //     {
    //         fprice = frontColor.pq[color - 1].top();
    //         cout << fprice << " ";
    //         frontColor.pq[color - 1].pop();
    //     }
    //     else if (!backColor.pq[color - 1].empty())
    //     {
    //         bprice = backColor.pq[color - 1].top();
    //         cout << bprice << " ";
    //         backColor.pq[color - 1].pop();
    //     }
    //     else
    //     {
    //         cout << "-1 ";
    //     }
    // }
    return 0;
}