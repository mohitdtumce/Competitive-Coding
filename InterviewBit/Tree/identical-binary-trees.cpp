#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int isSameTree(TreeNode* a, TreeNode* b) {
    if (a == NULL && b == NULL) 
        return true;

    if (a == NULL || b == NULL) 
        return false;
    
    return (a->val == b->val) && isSameTree(a->left, b->left) && isSameTree(a->right, b->right); 
}

int main() {

}