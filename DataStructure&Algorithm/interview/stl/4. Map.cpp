#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	// Constructor
	//1. Default constructor
	map<char,int>first;
	first.insert(pair<char,int>('a',10));
	first.insert(pair<char,int>('b',20));
	first.insert(pair<char,int>('c',30));
	first.insert(pair<char,int>('d',40));
	cout<<first.size()<<endl;
	//2. Range constructor
	map<char,int>second(first.begin(),first.end());
	cout<<second.size()<<endl;
	//3. Copy constructor
	map<char,int>third(second);
	cout<<third.size()<<endl;
	
	//===============================================
	// Operator[] mapped_type& operator[](const key_type& k)
	map<char,string> mymap;
	mymap['a']="Aloha";
	mymap['b']="Basic";
	mymap['c']="Class";
	mymap['d']="Dumb";
	cout<<"mymap['a'] "<<mymap['a']<<endl;
	cout<<"mymap['b'] "<<mymap['b']<<endl;
	cout<<"mymap['c'] "<<mymap['c']<<endl;
	cout<<"mymap['d'] "<<mymap['d']<<endl;
	cout<<"mymap['e'] "<<mymap['e']<<endl;
	//cout<<"mymap['f'] "<<mymap.at('f')<<endl;
	cout<<mymap.size()<<endl;
	
	//=================================================
	// insert	iterator erase(const_iterator position);
	// insert	size_type erase(const key_type& K);
	// insert	iterator erase(const_iterator first,const_iterator last);
	map<char,int>mmap;
	map<char,int>::iterator it;
	mmap['a']=10;mmap['b']=20;mmap['c']=30;mmap['d']=40;mmap['e']=50;mmap['f']=60;
	it=mmap.find('b');
	//type 1
	mmap.erase(it);
	//type 2
	mmap.erase('c');
	//type 3
	it=mmap.find('e');
	mmap.erase(it,mmap.end());
	
	for(it=mmap.begin();it!=mmap.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}