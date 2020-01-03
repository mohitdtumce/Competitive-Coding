#include<vector>
using namespace std;

template <typename T>
class TreeNode{
		T data;
		vector<TreeNode*> children;
	public:
		TreeNode(T data) {
			this->data = data;
		}
		
		T getData(){
			return data;
		}
		
		void setData(T data) {
			this->data = data;
		}
	
		int childrenCount(){
			return children.size();
		}
		
		void setChildren(int i,TreeNode* child){
			if(i>=childrenCount()){
				throw "index > childrenCount";
			}
			children[i]=child;
		}
		
		void addChild(TreeNode* child) {
			children.push_back(child);
		}	
		
		TreeNode* getChild(int i) {
			if (i >= children.size()) {
				throw "Index > num of children";
			}
		return children[i];
		}
		
		~TreeNode(){
			for(int i=0;i<children.size();i++){
				delete children[i];
			}
		}
};