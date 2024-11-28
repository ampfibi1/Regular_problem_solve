#include<bits/stdc++.h>
using namespace std; 
#define ll long long

void solve(){
	ll n ; cin >> n ; 
	ll a[n] ; 
	for(ll &x:a) cin >> x ; 
	if(n==1){cout << 1 << endl ; return;}
	if(n%2==0){
		ll mx = 0; 
		for(ll i=0; i<n; i+=2){
			mx = max(mx,a[i+1]-a[i] ) ; 
		}
		cout << mx << endl ; 
	}
	else {
		ll mn = INT64_MAX ; 
		for(ll i=0; i<n; ++i){
			vector<ll> v ; 
			ll mx = 0 ; 
			for(ll j=0; j<n; ++j){
				if(i==j)continue;
				v.push_back(a[j]);
			}
			for(ll k=0; k<n-1; k+=2){
				mx = max(mx,v[k+1]-v[k]);
			}
			mn = min(mn,mx);
		} 
		cout << mn << endl ; 
	}
	
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}

			// amberit download 
			// no . voter id card 
			// 1 min 1 tk ---> 3 min 