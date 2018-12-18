#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int isMirror(TreeNode* a, TreeNode* b) {
    if (a == NULL && b == NULL) 
        return true;

    if (a == NULL || b == NULL) 
        return false;
    
    return (a->val == b->val) && isMirror(a->left, b->right) && isMirror(a->right, b->left); 
}


int isSymmetric(TreeNode* root) {
    if (!root)
        return true;

    return isMirror(root, root);
}

int main() {

}