#include <iostream>
#include <climits>
using namespace std;

void swap(int* a,int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

class minHeap{
private:
	int* harr;
	int count;
	int capacity;
public:
	minHeap(int capacity){
		this->capacity = capacity;
		harr = new int[this->capacity];
		count = 0;
	}

	int parent(int i){
		return (i-1)/2;
	}
	int leftChild(int i){
		return 2*i + 1;
	}
	int rightChild(int i){
		return 2*i + 2;
	}

	void insertKey(int key){
		if(count == capacity){
			return;
		}
		count++;
		int i = count-1;
		harr[i] = key;
		while(i != 0 && harr[parent(i)] > harr[i]){
			swap(&harr[parent(i)], &harr[i]);
			i = parent(i);
		}
	}

	void decreaseKey(int i,int new_val){
		harr[i] = new_val;
		while(i != 0 && harr[parent(i)] > harr[i]){
			swap(&harr[parent(i)], &harr[i]);
			i = parent(i);
		}
	}

	void deleteKey(int i){
		decreaseKey(i,INT_MIN);
		extractMin();
	}

	int extractMin(){
		if(count <= 0){
			return INT_MAX;
		}
		
		if(count == 1){
			count--;
			return harr[0];
		}

		int root = harr[0];
		harr[0] = harr[count-1];
		count--;
		minHeapify(0);
		return root;
	}

	void minHeapify(int i){
		int smallest = i;
		int l = leftChild(i);
		int r = rightChild(i);

		if(l < count && harr[l] < harr[smallest]){
			smallest = l;
		}
		if(r < count && harr[r] < harr[smallest]){
			smallest = r;
		}

		if(smallest != i){
			swap(&harr[i],&harr[smallest]);
			minHeapify(smallest);
		}
	}
};

int main(){
	minHeap h(11);
	h.insertKey(3);
    h.insertKey(2);
    //h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout<<h.extractMin()<<" ";
    cout<<h.extractMin()<<" ";
    cout<<h.extractMin()<<" ";

}