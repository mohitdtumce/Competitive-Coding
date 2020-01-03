#include<iostream>
#include<deque>
using namespace std;


int main(){
	// Constructors
	//1. Default constructor
	deque<int> first;
	//2. Fill constructor
	deque<int> second(4,100);
	//3. Range constructor
	deque<int> third(second.begin(),second.end());
	//4. Copy constructor
	deque<int> fourth(third);
	
	//-------------------------------------
	deque<int> mydeque;
	for(int i=1;i<=10;i++){
		mydeque.push_back(i);
	}
	for(int i=1;i<=10;i++){
		mydeque.push_front(-i);
	}
	bool flag=true;
	while(mydeque.empty()==false){
		if(flag==true){
			cout<<mydeque.back()<<" ";
			mydeque.pop_back();
			flag=false;
		}else{
			cout<<mydeque.front()<<" ";
			mydeque.pop_front();
			flag=true;
		}
	}
	cout<<endl;
	//------------------------------------
	deque<int> dq;
	for(int i=1;i<=10;i++){
		dq.push_back(i);
	}
	deque<int>::iterator itr=dq.begin();
	// iterator insert(const_iterator position,const value_type& val);
	++itr;
	itr=dq.insert(itr,10);
	for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
	cout<<endl;
	// iterator insert(const_iterator position,size_type n,const value_type& val);
	dq.insert(itr,2,20);
	for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
	cout<<endl;

	//--------------------------------------------
	// iterator erase(const_iterator position)
	dq.erase(dq.begin()+2);
	for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
	cout<<endl;
	// iterator erase(const_iterator first,const_iterator last)  [first, last)
	dq.erase(dq.begin()+1,dq.begin()+3);
	for(int i=0;i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
	cout<<endl;
	return 0;
}