/*
Given the root to a binary tree, 
implement serialize(root), which serializes the tree into a string, 
and deserialize(s), which deserializes the string back into the tree.

For example, given the following Node class

class Node:
    def __init__(self, val, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
The following test should pass:

node = Node('root', Node('left', Node('left.left')), Node('right'))
assert deserialize(serialize(node)).left.left.val == 'left.left'
*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
  public:
    T data;
    Node *left;
    Node *right;
    Node()
    {
        this->left = NULL;
        this->right = NULL;
    }

    Node(T data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

template <class T>
Node<T> *deserializehelper(const vector<T> &deserializedTree, int &preIndex)
{
    if (preIndex >= deserializedTree.size())
        return NULL;

    Node<T> *newNode = NULL;
    if (deserializedTree[preIndex] == -1)
    {
        preIndex++;
    }
    else
    {
        newNode = new Node<T>(deserializedTree[preIndex]);
        preIndex++;
        newNode->left = deserializehelper(deserializedTree, preIndex);
        newNode->right = deserializehelper(deserializedTree, preIndex);
    }
    return newNode;
}

template <class T>
Node<T> *deserialize(const vector<T> &deserializedTree)
{
    int preIndex = 0;
    return deserializehelper(deserializedTree, preIndex);
}

template <class T>
void levelOrderTraversal(Node<T> *root)
{
    if (root == NULL)
        return;
    queue<Node<T> *> Q;
    Q.push(root);
    Node<T> *temp;
    while (!Q.empty())
    {
        temp = Q.front();
        Q.pop();
        cout << temp->data << " ";
        if (temp->left)
            Q.push(temp->left);

        if (temp->right)
            Q.push(temp->right);
    }
    cout<<"\n";
}

template <class T>
void serializehelper(Node<T> *root, vector<T> &res)
{
    if (root == NULL)
        res.push_back(T(-1));
    else
    {
        res.push_back(root->data);
        serializehelper(root->left, res);
        serializehelper(root->right, res);
    }
}

template <class T>
vector<T> serialize(Node<T> *root)
{
    vector<T> res;
    serializehelper(root, res);
    return res;
}

template <class T>
void display(const vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout<<"\n";
}

int main()
{
    vector<int> vec = {20, 8, 4, -1, -1, 12, 10, -1, -1, 14, -1, -1, -1};
    Node<int> *root = deserialize(vec);
    levelOrderTraversal(root);
    vector<int> res = serialize(root);
    display(res);
    return 0;
}