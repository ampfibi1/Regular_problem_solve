#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ; 
	unordered_map<int,int> m ; 
	for(int &x:a) {cin >> x ; m[x]++; }

	int mx = 0 ; 
	for(auto x:m) mx = max(mx,x.second) ;


	cout << n-mx <<  endl ;
}
int main(){
	int t ; cin >> t ;while(t--) solve();
	return 0 ; 
}