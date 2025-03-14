#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n ; cin >> n ; 
	string s; 
	while(n){
		s.push_back(char((n%10)+48));
		n /= 10;
	}
	cout << s << endl ; 
}