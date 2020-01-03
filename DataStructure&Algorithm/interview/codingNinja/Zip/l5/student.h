class student {
	char* name;
	public:
	student(char * n) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~student() {
		delete [] name;
	}

};	
