#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int search(vector<int> & vec, int start, int end, int x) {
    for (int i = start; i <= end; i++) {
        if (x == vec[i])
            return i;
    }
    return -1;
}
TreeNode * helper(vector<int>& post, vector<int> & in, int * postIndex, int inStart, int inEnd) {
    if (inStart > inEnd) {
        return NULL;
    }
    
    TreeNode * newNode = new TreeNode(post[*postIndex]);
    (*postIndex)--;
    if (inStart == inEnd)
        return newNode;
    
    int inSearch = search(in, inStart, inEnd, newNode->val);
    newNode->right = helper(post, in, postIndex, inSearch+1, inEnd);
    newNode->left = helper(post, in, postIndex, inStart, inSearch-1);
    return newNode;
}

TreeNode* buildTree(vector<int> &in, vector<int> &post) {
    int postIndex = post.size()-1;
    return helper(post, in, &postIndex, 0, in.size()-1);
}

int main() {

}