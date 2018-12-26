#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int is = 0, js = 0, ks = 0;
    int l, p, q;
    for (int i = 0; i < n; i++)
    {

        cin >> l >> p >> q;
        is += l;
        js += p;
        ks += q;
    }

    if (!is && !js && !ks)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}