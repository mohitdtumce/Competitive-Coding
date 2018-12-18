#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode * root, vector<int> & vec) {
    if (root) {
        helper(root->left, vec);
        helper(root->right, vec);
        vec.push_back(root->val);
    }
}
vector<int> postorderTraversal(TreeNode* A) {
    vector<int> vec;
    helper(A, vec);
    return vec;
}

int main() {

}