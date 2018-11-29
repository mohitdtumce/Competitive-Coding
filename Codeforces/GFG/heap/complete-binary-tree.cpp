#include <bits/stdc++.h>
using namespace std;

int getIndex(node * root, int index) {
    if (root->left == NULL && root->right == NULL)
        return index;
    else {
        int l = index, r = index;
        if (root->left) 
            l = getIndex(root->left, (2*index + 1));
        if (root->right) 
            r = getIndex(root->right, (2*index + 2));
        return max(l, r);
    }
}
int getSize(node * root) {
    if (root) 
        return 1 + getSize(root->left) + getSize(root->right);
    else
        return 0;
}
bool isCompleteBT(node* root)
{
    if (root == NULL)
        return true;
    int maxIndex = getIndex(root, 0);
    int size = getSize(root);
    return (size == maxIndex + 1);
}

int main() {
    return 0;
}