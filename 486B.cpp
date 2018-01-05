#include <iostream>

using namespace std;

int A[100][100] = {};
int B[100][100] = {};

int m , n;

void zero(int x , int y){
	for(int i = 0 ; i < n ; i++){
		A[x][i] = 0;
	}	
	for(int i = 0 ; i < m ; i++){
		A[i][y] = 0;
	}
}
bool check(int x , int y){
	for(int i = 0 ; i < m ; i++){
		if(A[x][i] == 1){
			return true;
		}
	}
	for(int i = 0 ;  i < n ; i++){
		if(A[i][y] == 1){
			return true;
		}
	}
	return false;
}
int main(){
	cin >> m >> n;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			A[i][j] = 1;
			cin >> B[i][j];
		}
	}
	for(int x = 0 ; x < m ; x++){
		for(int y = 0 ; y < n ; y++){
			if(B[x][y] == 0){
				zero(x,y);
			}
		}
	}
	bool correct = true;
	for(int x = 0 ; x < m ; x++){
		for(int y = 0 ; y < n ; y++){
			if(B[x][y] == 1){
				correct &= check(x,y);
			}
		}
	}
	cout << (correct ? "YES" : "NO") << endl;
	if(correct){
		for(int x = 0 ; x < m ; x++){
			for(int y = 0; y < n ; y++){
				cout << A[x][y] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}