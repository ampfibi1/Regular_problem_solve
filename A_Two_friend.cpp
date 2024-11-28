#include<bits/stdc++.h>
using namespace std; 

/*void solve(){
	int n; cin >> n ; 
	map<int,int> m ; 
	for(int i=1; i<=n; ++i){
		int x ; cin >> x ; 
		m[i]=x ; 
	}
	bool f = false ; 
	for(auto x:m)
		if(x.first==m[x.second])
			f = true ;

	cout << (f?2:3) << endl ;  
}*/
void solve(){
	int n; cin >> n ; 
	int a[n+1] ; 

	for(int i=1; i<n+1; ++i){
		cin>>a[i];
	}
	bool f = false ; 
	for(int i=1; i<n+1; ++i){
		if(a[a[i]]==i)
			f = true ; 
	}
	cout << (f?2:3) << endl ; 
}
int main(){
	int t ; cin >> t ; while(t--) solve();
}