#include <iostream>
#include <list>
using namespace std;
#define MAX 7

class seperateChaining{
	private:
		list<int>* ht;
		// hash function for seperate chaining
		int hashFunction(int key){
			return (key % MAX);
		} 
	public:
		seperateChaining(){
			ht = new list<int>[MAX];
		}
		
		void pushKey(int key){
			int index = hashFunction(key);
			ht[index].push_front(key);
			//cout<<"Insertion Successful\n";
			//cout<<key<<" inserted in "<<index<<" index\n";
		}
		bool searchKey(int key){
			int index = hashFunction(key);
			list<int>::iterator itr;
			for(itr = ht[index].begin(); itr != ht[index].end(); itr++){
				if(*itr == key){
					//cout<<"Element found at index "<<index<<endl;
					return true;
				}
			}
			//cout<<"Element not found\n";			
			return false;
		}
		bool deleteKey(int key){
			int index = hashFunction(key);
			list<int>::iterator itr;
			bool found = false;
			for(itr = ht[index].begin(); itr != ht[index].end(); itr++){
				if(*itr == key){
					found = true;
				}
			}
			if(found){
				ht[index].remove(key);
				// cout<<"Deletion Successful\n";
				// cout<<key<<" deleted from "<<index<<" index\n";
				return true;
			}else{
				// cout<<"Element not found\n";
				return false;
			}
			
		}

		void view(){
			for(int index = 0;index < MAX;index++){
				list<int>::iterator itr;
				for(itr = ht[index].begin(); itr != ht[index].end(); itr++){
					cout<<*itr<<" ";
				}
				cout<<endl;
			}
		}
};
int main(){
	seperateChaining sc;
	sc.pushKey(50);
	sc.pushKey(700);
	sc.pushKey(76);
	sc.pushKey(85);
	sc.pushKey(92);
	sc.pushKey(73);
	sc.pushKey(101);
	sc.searchKey(50);
	sc.deleteKey(50);
	sc.deleteKey(80);
	sc.view();
	return 0;
}