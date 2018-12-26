#include <iostream>
#include <string>
using namespace std;

int main()
{
  std::string strS, strT;
  cin >> strS;
  cin >> strT;

  int count = 0;
  unsigned len = strT.length();

  for (int i = 0; i < strS.length(); i++)
  {
    if (strS[i] != strT[len - 1 - i])
    {
      std::cout << "NO";
      count = 1;
      break;
    }
  }
  if (count == 0)
  {
    std::cout << "YES";
  }

  return 0;
}