#include<iostream>
using namespace std; 

int main(){
	int n = 2 , m = 3  , r = 1 , c = 2 ; 
	int a[r][c] ; 
	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){
			a[i][j] = (i-1)*m+j ;
		}
	}

	for(int i=0; i<r; ++i){
		for(int j=0; j<c; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl ; 
	}
}	
