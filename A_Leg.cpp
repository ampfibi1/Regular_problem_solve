#include<iostream>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	cout << ((n==2)?1 : n/4 + (n%4)/2) << endl;  
	
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}