class dynamic_array {
	int * data;
	int capacity;
	int lastIndex;

	public:
	dynamic_array() {
		capacity = 10;
		lastIndex = -1;
		data = new int[capacity];
	}

	dynamic_array(int* data, int size) {
		// TODO
	}

	dynamic_array(dynamic_array const & d) {
		// TODO
	}

	// [] access & set

	void pop_back() {
		// check if we need to reduce capacity
	}

	void push_back(int element) {
		// check capacity
	}

	dynamic_array& operator= (dynamic_array const & d) {
		// deep copy, update capacity & lastIndex
		
		return *this;
	}

	~dynamic_array() {

	}

};
