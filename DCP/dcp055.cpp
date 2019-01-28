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
    unordered_set<string> usedAlias;

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
            } while (this->usedAlias.find(short_ly) != this->usedAlias.end());
            urlMapper[url] = short_ly;
            return short_ly;
        }
        else
        {
            return urlMapper[url];
        }
    }

    string restore(string url)
    {
        if (this->urlMapper.find(url) == this->urlMapper.end())
        {
            throw "URL not found";
        }
        else
        {
            return urlMapper[url];
        }
    }
};

int main()
{
    Shortly shortly;
    string short_ly = shortly.shorten("https://www.google.com");
    cout<<short_ly<<"\n";
    short_ly = shortly.shorten("https://www.facebook.com");
    cout<<short_ly<<"\n";
    short_ly = shortly.shorten("https://www.youtube.com");
    cout<<short_ly<<"\n";
}