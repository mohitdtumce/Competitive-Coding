#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool helper(TreeNode * root, int * height) {
    if (root == NULL)  {
        *height = 0;
        return true;
    }
    int lh = 0, rh = 0;
    bool l = helper(root->left, &lh);
    bool r = helper(root->right, &rh);
    if (l && r) {
        *height = abs(lh-rh);
        return (abs(lh-rh)>1 ? false:true);
    } else {
        return false;
    }
}

int isBalanced(TreeNode* A) {
    int height = 0;
    return helper(A, &height);
} 

int main() {

}