//k largest(or smallest) elements in an array
#include <iostream>
#include <climits>
using namespace std;

void swap(int *a,int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}

class Maxheap{
private:
	int *harr;
	int capacity;
	int heap_size;
public:
	Maxheap(int cap){
		this->capacity = cap;
		harr = new int[this->capacity];
		this->heap_size = 0;
	}
	int parent(int i){
		return (i-1)/2;
	}
	int left(int i){
		return (2*i + 1);
	}
	int right(int i){
		return (2*i + 2);
	}
	void insertKey(int key){
		if(heap_size==capacity){
			return;
		}
		heap_size++;
		int i = heap_size-1;
		harr[i] = key;
		while(i != 0 && harr[i] > harr[parent(i)]){
			swap(&harr[i],&harr[parent(i)]);
			i =  parent(i);
		}
	}
	void Maxheapify(int i){
		int l = left(i);
		int r = right(i);
		int largest = i;
		if(l<heap_size && harr[l]>harr[largest]){
			largest  = l;
		}
		if(r < heap_size && harr[r]>harr[largest]){
			largest  = r;
		}
		if(largest != i){
			swap(&harr[i],&harr[largest]);
			Maxheapify(largest);
		}
	}
	int extractMax(){
		if(heap_size <=0){
			return INT_MIN;
		}
		int root = harr[0];
		harr[0] = harr[heap_size-1];
		heap_size--;
		Maxheapify(0);
		return root;
	}
};
void kthLargestElement(int A[],int n,int k){
	Maxheap mh(n);
	for(int i=0;i<n;i++){
		mh.insertKey(A[i]);
	}
	for(int i=0;i<k;i++){
		cout<<mh.extractMax()<<" ";
	}
}
int main(){
	int A[] ={1, 23, 12, 9, 30, 2, 50};
	kthLargestElement(A,7,3);
	return 0;
}