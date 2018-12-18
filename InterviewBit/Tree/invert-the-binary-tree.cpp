#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* invertTree(TreeNode* root) {
    if (!root)
        return NULL;
    TreeNode * left = root->left;
    TreeNode * right = root->right;
    root->left = invertTree(right);
    root->right = invertTree(left);
    return root;
}

int main() {

}