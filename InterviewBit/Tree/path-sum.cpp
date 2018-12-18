#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int hasPathSum(TreeNode* root, int sum) {
    if (root == NULL) {
        return (sum == 0);
    }
    int req = (sum - (root->val));
    if (root->left == NULL && root->right == NULL) {
        return (req == 0);
    }
    bool ans = false;
    if (root->left)
        ans = ans || hasPathSum(root->left, req);
    if (root->right)
        ans = ans || hasPathSum(root->right, req);
    return ans;
}


int main() {

}