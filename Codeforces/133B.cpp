#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;
#define mod 1000003
int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	long resultant = 0;
	int i = 0;
	unordered_map<char, int> hashmap;
	hashmap['>'] = 8;
	hashmap['<'] = 9;
	hashmap['+'] = 10;
	hashmap['-'] = 11;
	hashmap['.'] = 12;
	hashmap[','] = 13;
	hashmap['['] = 14;
	hashmap[']'] = 15;
	// (a+b)%c = (a%c + b%c)%c
	while (i < str.size()){
		resultant = ((resultant*16) % mod + hashmap[str[i]]) % mod;
		i++;
	}
	cout<<resultant;
	return 0;
}
