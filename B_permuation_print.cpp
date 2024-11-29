#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	vector<int> v(n,0);
	int f = 1 , l = n;  
	for(int i=0; i<n; i+=2) v[i] = f++ ;
	for(int i=1; i<n; i+=2) v[i] = l-- ;

	for(auto x:v) cout << x << " " ;
	cout << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}