class Node {
	int data;
	public:
	Node* next;

	Node(int d) {
		next = NULL;
		data = d;
	}

	~Node() {
		if (next != NULL) {
			delete next;
		}
	}

	int getData() {
		return data;
	}

	void setData(int d) {
		if (d < 0) {
			return;
		}
		data = d;
	}

};
