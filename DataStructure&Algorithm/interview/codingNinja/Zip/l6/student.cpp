#include <iostream>
#include "student.h"
using namespace std;

int main() {
	//char * a = "abcd";
	char a[] = "abcd";

	student s(a);
	a[3] = '\0';

	student* sp = new student("ddb");
	cout << sp->getName() << endl;
	cout << s.getName() << endl;

	student s3(s);
	student s4("dbdbhdbf");
	
	s3 = s4;
	s3.setName("dbsbhsvgvgf");// this will delete s3's old(s4's current) name
	//cout << s.rollNumber << endl;
}

