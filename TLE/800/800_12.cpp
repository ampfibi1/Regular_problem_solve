#include<bits/stdc++.h>
using namespace std; 

void solve(){
	int n ; cin >> n ; 
	int a[n] ; 
	vector<int> b , c ; 
	int mx = 0 ;
	for(int &x:a) {
		cin >> x ;
		mx=max(mx,x);
	}
	sort(a,a+n);
	// cout << mx << endl ; 
	for(int x:a){
		if(x==mx)c.push_back(x);
		else b.push_back(x);
	}
	if(!b.size()) cout << -1 << endl ; 
	else{
			cout << b.size() << " " << c.size() << endl ; 
			for(int x:b) cout << x << " " ; 
			cout << endl ; 
			for(int x:c) cout << x << " " ; 
			cout << endl ;
	}
}
int main(){
	int t; cin >> t ; while(t--) solve(); 
	return 0 ; 
}