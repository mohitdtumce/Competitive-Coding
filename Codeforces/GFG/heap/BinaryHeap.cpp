#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    vector<int> harr;
    int size;
    int getParent(int index) { return ((index - 1)/2); }

    int getLeftChild(int index) { return (2*index + 1); }

    int getRightChild(int index) { return (2*index + 2); }

    void heapify(int index) {
        int smallest = index;
        int l = getLeftChild(index);
        int r = getRightChild(index);
        if (l < size && harr[l] < harr[smallest])
            smallest = l;
        
        if (r < size && harr[r] < harr[smallest])
            smallest = r;
        
        if (smallest != index) {
            swap(harr[smallest], harr[index]);
            heapify(smallest);
        }
    }

public:
    
    MinHeap() {
        size = 0;
    }

    int insert(int x) {
        size++;
        harr.push_back(x);
        int index = size - 1;
        while (index != 0 && harr[index] < harr[getParent(index)]){
            swap(harr[index], harr[getParent(index)]);
            index = getParent(index);
        }
    }

    int getMin() {
        if (size == 0)
            throw "Heap Empty";
        else
            return harr[0];
    }

    void extractMin() {
        if (size == 0)
            throw "Heap Empty";
        else if (size == 1) {
            size -= 1;
        } else {
            harr[0] = harr[size-1];
            size -= 1;
            heapify(0);
        }
    }
};
int main() {

    MinHeap mh;
    mh.insert(10);
    mh.insert(20);
    mh.insert(1);
    mh.insert(8);
    mh.insert(19);
    mh.insert(31);
    mh.insert(3);
    mh.insert(11);
    mh.insert(33);
    cout<<mh.getMin()<<"\n";
    mh.extractMin();
    cout<<mh.getMin()<<"\n";
    mh.extractMin();
    cout<<mh.getMin()<<"\n";
    mh.extractMin();
    cout<<mh.getMin()<<"\n";
     mh.extractMin();
    cout<<mh.getMin()<<"\n";
    mh.extractMin();
    cout<<mh.getMin()<<"\n";
    return 0;
}