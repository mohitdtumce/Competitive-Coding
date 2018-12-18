#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode * root, vector<TreeNode *> & vec) {
    if (root) {
        vec.push_back(root);
        helper(root->left, vec);
        helper(root->right, vec);
    }
}

TreeNode* flatten(TreeNode* root) {
    if (!root)
        return NULL;
    vector<TreeNode * > vec;
    helper(root, vec);
    vec.push_back(NULL);
    for (int i = 0; i < vec.size()-1; i++) {
        vec[i]->left = NULL;
        vec[i]->right = vec[i+1];
    }
    return vec[0];
}

int main() {

}