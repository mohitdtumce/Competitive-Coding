#include <iostream>
using namespace std;

class pair1 {
	int first;
	int  second;

	public:

	// pre
	pair1 operator ++ () {

	}

	// post
	const pair1 operator ++ (int) {
		first++;
		second++;
		pair1 p(first -1, second - 1);
		return p;
	}

	pair1 operator += (pair1 const & p2) {
		first += p2.first;
		second += p2.second;
		return *this;
	}

	pair1const  operator+ (pair1 const & p2) const {
		pair1 p(first + p2.first, second + p2.second);
		return p;
	}

	bool operator< (pair1 const & p2) const {
		if (this->first == p2.first) {
			return this->second < p2.second;
		}
		return this->first < p2.first;
	}

	pair1(int first, int second): first(first), second(second) {
	//	this->first = first;
		//this->second = second;
	}

	void print() const {
		cout << first << " " << second << endl;
	}

	int getFirst() const{
		return first;
	}

	int getSecond() {
		return second;
	}
};
