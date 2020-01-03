#include <iostream>
#include "TreeNode.h"
#include "TreeNode.h"
#include <stack>
#include <stack>
using namespace std;

TreeNode<int>* takeInput() {
	cout << "Enter root data" << endl;
	int n;
	cin >> n;
	TreeNode<int> *root = new TreeNode<int>(n);
	int c;
	cout << "Enter child count"<< endl;
	cin >> c;
	for (int i = 0; i < c; i++) {
		root->addChild(takeInput());
	}
	return root;
}

void print( TreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->getData() << ":";
	for (int i = 0; i < root->childrenCount(); i++) {
		cout << root->getChild(i)->getData() << ",";
	}
	cout << endl;
	for (int i = 0; i < root->childrenCount(); i++) {
		print(root->getChild(i));
	}
	
}


int main() {
	TreeNode<int> * root = takeInput();
	print(root);
	delete root;
}

