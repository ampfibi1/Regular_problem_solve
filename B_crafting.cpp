#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n] , b[n] ; 

	for(int &x:a) cin >> x ; 
	for(int &x:b) cin >> x ; 

	for(int i=0; i<n; ++i){
		if(a[i]<b[i]){
			int spend = b[i]-a[i] ;
			// cout << spend << endl ; 
			for(int j=0; j<n; ++j){
				if(i==j) {a[i]+=spend;continue;}
				a[j] -= spend;
			}
			break;
		}
	}

	bool ok = true ; 
	for(int i=0; i<n; ++i){
		if(a[i]<b[i]) {ok = false ; break;} 
	}
	cout << (ok?"YES":"NO") << endl ; 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t ;cin >> t ; while(t--) solve();
	return 0 ; 
}