#include<iostream>
using namespace std; 
string s ; 

int fact(int n){
	if(!n) return 1 ; 
	return n * fact(n-1) ; 
}
int main(){
	int n = 5 ; 
	int ans = fact(n);
	cout << s << endl ; 
}