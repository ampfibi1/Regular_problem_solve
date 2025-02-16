#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

ll ops(string d,string s){
	ll ans = 1e9 ; 
	for(ll i=s.size()-1; i>=0; i--){
		for(ll j=i+1; j<s.size(); j++){
			if(s[i]==d[0] && s[j]==d[1]){
				// cout << "ith pos : " << i << " jth pos : " << j << endl ;  
				ans = s.size() - i - 2; ;
				return ans ;
				break;
			}
		}
	}
	return ans ;
}
void solve(){
	ll n; cin >> n; 
	string s = to_string(n) ; 
	string digits[4] = {"25","50","75","00"};
	ll ans = 1e9+1 ;
	for(string digit:digits){
		ll mn = ops(digit,s);
		ans = min(ans,mn) ;
	}
	cout << ans << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}