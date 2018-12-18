#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// void findMinMax(TreeNode * root, int * min, int * max, int curr) {
//     if (!root)
//         return;
    
//     if (*min > curr) 
//         curr = *min;
//     else if (*max < curr)
//         curr = *max;
//     findMinMax(root->left, min, max, curr-1);
//     findMinMax(root->right, min, max, curr+1);
// }
// void findGivenLevel(TreeNode * root, int level, int currLevel, vector<int>& vec) {
//     if (!root)
//         return;
    
//     if (level == currLevel) {
//         vec.push_back(root->val);
//     }
    
//     findGivenLevel(root->left, level, currLevel-1, vec);
//     findGivenLevel(root->right, level, currLevel+1, vec);
        
// }
// vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* root) {
//     int minVal = 0, maxVal = 0;
//     findMinMax(root, &minVal, &maxVal, 0);
//     vector<vector<int> > res;
//     vector<int> vec;
//     for (int i = minVal; i <= maxVal; i++) {
//         vec.clear();
//         findGivenLevel(root, i, 0, vec);
//         res.push_back(vec);
//     }
//     return res;
// }


vector<vector<int> > verticalOrderTraversal(TreeNode* root) {
    if (!root) 
        return {};
    map<int, vector<int> > mymap;
    queue<pair<TreeNode *, int> > Q;
    pair<TreeNode *, int> temp;
    Q.push(make_pair(root, 0));
    while(!Q.empty()) {
        temp = Q.front(); Q.pop();
        TreeNode * tempNode = temp.first;
        int tempDist = temp.second;
        mymap[tempDist].push_back(tempNode->val);
        if (tempNode->left) {
            Q.push(make_pair(tempNode->left, tempDist-1));
        }
        if (tempNode->right) {
            Q.push(make_pair(tempNode->right, tempDist+1));
        }
    }
    
    vector<vector<int> > res;
    for (auto itr = mymap.begin(); itr != mymap.end(); itr++) {
        res.push_back(itr->second);
    }
    return res;
}
int main() {

}