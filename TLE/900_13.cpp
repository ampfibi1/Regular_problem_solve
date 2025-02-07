#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve(){
	ll n ; cin >> n ; 
	ll a[n+2] ;  a[0] = a[n+1]= 0 ;
	bool pre_non = false ; 
	ll cnt = 0 ; 
	for(ll i=1; i<=n; i++) cin >> a[i] ;
	for(ll i=1; i<=n+1; i++){
		pre_non  = ( a[i-1]!=0 ?  true :  false ) ;
		if(pre_non && !a[i]){
			cnt++;
		}
	} 
	if(cnt>2) cout << 2 << endl ; 
	else cout << cnt << endl ;
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}