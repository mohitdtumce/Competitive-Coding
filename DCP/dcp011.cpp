/*
Implement an autocomplete system. 
That is, given a query string s and a set of all possible query strings, 
return all strings in the set that have s as a prefix.

For example, given the query string de and the set of strings [dog, deer, deal], 
return [deer, deal].

Hint: Try preprocessing the dictionary into a more efficient data structure 
to speed up queries.
*/

#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE 26

class TrieNode
{
  public:
    bool isWord;
    TrieNode *children[ALPHABET_SIZE];
    TrieNode()
    {
        this->isWord = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            this->children[i] = NULL;
    }
};

class Trie
{
    TrieNode *root;

  public:
    Trie()
    {
        root = new TrieNode();
    }

    void insert(string str)
    {
        TrieNode *crawler = this->root;
        int len = str.size(), index;
        for (int i = 0; i < len; i++)
        {
            index = int(str[i] - 'a') % ALPHABET_SIZE;

            if (crawler->children[index] == NULL)
            {
                crawler->children[index] = new TrieNode();
            }
            crawler = crawler->children[index];
        }
        crawler->isWord = true;
    }

    bool search(string str)
    {
        TrieNode *crawler = this->root;
        int len = str.size(), index;
        for (int i = 0; i < len; i++)
        {
            index = int(str[i] - 'a') % ALPHABET_SIZE;
            if (crawler->children[index] == NULL)
            {
                return false;
            }
            crawler = crawler->children[index];
        }
        return (crawler->isWord);
    }

    bool isLeaf(TrieNode *currNode)
    {
        if (root)
        {
            for (int i = 0; i < ALPHABET_SIZE; i++)
            {
                if (currNode->children[i] != NULL)
                    return false;
            }
        }
        return true;
    }

    bool removalHelper(TrieNode *crawler, string str, int curr, int len)
    {
        if (crawler)
        {
            if (curr == len)
            {
                if (crawler->isWord)
                {
                    crawler->isWord = false;
                    if (isLeaf(crawler))
                        return true;
                    return false;
                }
            }
            else
            {
                int index = (str[curr] - 'a');
                if (removalHelper(crawler->children[index], str, curr + 1, len))
                {
                    delete crawler->children[index];
                    return (isLeaf(crawler) && !crawler->isWord);
                }
            }
        }

        return false;
    }
    bool removal(string str)
    {
        TrieNode *crawler = this->root;
        return removalHelper(crawler, str, 0, str.size());
    }

    // Implement DFS
    void displayHelper(TrieNode *crawler, string &str)
    {
        if (crawler)
        {
            if (crawler->isWord)
            {
                cout << str << "\n";
            }
            for (int i = 0; i < ALPHABET_SIZE; i++)
            {
                if (crawler->children[i])
                {
                    str += char(i + 'a');
                    displayHelper(crawler->children[i], str);
                    str = str.substr(0, str.size() - 1);
                }
            }
        }
    }

    void display()
    {
        string str = "";
        TrieNode *crawler = root;
        displayHelper(crawler, str);
    }

    void findAllStringsWithPrefixHelper(TrieNode *crawler, string &str, const string & prefix)
    {
        if (crawler)
        {
            if (crawler->isWord)
            {
                cout << (prefix + str) << "\n";
            }
            for (int i = 0; i < ALPHABET_SIZE; i++)
            {
                if (crawler->children[i])
                {
                    str += char(i + 'a');
                    findAllStringsWithPrefixHelper(crawler->children[i], str, prefix);
                    str = str.substr(0, str.size() - 1);
                }
            }
        }
    }
    void findAllStringsWithPrefix(string prefix)
    {
        TrieNode *crawler = root;
        int i = 0, len = prefix.size(), index;
        while (i < len && crawler)
        {
            index = (prefix[i] - 'a');
            if (crawler->children[index])
            {
                crawler = crawler->children[index];
                i++;
            }
            else
            {
                return;
            }
        }
        string str = "";
        findAllStringsWithPrefixHelper(crawler, str, prefix);
    }
};
int main()
{
    Trie tr;
    tr.insert("dog");
    tr.insert("dee");
    tr.insert("deer");
    tr.insert("deen");
    tr.insert("deepest");
    tr.insert("deem");
    tr.insert("cow");
    tr.insert("horse");

    tr.findAllStringsWithPrefix("dee");
    return 0;
}