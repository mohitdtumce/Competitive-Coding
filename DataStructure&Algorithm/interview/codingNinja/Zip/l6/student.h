class student {
	int rollNumber;
	char * name;

	public:
	
	student(student const & s) {
		this->rollNumber = s.rollNumber;
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}

	student(char const * name) {
		rollNumber = 100;// TODO logic to give unique rollNumbers
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}

	~student() {
		delete [] name;
	}

	void setRollNumber(int rollNumber) {
		this->rollNumber = rollNumber;
	}

	int getRollNumber() {
		return rollNumber;
	}

	void setName(char const * n) {
		delete [] name;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	char const * getName() {
		return name;
	}

};
