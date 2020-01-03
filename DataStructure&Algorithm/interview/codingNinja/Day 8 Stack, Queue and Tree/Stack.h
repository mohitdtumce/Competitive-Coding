template <typename T>
class stack{
	private:
		T * array;
		int top;
		int size;
	public:
		stack(){
			size=10;
			top=-1;
			array = new T[size];
		}
		
		bool empty(){
			return(top==-1);
		}
		
		bool full(){
			return(top==size-1);
		}

		void push(T data){
			if(full()){
				throw "Stack overflow!!\n";
			}
			array[++top]=data;
		}
		T pop(){
			if(empty()){
				throw "Stack Empty!!\n";
			}
			return array[top--];
		}
		
		T topmost(){
			if(empty()){
				throw "Stack Empty!!\n";
			}
			return array[top];
		}
};