#include<iostream>
#include<algorithm>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n] ; 
	for(int &x:a){
		cin >> x ; 
	}
	int ans = a[0]; 
	for(int &x:a){
		ans &=  x ; 
	}	
	cout << ans << endl ; 
}
int main(){
	int t; cin >> t; while(t--) solve();
}