//https://codeforces.com/contest/2030/problem/B
#include<iostream>
using namespace std; 

int main(){
	int t; cin >> t ; while(t--){
		int n ; cin >> n ; 
		string s(n,'0');
		s[0] = '1';
		cout << s << endl ; 
	}
}