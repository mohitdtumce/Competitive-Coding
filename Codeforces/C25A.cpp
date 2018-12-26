#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count0 = 0, count1 = 0;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] % 2 == 0)
        {
            count0++;
        }
        else
        {
            count1++;
        }
    }
    if (count0 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 0)
            {
                cout << i + 1 << "\n";
            }
        }
    }
    else if (count1 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (array[i] % 2 == 1)
            {
                cout << i + 1 << "\n";
            }
        }
    }
    return 0;
}