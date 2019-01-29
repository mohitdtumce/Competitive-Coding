/*
Given pre-order and in-order traversals of a binary tree, 
write a function to reconstruct the tree.

For example, given the following preorder traversal: [a, b, d, e, c, f, g]

And the following inorder traversal: [d, b, e, a, f, c, g]

You should return the following tree:

    a
   / \
  b   c
 / \ / \
d  e f  g

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
    Node(T data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

int Search(const vector<int> &inorder, int inStart, int inEnd, int element)
{
    for (int i = inStart; i <= inEnd; i++)
    {
        if (inorder[i] == element)
            return i;
    }
    return -1;
}

Node<int> *helper(const vector<int> &inorder, const vector<int> &preorder,
                  int inStart, int inEnd, int &preIndex)
{
    if (inStart > inEnd)
        return NULL;

    Node<int> *newNode = new Node<int>(preorder[preIndex]);
    preIndex++;

    if (inStart == inEnd)
        return newNode;
    else
    {
        int inIndex = Search(inorder, inStart, inEnd, newNode->data);
        newNode->left = helper(inorder, preorder, inStart, inIndex - 1, preIndex);
        newNode->right = helper(inorder, preorder, inIndex + 1, inEnd, preIndex);
        return newNode;
    }
}

Node<int> *constructTree(const vector<int> &inorder, const vector<int> &preorder,
                         int inStart, int inEnd)
{
    int preIndex = 0;
    return helper(inorder, preorder, inStart, inEnd, preIndex);
}

void preOrderTraversal(Node<int> *root)
{
    if (root)
    {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void inOrderTraversal(Node<int> *root)
{
    if (root)
    {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

int main()
{
    vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};

    Node<int> *root = constructTree(inorder, preorder, 0, 6);
    preOrderTraversal(root);
    cout<<"\n";
    inOrderTraversal(root);
    cout<<"\n";
}