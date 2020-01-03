template <typename T>
class BTnode{
	public:
		T data;
		BTnode* left;
		BTnode* right;
		BTnode(){
			left=NULL;
			right=NULL;
		}
};