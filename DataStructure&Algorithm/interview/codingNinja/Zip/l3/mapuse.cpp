#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	map<string, int> map1;
	map1["abc"] = 1;
	int k = map1["def"];
	//int b = map.at("hgu");

	map<string, int>::iterator it = map1.begin();
	while (it != map1.end()) {
		cout << it->first << " " << it->second << endl;
		it++;
	}

}

