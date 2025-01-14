#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; int a[n] ; 
	for(auto &x:a) {
		cin >> x ; 
	}

	bool exist = false ; 
	for(int i=0; i<n-1; ++i){
		if(2*min(a[i],a[i+1])>max(a[i],a[i+1]))
			exist = true ; 
	}
	cout << (exist ? "YES\n" : "NO\n" ); 
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0) ; 
	int t ; cin >> t ; while(t--) solve(); 
}