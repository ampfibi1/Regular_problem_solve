#include<bits/stdc++.h>
using namespace std; 
#define ll long long

void solve(){
	ll n ; cin >> n ; 
	ll ans  ; 
	for(ll i=1; i<i+1; ++i){
		// cout << i << endl ; 	
		if(n%i!=0){
			ans = i-1 ; 
			break;
		}
	}
	cout << ans << endl ;
}
int main(){
	int t ; cin >> t ;while(t--) solve();
} 