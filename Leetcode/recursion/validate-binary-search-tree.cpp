#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    bool isValidBST(TreeNode *root, long minVal, long maxVal)
    {
        if (root == NULL)
        {
            return true;
        }
        else if (long(root->val) < minVal || (root->val) > maxVal)
            return false;
        else
            return isValidBST(root->left, minVal, root->val) && isValidBST(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode *root)
    {
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }
};