//https://codeforces.com/contest/2024/problem/B
#include<bits/stdc++.h>
#define ll long long 
using namespace std; 

void solve(){
	int n , k ; cin >> n >> k ; 
	int a[n];
	for(auto &x:a) cin >> x ; 
	sort(a,a+n);
	ll pre_sum = 0 , ans = 0 ; 
	for(int i = 0 ; i<n; ++i){
		// cout << (n-i)*a[i]+pre_sum << " " << i << endl  ; 
		ll mul = (n-i) ; 
		ll sum = mul*a[i]+pre_sum  ; 
		if(sum>= k)
			{ans = i ;  break;}
		pre_sum +=a[i] ;  
	}
	cout << k+ans << endl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ; cin >> t ; while(t--) solve();
}