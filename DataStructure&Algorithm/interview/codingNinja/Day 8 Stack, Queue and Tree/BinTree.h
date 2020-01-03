#include<iostream>
using namespace std;
template <typename T>
class BinTree{
	private:
		T data;
	public:
		BinTree* left;
		BinTree* right;
		BinTree(){
			this->left = this->right = NULL;
		}
		void setData(T data){
			this->data=data;
		}
		T getData(){
			return data;
		}
};