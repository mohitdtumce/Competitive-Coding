#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> output;
    if (root == NULL)
        return output;
    stack<TreeNode *> cur_layer;
    cur_layer.push(root);
    stack<TreeNode *> next_layer;
    vector<int> layer_output;
    int d = 0; // 0: left to right; 1: right to left.

    while (!cur_layer.empty())
    {
        TreeNode *node = cur_layer.top();
        cur_layer.pop();
        layer_output.push_back(node->val);
        if (d == 0)
        {
            if (node->left != NULL)
                next_layer.push(node->left);
            if (node->right != NULL)
                next_layer.push(node->right);
        }
        else
        {
            if (node->right != NULL)
                next_layer.push(node->right);
            if (node->left != NULL)
                next_layer.push(node->left);
        }

        if (cur_layer.empty())
        {
            output.push_back(layer_output);
            layer_output.clear();
            cur_layer.swap(next_layer);
            if (d == 1)
                d = 0;
            else
                d = 1;
        }
    }
    return output;
}

int main()
{
}