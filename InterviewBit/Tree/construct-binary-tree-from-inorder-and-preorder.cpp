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
TreeNode * helper(vector<int>& pre, vector<int> & in, int * preIndex, int inStart, int inEnd) {
    if (inStart > inEnd) {
        return NULL;
    }
    
    TreeNode * newNode = new TreeNode(pre[*preIndex]);
    (*preIndex)++;
    if (inStart == inEnd)
        return newNode;
    
    int inSearch = search(in, inStart, inEnd, newNode->val);
    newNode->left = helper(pre, in, preIndex, inStart, inSearch-1);
    newNode->right = helper(pre, in, preIndex, inSearch+1, inEnd);
    return newNode;
}

TreeNode* buildTree(vector<int> &pre, vector<int> &in) {
    int preIndex = 0;
    return helper(pre, in, &preIndex, 0, in.size()-1);
}

int main() {

}