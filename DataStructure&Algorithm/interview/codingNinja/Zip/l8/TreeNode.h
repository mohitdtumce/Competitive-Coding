#ifndef TREENODE_H
#define TREENODE_H
#include <vector>
using namespace std;
template <typename T>
class TreeNode {
	T data;
	vector<TreeNode*> children;

	public:
	TreeNode(T data) {
		this->data = data;
	}

	int childrenCount() {
		return children.size();
	}

	void addChild(TreeNode* child) {
		children.push_back(child);
	}

	void setChild(int i, TreeNode* child) {
		if (i >= children.size()) {
			throw "Index > num of children";
		}
		children[i] = child;
	}

	TreeNode* getChild(int i) {
		if (i >= children.size()) {
			throw "Index > num of children";
		}
		return children[i];
	}

	T getData() {
		return data;	
	}

	void setData(T data) {
		this->data = data;
	}

	~TreeNode() {
		for (int i = 0; i < children.size(); i++) {
			delete children[i];
		}
	}
};
#endif
