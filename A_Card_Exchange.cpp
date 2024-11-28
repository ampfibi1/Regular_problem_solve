#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

void solve(){
	int n , k ;cin >> n >> k ; 
	ll a[n] ; 
	map<ll,ll> m ; 
	for(ll i=0; i<n; ++i){
		cin >> a[i] ; m[a[i]]++; 
	}

	ll mx = 0 ; 
	for(auto x : m){
		mx = max(x.second,mx); 
	}

	cout << (mx<k?n:k-1) << "\n" ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}