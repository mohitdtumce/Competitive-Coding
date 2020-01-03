#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T* a, T* b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}

void permute(string str, int start, int end)
{	
	if(start == end)
	{
		cout<<str<<" ";
		return;
	}
	for (int i = start; i <= end; ++i)
	{
		swap<char>(&str[start],&str[i]);
		permute(str,start+1,end);
		swap<char>(&str[start],&str[i]);
	}

}

int main(int argc, char const *argv[])
{
	string str("ABC");
	permute(str, 0 , str.length()-1);	
	return 0;
}
