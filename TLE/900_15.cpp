#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n]; for(int &x:a) cin >> x ; 

	int  ans = 0 ; 
	for(int i=n-2; i>=0; i--){
		while(a[i]>=a[i+1] && a[i]>0){
			a[i] /= 2 ; 
			ans++;
		}  
		if(a[i]==a[i+1]) {cout << -1 << endl ; return ;}
	}
	cout << ans << endl ; 
}
int main(){
	int t ; cin >> t ;while(t--) solve();
}