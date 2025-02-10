#include <bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve(){
	ll x , n  ;
	cin >> x >> n ; 
	ll ans = 0 ; 
	if(x&1){
		if(n%4==0) ans = x ; 
		if(n%4==1) ans = x+n ;  
		if(n%4==2) ans = x -1; 
		if(n%4==3) ans = x-(n+1);
	}
	else{
		if(n%4==0) ans = x ; 
		if(n%4==1) ans = x-n ;  
		if(n%4==2) ans = x+1 ; 
		if(n%4==3) ans = x+n+1;
	}

	cout << ans << endl;
}
int main(){
	int t; cin >> t ; while(t--) solve();
}