#include <bits/stdc++.h>
using namespace std;

template <class T>
class BinaryTreeNode
{
  public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    BinaryTreeNode()
    {
        this->left = this->right = NULL;
    }

    BinaryTreeNode(T data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

template <class T>
BinaryTreeNode<T> MirrorTree(BinaryTreeNode<T> *root)
{
    if (root == NULL)
        return NULL;

    root->left = MirrorTree(root->left);
    root->right = MirrorTree(root->right);
    BinaryTreeNode<T> *temp = root->right;
    root->right = root->left;
    root->left = temp;
    return root;
}

int main()
{
    return 0;
}