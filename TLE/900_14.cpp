#include<bits/stdc++.h>
using namespace std; 
#define ll long long 

void solve(){
	ll n ; cin >> n ; 
	ll min = n/6ll , max = n/4ll ; 
	if(n&1) {cout << -1 << endl ; return ;}
	cout << (n+5)/6 << " " << n/4 << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve(); 
}