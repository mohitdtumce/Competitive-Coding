#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode * helper(const vector<int> & arr, int start, int end) {
    if (start > end)
        return NULL;
    
    int mid = (start + end)/2;
    TreeNode * newNode = new TreeNode (arr[mid]);
    if (start == end)
        return newNode;
    
    newNode->left = helper(arr, start, mid-1);
    newNode->right = helper(arr, mid+1, end);
    return newNode;
}
TreeNode* sortedArrayToBST(const vector<int> &A) {
    return helper(A, 0, A.size()-1);
}

int main() {

}