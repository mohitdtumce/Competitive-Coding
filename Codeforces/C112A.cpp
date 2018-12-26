#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;
int main()
{
    string first, second;
    cin >> first;
    cin >> second;
    int flag = 0;
    for (int i = 0; i < first.length(); i++)
    {
        if (toupper(first[i]) == toupper(second[i]))
        {
            continue;
        }
        else if (toupper(first[i]) >= toupper(second[i]))
        {
            flag++;
            break;
        }
        else
        {
            flag--;
            break;
        }
    }

    cout << flag;

    return 0;
}