#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ;
	for(int &x:a) cin >> x ;
 
	for(int i=0; i<n-1; i++){
		if(a[i]==i+1){
			continue ;
		}
		if(abs(a[i]-a[i+1])&1){
			if(a[i]>a[i+1])
				swap(a[i],a[i+1]);
		}
	} 
	cout << (is_sorted(a,a+n) ? "YES" : "NO" )  ;
	cout << endl ; 
}
int main(){
	int t ; cin >> t ;while(t--) solve();
	return 0 ; 
}