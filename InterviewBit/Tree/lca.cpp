#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool findPath(TreeNode * root, vector<int> & ancestor, int x) {
    if (root == NULL)
        return false;
    
    ancestor.push_back(root->val);
    if (root->val == x)
        return true;
    
    if ((root->left && findPath(root->left, ancestor, x)) && (root->right && findPath(root->right, ancestor, x))) {
        return true;
    }
    ancestor.pop_back();
    return false;
}

int lca(TreeNode* root, int a, int b) {
    if (root == NULL)
        return -1;
    vector<int> A, B;
    if (!findPath(root, A, a) || !findPath(root, A, b))
        return -1;
    
    int i = 0;
    for (; i < min(A.size(), B.size()); i++) {
        if (A[i] != B[i])
            break;
    }
    return A[i-1];
}


int main() {

}