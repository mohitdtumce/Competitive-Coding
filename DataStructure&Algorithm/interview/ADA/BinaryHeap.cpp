#include <iostream>
#include <climits>
using namespace std;
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
class MinHeap{
private:
	int *harr;
	int capacity;
	int heapSize;
public:
	MinHeap(int capacity){
		this->capacity=capacity;
		this->heapSize=0;
		harr = new int[this->capacity];
	}
	int left(int i){
		return (2*i + 1);
	}
	int right(int i){
		return (2*i + 2);
	}
	int parent(int i){
		return (i/2);
	}
	void MinHeapify(int i){
		int l = left(i);
		int r = right(i);
		int smallest = i;
		if (l < heapSize && harr[l] < harr[i])
		    smallest = l;
		if (r < heapSize && harr[r] < harr[smallest])
		    smallest = r;
		if (smallest != i)
		{
		    swap(&harr[i], &harr[smallest]);
		    MinHeapify(smallest);
		}
	}
	void insertKey(int k){
		if(heapSize==capacity){
			return;
		}
		heapSize++;
		int i = heapSize-1;
		harr[i]=k;
		while(i!=0 && harr[parent(i)] > harr[i]){
			swap(&harr[i],&harr[parent(i)]);
			i = parent(i);
		}

	}
	void decreaseKey(int i,int new_val){
		harr[i] = new_val;
		while (i != 0 && harr[parent(i)] > harr[i])
		{
		   swap(&harr[i], &harr[parent(i)]);
		   i = parent(i);
		}
	}

	int extractMin(){
		if(heapSize<=0){
			return INT_MAX;
		}
		if(heapSize==1){
			heapSize--;
			return harr[0];
		}
		int root = harr[0];
		harr[0] = harr[heapSize-1];
		heapSize--;
		MinHeapify(0);
		return root; 
	}
	void deleteKey(int i){
		decreaseKey(i, INT_MIN);
    	extractMin();
	}
	void Traversal(){
		for(int i=0;i<heapSize;i++){
			cout<<harr[i]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    h.Traversal();
    h.deleteKey(2);
    h.Traversal();
	return 0;
}