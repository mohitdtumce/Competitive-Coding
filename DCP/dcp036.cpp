/*
Given the root to a binary search tree, find the second largest node in the tree.
*/

#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
  public:
    T data;
    Node<T> *left;
    Node<T> *right;
    Node()
    {
        this->left = this->right = NULL;
    }

    Node(T data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node<int> *insertion(Node<int> *root, int data)
{
    if (root == NULL)
    {
        Node<int> *newNode = new Node<int>(data);
        return newNode;
    }
    else
    {
        if (root->data >= data)
        {
            root->left = insertion(root->left, data);
        }
        else
        {
            root->right = insertion(root->right, data);
        }

        return root;
    }
}

int findMin(Node<int> *root)
{
    if (root == NULL)
        return -1;
    else
    {
        while (root->left)
            root = root->left;
        return root->data;
    }
}

int findMax(Node<int> *root)
{
    if (root == NULL)
        return -1;
    else
    {
        while (root->right)
            root = root->right;
        return root->data;
    }
}

Node<int> *deletion(Node<int> *root, int element)
{
    if (root == NULL)
        return NULL;
    else
    {
        if (root->data < element)
        {
            root->right = deletion(root->right, element);
        }
        else if (root->data > element)
        {
            root->left = deletion(root->left, element);
        }
        else
        {
            Node<int> *temp = NULL;
            if (root->left == NULL && root->right == NULL)
            {
                delete (root);
                return NULL;
            }
            else if (root->left == NULL)
            {
                temp = root->right;
                delete (root);
                return temp;
            }
            else if (root->right == NULL)
            {
                temp = root->left;
                delete (root);
                return temp;
            }
            else
            {
                int maxVal = findMax(root->left);
                root->data = maxVal;
                root->left = deletion(root->left, maxVal);
                // or
                // int minVal = findMin(root->right);
                // root->data = minVal;
                // root->right = deletion(root->right, minVal);
            }
        }

        return root;
    }
}

void findKthLargestElementHelper(Node<int> *root, int &curr, int k, int &res)
{
    if (root)
    {
        findKthLargestElementHelper(root->right, curr, k, res);
        curr++;
        if (curr == k)
        {
            res = root->data;
            return;
        }
        findKthLargestElementHelper(root->left, curr, k, res);
    }
}

int findKthLargestElement(Node<int> *root, int k)
{
    int res = -1, curr = 0;
    findKthLargestElementHelper(root, curr, k, res);
    return res;
}

void inorderTraversal(Node<int> *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    Node<int> *root = NULL;
    root = insertion(root, 12);
    root = insertion(root, 2);
    root = insertion(root, 6);
    root = insertion(root, 9);
    root = insertion(root, 1);
    root = insertion(root, 32);
    cout << findKthLargestElement(root, 2) << "\n";
}