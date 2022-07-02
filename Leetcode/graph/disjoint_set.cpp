#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
    vector<int> parent;
    vector<int> size;

public:
    DisjointSet(int capacity)
    {
        parent.resize(capacity);
        size.resize(capacity);
        for (int i = 0; i < capacity; ++i)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int Find(int v)
    {
        if (v != parent[v])
        {
            parent[v] = Find(parent[v]);
        }
        return parent[v];
    }

    void Union(int a, int b)
    {
        int parentA = Find(a);
        int parentB = Find(b);
        if (parentA == parentB)
            return;
        else
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[parentB] = parentA;
            size[parentA] += size[parentB];
        }
    }
};
