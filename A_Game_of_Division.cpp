#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n , k ; cin >> n >> k ; 
	int a[n] ; for(int &x:a) cin >> x ; 

	bool ans = false ; 
	for(int i=0; i<n-1; ++i){
		for(int j=i+1; j<n; ++j){
			int div = abs(a[i]-a[j]) ; 
			if(div%2!=0){ cout << "NO\n" ; break;} 
		}
	}
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}