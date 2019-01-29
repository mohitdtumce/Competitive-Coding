/*
Implement a URL shortener with the following methods:

shorten(url), which shortens the url into a six-character alphanumeric string, such as zLg6wl.
restore(short), which expands the shortened string into the original url. 

If no such shortened string exists, return null.
Hint: What if we enter the same URL twice?
*/

#include <bits/stdc++.h>
using namespace std;

#define ALLOWED_CHAR "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz01234567890"
#define SHORTLY_SIZE 6

class Shortly
{
    unordered_map<string, string> urlMapper;
    unordered_map<string, string> aliasMapper;

    string computeAlias()
    {
        string short_ly = "";
        for (int i = 0; i < 6; i++)
            short_ly += ALLOWED_CHAR[rand() % 63];
        return short_ly;
    }

  public:
    string shorten(string url)
    {
        if (this->urlMapper.find(url) == this->urlMapper.end())
        {
            string short_ly = "";
            do
            {
                short_ly = computeAlias();
            } while (this->aliasMapper.find(short_ly) != this->aliasMapper.end());
            this->urlMapper[url] = short_ly;
            this->aliasMapper[short_ly] = url;
            return short_ly;
        }
        else
        {
            return urlMapper[url];
        }
    }

    string restore(string short_ly)
    {
        if (this->aliasMapper.find(short_ly) == this->aliasMapper.end())
        {
            throw "URL not found";
        }
        else
        {
            return aliasMapper[short_ly];
        }
    }
};

int main()
{
    Shortly shortly;

    try
    {
        string short_ly = shortly.shorten("https://www.google.com");
        cout << short_ly << " ";
        cout << shortly.restore(short_ly) << "\n";
        short_ly = shortly.shorten("https://www.facebook.com");
        cout << short_ly << " ";
        cout << shortly.restore(short_ly) << "\n";
        short_ly = shortly.shorten("https://www.youtube.com");
        cout << short_ly << " ";
        cout << shortly.restore(short_ly) << "\n";
        cout << shortly.restore("abcdef") << "\n";
    }
    catch (const char *err)
    {
        cout << err << "\n";
    }
    catch (...)
    {
        cout << "Unknown Error";
    }
}