#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , k,ans = 1 ; cin >> n >> k ; 
	// cout << n*(n-1)/2 << endl ; 
	if(k>=n-1) ans = 1 ;
	else ans = n ; 
	cout << ans << endl ;
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}