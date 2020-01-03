//k largest(or smallest) elements in an array
#include <iostream>
#include <climits>
using namespace std;

void swap(int *a,int *b){
	int temp =*a;
	*a = *b;
	*b = temp;
}

class Minheap{
private:
	int *harr;
	int capacity;
	int heap_size;
public:
	Minheap(int capacity){
		this->capacity = capacity;
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
	void Minheapify(int i){
		int l = left(i);
		int r = right(i);
		int smallest = i;

		if(l < heap_size && harr[l] < harr[smallest]){
			smallest = l;
		}
		if(r < heap_size && harr[r] < harr[smallest]){
			smallest = r;
		}
		if(smallest!=i){
			swap(&harr[i],&harr[smallest]);
			Minheapify(smallest);
		}
	}
	void insertKey(int element){
		if(heap_size==capacity){
			return;
		}
		heap_size++;
		int i = heap_size-1;
		harr[i] = element;
		while(i!=0 && harr[i]<harr[parent(i)]){
			swap(&harr[i],&harr[parent(i)]);
			i = parent(i);
		}
	}
	int extractMin(){
		if(heap_size<=0){
			return INT_MAX;
		}
		int root = harr[0];
		harr[0] = harr[heap_size-1];
		heap_size--;
		Minheapify(0);
		return root;
	}
};

void kthSmallestElement(int A[],int n,int k){
	Minheap mh(n);
	for(int i=0;i<n;i++){
		mh.insertKey(A[i]);
	}
	for(int i=0;i<k;i++){
		cout<<mh.extractMin()<<" ";
	}
}
int main(){
	int A[] ={1, 23, 12, 9, 30, 2, 50};
	kthSmallestElement(A,7,3);
	return 0;
}
