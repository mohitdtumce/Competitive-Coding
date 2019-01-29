/*
Suppose an arithmetic expression is given as a binary tree. 
Each leaf is an integer and each internal node is one of '+', '−', '∗', or '/'.

Given the root to such a tree, write a function to evaluate it.

For example, given the following tree:

     *
    / \
  +    +
 / \  / \
3  2  4  5

You should return 45, as it is (3 + 2) * (4 + 5).
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
};

void postOrderTraversal(Node<string> *root, queue<string> &Q)
{
    if (root)
    {
        postOrderTraversal(root->left, Q);
        postOrderTraversal(root->right, Q);
        Q.push(root->data);
    }
}

bool isOperator(string element)
{
    return (element == "+" || element == "-" || element == "*" || element == "/");
}
int evaluateTree(Node<string> *root)
{
    queue<string> Q;
    postOrderTraversal(root, Q);

    // Evaluate postfix expression
    string element;
    stack<int> S;
    int a, b;
    while (!Q.empty())
    {
        element = Q.front();
        Q.pop();
        if (isOperator(element))
        {
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();

            switch (element[0])
            {
            case '+':
                S.push(b + a);
                break;
            case '-':
                S.push(b - a);
                break;
            case '*':
                S.push(b * a);
                break;
            case '/':
                S.push(b / a);
                break;
            default:
                break;
            }
        }
        else
        {
            S.push(stoi(element));
        }
    }

    return S.top();
}

int main()
{

    return 0;
}
