#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int a1 , a2 , b1 , b2 ; 
	cin >> a1 >> a2 >> b1 >> b2 ; 

	int sun = 0 , bob = 0 ; 
	if(a1>b1) sun++ ; 
	if(a1<b1) bob++;
	if(a2>b2) sun++ ; 
	if(a2<b2) bob++;

	int su = 0 , bo = 0 ;
	if(a1>b2) su++; 
	if(a1<b2) bo++;
	if(a2>b1) su++; 
	if(a2<b1) bo++;

	int ans = 0 ; 
	if(su>bo)
		ans++;
	if(sun>bob)
		ans++;
	 
	cout << ans*2 << endl ;
}
int main(){
	int t; cin >> t ; while(t--) solve();
}